
@protocol QUUnderstandingOutput <NSObject>

@required

- (NSArray *)argIds;
- (NSArray *)argIdsForTokens;
- (NSArray *)argScores;
- (NSArray *)argScoresForTokens;
- (NSNumber *)confidenceScore;
- (unsigned long long)embeddingsTime;
- (NSNumber *)intentId;
- (unsigned long long)predictionTime;
- (NSArray *)tokenRanges;
- (NSArray *)tokens;

@end
