
@interface EARTokenPronounciations : NSObject {
    NSArray * _pronunciations;
    NSString * _token;
}

@property (nonatomic, copy) NSArray *pronunciations;
@property (nonatomic, copy) NSString *token;

- (void).cxx_destruct;
- (struct TokenProns { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned int x_1_5_3 : 63; unsigned int x_1_5_4 : 1; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; unsigned char x_2_5_2[0]; unsigned int x_2_5_3 : 7; unsigned int x_2_5_4 : 1; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; struct vector<quasar::PronChoice, std::allocator<quasar::PronChoice>> { struct PronChoice {} *x_2_1_1; struct PronChoice {} *x_2_1_2; struct __compressed_pair<quasar::PronChoice *, std::allocator<quasar::PronChoice>> { struct PronChoice {} *x_3_2_1; } x_2_1_3; } x2; struct vector<quasar::PronChoice, std::allocator<quasar::PronChoice>> { struct PronChoice {} *x_3_1_1; struct PronChoice {} *x_3_1_2; struct __compressed_pair<quasar::PronChoice *, std::allocator<quasar::PronChoice>> { struct PronChoice {} *x_3_2_1; } x_3_1_3; } x3; })_quasarProns;
- (id)initWithToken:(id)arg1 pronunciations:(id)arg2;
- (id)pronunciations;
- (void)setPronunciations:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
