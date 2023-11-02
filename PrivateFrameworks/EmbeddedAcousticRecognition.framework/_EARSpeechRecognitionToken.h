
@interface _EARSpeechRecognitionToken : NSObject <NSCopying> {
    struct Token { 
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
        } tokenName; 
        unsigned int startMilliseconds; 
        unsigned int endMilliseconds; 
        unsigned int silStartMilliSeconds; 
        float confidence; 
        bool hasSpaceAfter; 
        bool hasSpaceBefore; 
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
        } phoneSeq; 
        struct vector<std::string, std::allocator<std::string>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::string *, std::allocator<std::string>> { 
                void *__value_; 
            } __end_cap_; 
        } phoneSeq_1; 
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
        } ipaPhoneSeq; 
        struct vector<std::pair<std::string, float>, std::allocator<std::pair<std::string, float>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::pair<std::string, float> *, std::allocator<std::pair<std::string, float>>> { 
                void *__value_; 
            } __end_cap_; 
        } subwordConfidence; 
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
        } muxId; 
        bool appendedAutoPunctuation; 
        bool prependedAutoPunctuation; 
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
        } alternateTokenName; 
        bool isModifiedByAutoPunctuation; 
        struct DecodingSignals { 
            float graphCost; 
            float acousticCost; 
            float acousticCostFirstPassCollapsed; 
            float acousticCostSecondPassUnpushed; 
        } decodingSignals; 
    }  _quasarToken;
}

@property (nonatomic, readonly) double acousticCost;
@property (nonatomic, readonly) bool appendedAutoPunctuation;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) double end;
@property (nonatomic, readonly) double graphCost;
@property (nonatomic, readonly) bool hasSpaceAfter;
@property (nonatomic, readonly) bool hasSpaceBefore;
@property (nonatomic, readonly) NSString *ipaPhoneSequence;
@property (nonatomic, readonly) bool isModifiedByAutoPunctuation;
@property (nonatomic, readonly) NSString *phoneSequence;
@property (nonatomic, readonly) bool prependedAutoPunctuation;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Token={basic_string<char' */ struct  quasarToken; /* unknown property attribute:  std::allocator<char>>={__rep=(?={__long=*Qb63b1}{__short=[23c][0C]b7b1}{__raw=[3Q]})}}}B{DecodingSignals=ffff}} */
@property (nonatomic, readonly) double silenceStart;
@property (nonatomic, readonly) double start;
@property (nonatomic, readonly, copy) NSString *tokenName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithQuasarToken:(const void*)arg1;
- (double)acousticCost;
- (bool)appendedAutoPunctuation;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)end;
- (double)graphCost;
- (bool)hasSpaceAfter;
- (bool)hasSpaceBefore;
- (unsigned long long)hash;
- (id)initWithTokenName:(id)arg1 start:(double)arg2 end:(double)arg3 silenceStart:(double)arg4 confidence:(double)arg5 hasSpaceAfter:(bool)arg6 hasSpaceBefore:(bool)arg7 phoneSequence:(id)arg8 ipaPhoneSequence:(id)arg9;
- (id)initWithTokenName:(id)arg1 start:(double)arg2 end:(double)arg3 silenceStart:(double)arg4 confidence:(double)arg5 hasSpaceAfter:(bool)arg6 hasSpaceBefore:(bool)arg7 phoneSequence:(id)arg8 ipaPhoneSequence:(id)arg9 appendedAutoPunctuation:(bool)arg10;
- (id)ipaPhoneSequence;
- (bool)isEqual:(id)arg1;
- (bool)isModifiedByAutoPunctuation;
- (id)phoneSequence;
- (bool)prependedAutoPunctuation;
- (struct Token { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned int x_1_5_3 : 63; unsigned int x_1_5_4 : 1; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; unsigned char x_2_5_2[0]; unsigned int x_2_5_3 : 7; unsigned int x_2_5_4 : 1; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; bool x6; bool x7; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned int x_1_5_3 : 63; unsigned int x_1_5_4 : 1; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; unsigned char x_2_5_2[0]; unsigned int x_2_5_3 : 7; unsigned int x_2_5_4 : 1; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_8_1_1; } x8; })quasarToken;
- (double)silenceStart;
- (double)start;
- (id)tokenName;

@end
