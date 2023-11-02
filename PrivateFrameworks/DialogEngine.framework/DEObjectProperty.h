
@interface DEObjectProperty : NSObject {
    struct optional<siri::dialogengine::ObjectProperty> { 
        union { 
            BOOL __null_state_; 
            struct ObjectProperty { 
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
                } mSemanticConcept; 
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
                } mValueFromCat; 
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
                } mDefaultValue; 
                bool mIsIterator; 
                bool mCanOverride; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _This;
    struct shared_ptr<siri::dialogengine::ObjectProperty> { 
        struct ObjectProperty {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _ThisShared;
}

@property /* Warning: unhandled struct encoding: '{optional<siri::dialogengine::ObjectProperty>=(?=c{ObjectProperty=^^?{basic_string<char' */ struct  This; /* unknown property attribute:  std::allocator<char>>={__rep=(?={__long=*Qb63b1}{__short=[23c][0C]b7b1}{__raw=[3Q]})}}}BB})B} */
@property struct shared_ptr<siri::dialogengine::ObjectProperty> { struct ObjectProperty {} *x1; struct __shared_weak_count {} *x2; } ThisShared;
@property (readonly) NSString *description;
@property (readonly) NSString *name;
@property (readonly) NSArray *sampleValueLocales;
@property (readonly) NSString *semanticConcept;
@property (readonly) NSString *type;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct optional<siri::dialogengine::ObjectProperty> { union { BOOL x_1_1_1; struct ObjectProperty { int (**x_2_2_1)(); struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_7_1; unsigned long long x_1_7_2; unsigned int x_1_7_3 : 63; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __short { BOOL x_2_7_1[23]; unsigned char x_2_7_2[0]; unsigned int x_2_7_3 : 7; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_2_3_1; } x_2_2_2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_7_1; unsigned long long x_1_7_2; unsigned int x_1_7_3 : 63; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __short { BOOL x_2_7_1[23]; unsigned char x_2_7_2[0]; unsigned int x_2_7_3 : 7; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_3_3_1; } x_2_2_3; } x_1_1_2; } x1; })This;
- (struct shared_ptr<siri::dialogengine::ObjectProperty> { struct ObjectProperty {} *x1; struct __shared_weak_count {} *x2; })ThisShared;
- (id)description;
- (id)init;
- (id)initWithOpt:(const void*)arg1;
- (id)initWithSharedPtr:(void*)arg1;
- (id)name;
- (id)sampleValueLocales;
- (id)sampleValuesForLocale:(id)arg1;
- (id)semanticConcept;
- (void)setThis:(struct optional<siri::dialogengine::ObjectProperty> { union { BOOL x_1_1_1; struct ObjectProperty { int (**x_2_2_1)(); struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_7_1; unsigned long long x_1_7_2; unsigned int x_1_7_3 : 63; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __short { BOOL x_2_7_1[23]; unsigned char x_2_7_2[0]; unsigned int x_2_7_3 : 7; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_2_3_1; } x_2_2_2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_7_1; unsigned long long x_1_7_2; unsigned int x_1_7_3 : 63; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __short { BOOL x_2_7_1[23]; unsigned char x_2_7_2[0]; unsigned int x_2_7_3 : 7; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_3_3_1; } x_2_2_3; } x_1_1_2; } x1; })arg1;
- (void)setThisShared:(struct shared_ptr<siri::dialogengine::ObjectProperty> { struct ObjectProperty {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)type;

@end
