
@interface _EARSpeechRecognition : NSObject <NSCopying> {
    NSSet * _endsOfSentencePunctuations;
    NSArray * _interpretationIndices;
    NSArray * _nBest;
    NSArray * _tokenSausage;
}

@property (nonatomic, readonly, copy) NSSet *endsOfSentencePunctuations;
@property (nonatomic, readonly, copy) NSArray *interpretationIndices;
@property (nonatomic, readonly, copy) NSArray *nBest;
@property (nonatomic, copy) NSArray *tokenSausage;

+ (id)reconstructNBestFromSausage:(id)arg1 interpretationIndices:(id)arg2;
+ (id)tokens:(id)arg1 alignedToTokens:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithNBestList:(const void*)arg1 useHatText:(bool)arg2 endsOfSentencePunctuations:(id)arg3;
- (id)_initWithTokenPhraseChoiceList:(const void*)arg1 earNbest:(id)arg2 endsOfSentencePunctuations:(id)arg3;
- (id)_initWithTokenPhraseChoiceList:(const void*)arg1 nBestList:(const void*)arg2 endsOfSentencePunctuations:(id)arg3;
- (id)_initWithTokenSausage:(id)arg1 interpretationIndices:(id)arg2 nBest:(id)arg3 endsOfSentencePunctuations:(id)arg4;
- (struct pair<std::vector<std::vector<unsigned int>>, std::vector<std::vector<std::vector<quasar::Token>>>> { struct vector<std::vector<unsigned int>, std::allocator<std::vector<unsigned int>>> { void *x_1_1_1; void *x_1_1_2; struct __compressed_pair<std::vector<unsigned int> *, std::allocator<std::vector<unsigned int>>> { void *x_3_2_1; } x_1_1_3; } x1; struct vector<std::vector<std::vector<quasar::Token>>, std::allocator<std::vector<std::vector<quasar::Token>>>> { void *x_2_1_1; void *x_2_1_2; struct __compressed_pair<std::vector<std::vector<quasar::Token>> *, std::allocator<std::vector<std::vector<quasar::Token>>>> { void *x_3_2_1; } x_2_1_3; } x2; })_tokenPhraseChoiceList;
- (id)adjustSpaceForTokens:(id)arg1 currTokenIndex:(unsigned long long)arg2 endsOfSentencePunctuations:(id)arg3 isPotentialCommandRecognition:(bool)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endsOfSentencePunctuations;
- (id)granularizedRecognition;
- (unsigned long long)hash;
- (id)interpretationIndices;
- (bool)isEqual:(id)arg1;
- (id)nBest;
- (id)oneBest;
- (id)oneBestAlignedToTokens:(id)arg1;
- (id)potentialCommandRecognition;
- (id)potentialPrecedingRecognition;
- (void)setTokenSausage:(id)arg1;
- (id)splitRecognitionWithPotentialCommandRecognition:(bool)arg1;
- (id)tokenSausage;

@end
