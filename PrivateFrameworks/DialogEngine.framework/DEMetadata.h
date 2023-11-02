
@interface DEMetadata : NSObject {
    struct optional<siri::dialogengine::ObjectInput> { 
        union { 
            BOOL __null_state_; 
            struct ObjectInput { 
                int (**_vptr$PropertyBase)(); 
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
                } mName; 
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
                } mType; 
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
                } mDescription; 
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
                } mSampleValue; 
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
                } mVersionAdded; 
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
                } mDeprecated; 
                bool mProfanityFilter; 
                bool mOptional; 
                int mAccessMode; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _Obj;
}

@property /* Warning: unhandled struct encoding: '{optional<siri::dialogengine::ObjectInput>=(?=c{ObjectInput=^^?{basic_string<char' */ struct  Obj; /* unknown property attribute:  std::allocator<char>>={__rep=(?={__long=*Qb63b1}{__short=[23c][0C]b7b1}{__raw=[3Q]})}}}BBi})B} */

+ (id)schemaInput:(id)arg1 typeName:(id)arg2 inputName:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct optional<siri::dialogengine::ObjectInput> { union { BOOL x_1_1_1; struct ObjectInput { int (**x_2_2_1)(); struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_7_1; unsigned long long x_1_7_2; unsigned int x_1_7_3 : 63; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __short { BOOL x_2_7_1[23]; unsigned char x_2_7_2[0]; unsigned int x_2_7_3 : 7; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_2_3_1; } x_2_2_2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_7_1; unsigned long long x_1_7_2; unsigned int x_1_7_3 : 63; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __short { BOOL x_2_7_1[23]; unsigned char x_2_7_2[0]; unsigned int x_2_7_3 : 7; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_3_3_1; } x_2_2_3; } x_1_1_2; } x1; })Obj;
- (id)init;
- (id)initWithOpt:(const void*)arg1;
- (id)sampleValues:(id)arg1;
- (id)sampleValues:(id)arg1 locale:(id)arg2;
- (void)setObj:(struct optional<siri::dialogengine::ObjectInput> { union { BOOL x_1_1_1; struct ObjectInput { int (**x_2_2_1)(); struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_7_1; unsigned long long x_1_7_2; unsigned int x_1_7_3 : 63; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __short { BOOL x_2_7_1[23]; unsigned char x_2_7_2[0]; unsigned int x_2_7_3 : 7; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_2_3_1; } x_2_2_2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_7_1; unsigned long long x_1_7_2; unsigned int x_1_7_3 : 63; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __short { BOOL x_2_7_1[23]; unsigned char x_2_7_2[0]; unsigned int x_2_7_3 : 7; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_3_3_1; } x_2_2_3; } x_1_1_2; } x1; })arg1;

@end
