
@interface CVNLPDecodingLanguageModel : CVNLPInformationStream {
    void * _languageModel;
    int  _lmSPIType;
    NSLocale * _locale;
    void * _tokenizer;
}

@property (nonatomic, readonly) void*languageModel;
@property (nonatomic, readonly) NSLocale *locale;

+ (id)_decodingLanguageModelForLocale:(id)arg1 modelType:(int)arg2 decodingWeight:(id)arg3 lowerBoundLogProbability:(id)arg4 type:(int)arg5;
+ (unsigned int)_normalizedLMTokenIDForWord:(id)arg1 withTokenID:(unsigned int)arg2 sourceLanguageModel:(id)arg3 outScore:(double*)arg4;
+ (id)decodingCVNLPLanguageModelForLocale:(id)arg1 modelType:(int)arg2 decodingWeight:(id)arg3;
+ (id)decodingLMLanguageModelForLocale:(id)arg1 modelType:(int)arg2 decodingWeight:(id)arg3;
+ (id)pathForLanguageModelForLocale:(id)arg1 modelType:(int)arg2 resourceType:(int)arg3;

- (void).cxx_destruct;
- (id)_initWithLanguageModel:(void*)arg1 locale:(id)arg2 decodingWeight:(id)arg3 lowerBoundLogProbability:(id)arg4 type:(int)arg5;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x_3_1_1; } x3; })characterTokenIDsForString:(id)arg1;
- (void)dealloc;
- (id)initWithCVNLPLanguageModel:(struct CVNLPLanguageModel { }*)arg1 locale:(id)arg2 decodingWeight:(id)arg3;
- (id)initWithCVNLPLanguageModel:(struct CVNLPLanguageModel { }*)arg1 locale:(id)arg2 decodingWeight:(id)arg3 lowerBoundLogProbability:(id)arg4;
- (id)initWithLMLanguageModel:(void*)arg1 locale:(id)arg2 decodingWeight:(id)arg3;
- (id)initWithLMLanguageModel:(void*)arg1 locale:(id)arg2 decodingWeight:(id)arg3 lowerBoundLogProbability:(id)arg4;
- (id)initWithLanguageModel:(void*)arg1;
- (id)initWithLanguageModel:(void*)arg1 locale:(id)arg2;
- (void*)languageModel;
- (int)lmSPIType;
- (id)locale;
- (long long)requiredContextLengthForStringLength:(long long)arg1;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x_3_1_1; } x3; })wordTokenIDsForString:(id)arg1 outTokenRanges:(id*)arg2;

@end
