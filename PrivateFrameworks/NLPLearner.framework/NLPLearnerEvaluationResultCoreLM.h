
@interface NLPLearnerEvaluationResultCoreLM : NSObject {
    float  _logfProbability;
    float  _predictedWords;
    unsigned long long  _sentenceCount;
    unsigned long long  _tokenCount;
    unsigned long long  _wordCount;
}

@property (nonatomic) float logfProbability;
@property (nonatomic) float predictedWords;
@property (nonatomic) unsigned long long sentenceCount;
@property (nonatomic) unsigned long long tokenCount;
@property (nonatomic) unsigned long long wordCount;

- (float)logfProbability;
- (float)predictedWords;
- (unsigned long long)sentenceCount;
- (void)setLogfProbability:(float)arg1;
- (void)setPredictedWords:(float)arg1;
- (void)setSentenceCount:(unsigned long long)arg1;
- (void)setTokenCount:(unsigned long long)arg1;
- (void)setWordCount:(unsigned long long)arg1;
- (unsigned long long)tokenCount;
- (unsigned long long)wordCount;

@end
