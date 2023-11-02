
@interface DEGroundingInfo : NSObject {
    struct GroundingInfo { 
        unsigned long long mCount; 
        struct vector<double, std::allocator<double>> { 
            double *__begin_; 
            double *__end_; 
            struct __compressed_pair<double *, std::allocator<double>> { 
                double *__value_; 
            } __end_cap_; 
        } mTimestamps; 
        struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
            struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned int __cap_ : 63; 
                            unsigned int __is_long_ : 1; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            unsigned char __padding_[0]; 
                            unsigned int __size_ : 7; 
                            unsigned int __is_long_ : 1; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
            } __r_; 
        } mText; 
    }  _This;
}

@property /* Warning: unhandled struct encoding: '{GroundingInfo=Q{vector<double' */ struct  This; /* unknown property attribute:  std::allocator<char>>={__rep=(?={__long=*Qb63b1}{__short=[23c][0C]b7b1}{__raw=[3Q]})}}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct GroundingInfo { unsigned long long x1; struct vector<double, std::allocator<double>> { double *x_2_1_1; double *x_2_1_2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_2_1; } x_2_1_3; } x2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned int x_1_5_3 : 63; unsigned int x_1_5_4 : 1; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; unsigned char x_2_5_2[0]; unsigned int x_2_5_3 : 7; unsigned int x_2_5_4 : 1; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; })This;
- (int)count;
- (id)init:(int)arg1 timeStamps:(id)arg2 text:(id)arg3;
- (void)setThis:(struct GroundingInfo { unsigned long long x1; struct vector<double, std::allocator<double>> { double *x_2_1_1; double *x_2_1_2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_2_1; } x_2_1_3; } x2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned int x_1_5_3 : 63; unsigned int x_1_5_4 : 1; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; unsigned char x_2_5_2[0]; unsigned int x_2_5_3 : 7; unsigned int x_2_5_4 : 1; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; })arg1;
- (id)text;
- (id)timestamps;

@end
