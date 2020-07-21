//  a.写一个程序，为给定的英文文本构造一套哈夫 曼编码，并对该文本编码。
public String getEncodeofCharacter (char c) {
		Stack<String> stack1 = new Stack<String>();
		Stack<HuffmanNode> stack2 = new Stack<HuffmanNode>();
		String code = "";
		if (root == null) {
			return "";
		}
		
		HuffmanNode current = root;
		HuffmanNode preNode = null;
		
		while (current != null) {
			stack2.add(current);
			stack1.add("0");
			current = current.left;
		}
		
		stack1.pop();
		
		while (!stack2.isEmpty()) {
			current = stack2.pop();
			
			if (current.right == null || current.right == preNode) {
				preNode = current;
				
				if (current.c == c) {
					break;
				} else {
					stack1.pop();
				}
			} else {
				stack2.add(current);
				
				current = current.right;
				stack1.add("1");
				stack2.add(current);
				
				while (current.left != null) {
					stack2.add(current.left);
					stack1.add("0");
					current = current.left;
				}
			}
		}
		
		while (!stack1.isEmpty()) {
			code = stack1.pop() + code;
		}
		
		return code;
	}

