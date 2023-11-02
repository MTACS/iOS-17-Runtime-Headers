
@interface REMLSentimentAnalyzerResult : NSObject {
    float  _certainty;
    float  _negativeSentiment;
    float  _postivieSentiment;
}

@property (nonatomic) float certainty;
@property (nonatomic) float negativeSentiment;
@property (nonatomic) float postivieSentiment;

- (float)certainty;
- (float)negativeSentiment;
- (float)postivieSentiment;
- (void)setCertainty:(float)arg1;
- (void)setNegativeSentiment:(float)arg1;
- (void)setPostivieSentiment:(float)arg1;

@end
