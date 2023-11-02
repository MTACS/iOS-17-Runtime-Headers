
@interface UPUtilities : NSObject

+ (bool)checkFileExistence:(id)arg1 error:(id*)arg2;
+ (id)higherLevelEntityLabelFromParentLabel:(id)arg1 childLabel:(id)arg2;
+ (id)intermediateNodeRepresentations:(id)arg1;
+ (struct basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> { struct __compressed_pair<std::basic_string<char16_t>::__rep, std::allocator<char16_t>> { struct __rep { union { struct __long { unsigned short *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { unsigned short x_2_4_1[11]; unsigned char x_2_4_2[1]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })nSStringToU16String:(id)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeFromStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
+ (id)rootNodeRepresentationForIntent:(id)arg1 andEntities:(id)arg2;
+ (id)stdU16ToNSString:(const void*)arg1;

@end
