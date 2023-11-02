
@interface _EARResultContext : NSObject {
    bool  _anyResults;
    struct shared_ptr<EARContinuousListeningResultHelper> { 
        struct EARContinuousListeningResultHelper {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _continuousListeningResultHelper;
    unsigned long long  _countOfIsFinalFalseAlreadyWritten;
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _loggableConcatCosts;
    struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _loggableConcatResult;
    unsigned long long  _partialResultIndexOffset;
    struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _partialResults;
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
    }  _prevBestRecogText;
    NSDictionary * _prevMuxPackages;
    _EARSpeechRecognitionResultPackage * _prevPackage;
    _EARSpeechRecognitionResultPackage * _prevPackageWithoutPersonalization;
}

@property (nonatomic) bool anyResults;
@property (nonatomic) struct shared_ptr<EARContinuousListeningResultHelper> { struct EARContinuousListeningResultHelper {} *x1; struct __shared_weak_count {} *x2; } continuousListeningResultHelper;
@property (nonatomic) unsigned long long countOfIsFinalFalseAlreadyWritten;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<double' */ struct  loggableConcatCosts; /* unknown property attribute:  std::allocator<double>>=^d}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<std::vector<quasar::Token>' */ struct  loggableConcatResult; /* unknown property attribute:  std::allocator<std::vector<quasar::Token>>>=^v}} */
@property (nonatomic, readonly) unsigned long long partialResultIndexOffset;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<std::vector<quasar::Token>' */ struct  partialResults; /* unknown property attribute:  std::allocator<std::vector<quasar::Token>>>=^v}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{basic_string<char' */ struct  prevBestRecogText; /* unknown property attribute:  std::allocator<char>>={__rep=(?={__long=*Qb63b1}{__short=[23c][0C]b7b1}{__raw=[3Q]})}}} */
@property (nonatomic, retain) NSDictionary *prevMuxPackages;
@property (nonatomic, retain) _EARSpeechRecognitionResultPackage *prevPackage;
@property (nonatomic, retain) _EARSpeechRecognitionResultPackage *prevPackageWithoutPersonalization;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPartialResultToContext:(const void*)arg1;
- (bool)anyResults;
- (struct shared_ptr<EARContinuousListeningResultHelper> { struct EARContinuousListeningResultHelper {} *x1; struct __shared_weak_count {} *x2; })continuousListeningResultHelper;
- (unsigned long long)countOfIsFinalFalseAlreadyWritten;
- (id)description;
- (void)incrementCountOfIsFinalFalseAlreadyWritten;
- (struct vector<double, std::allocator<double>> { double *x1; double *x2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_1_1; } x3; })loggableConcatCosts;
- (struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> { void *x1; void *x2; struct __compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>> { void *x_3_1_1; } x3; })loggableConcatResult;
- (unsigned long long)partialResultIndexOffset;
- (struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> { void *x1; void *x2; struct __compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>> { void *x_3_1_1; } x3; })partialResults;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })prevBestRecogText;
- (id)prevMuxPackages;
- (id)prevPackage;
- (id)prevPackageWithoutPersonalization;
- (void)resetPartialResultContext;
- (void)setAnyResults:(bool)arg1;
- (void)setContinuousListeningResultHelper:(struct shared_ptr<EARContinuousListeningResultHelper> { struct EARContinuousListeningResultHelper {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setCountOfIsFinalFalseAlreadyWritten:(unsigned long long)arg1;
- (void)setLoggableConcatCosts:(struct vector<double, std::allocator<double>> { double *x1; double *x2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_1_1; } x3; })arg1;
- (void)setLoggableConcatResult:(struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> { void *x1; void *x2; struct __compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>> { void *x_3_1_1; } x3; })arg1;
- (void)setPrevBestRecogText:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg1;
- (void)setPrevMuxPackages:(id)arg1;
- (void)setPrevPackage:(id)arg1;
- (void)setPrevPackageWithoutPersonalization:(id)arg1;
- (void)updateLoggableResultWithCurrentResult:(const void*)arg1 currentCosts:(const void*)arg2 startMilliseconds:(unsigned int)arg3;

@end
