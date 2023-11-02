
@interface PRSharingSessionHelper : NSObject

+ (long long)CoarseRangeToProx:(int)arg1;
+ (id)HexStringToNSDataMac:(const void*)arg1;
+ (id)NSDataMacToUUID:(id)arg1;
+ (unsigned long long)NSDataToUInt64:(id)arg1;
+ (int)ProxToCoarseRange:(long long)arg1;
+ (id)ProxToString:(long long)arg1;
+ (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })UIntToHexString:(unsigned long long)arg1 len:(unsigned long long)arg2;
+ (id)UUIDStringToNSDataMac:(const void*)arg1 len:(unsigned long long)arg2;
+ (id)UUIDToNSDataMac:(id)arg1 len:(unsigned long long)arg2;
+ (id)convertMacStringToNSData:(const void*)arg1;
+ (id)reverseNSData:(id)arg1;

@end
