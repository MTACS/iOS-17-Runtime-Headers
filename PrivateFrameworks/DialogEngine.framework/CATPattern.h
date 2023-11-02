
@interface CATPattern : NSObject

+ (void)execute:(id)arg1 patternId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 callback:(id)arg5 options:(int)arg6 completion:(id /* block */)arg7;
+ (void)execute:(id)arg1 patternId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 options:(int)arg5 completion:(id /* block */)arg6;
+ (void)execute:(id)arg1 templateDir:(id)arg2 patternId:(id)arg3 parameters:(id)arg4 globals:(id)arg5 callback:(id)arg6 options:(int)arg7 completion:(id /* block */)arg8;
+ (void)execute:(id)arg1 templateDir:(id)arg2 patternId:(id)arg3 parameters:(id)arg4 globals:(id)arg5 options:(int)arg6 completion:(id /* block */)arg7;
+ (id)executeCAT:(id)arg1 templateDir:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg2 catId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg3 patternId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg4 requestType:(int)arg5 parameters:(id)arg6 globals:(id)arg7 patternContext:(struct shared_ptr<siri::dialogengine::PatternContext> { struct PatternContext {} *x1; struct __shared_weak_count {} *x2; })arg8 callback:(id)arg9 options:(int)arg10 error:(id*)arg11;
+ (void)load:(id)arg1 patternId:(id)arg2 completion:(id /* block */)arg3;
+ (void)load:(id)arg1 patternId:(id)arg2 options:(int)arg3 completion:(id /* block */)arg4;
+ (id)patternNameFromType:(unsigned long long)arg1;
+ (id)segment:(id)arg1 settings:(id)arg2;

@end
