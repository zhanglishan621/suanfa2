//b.写一个程序，对一段用哈夫曼码编码的英文文本进行解码。
public String getDecodeofCode (String encode) {
		String decode = "";
		int len = encode.length();
		int i = 0;
		
		HuffmanNode current = root;
		
		while (i < len) {
			if (encode.charAt(i) == '1') {
				current = current.right;
			} else {
				current = current.left;
			}
			
			if (current.left == null && current.right == null) {
				decode += current.c + "";
				current = root;
			} 
			
			i++;
		}
		return decode;
	}

