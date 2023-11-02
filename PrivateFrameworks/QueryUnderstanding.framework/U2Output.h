
@interface U2Output : NSObject <QUUnderstandingOutput> {
    NSArray * _argIdsForTokens;
    NSArray * _argScoresForTokens;
    NSNumber * _confidenceScore;
    unsigned long long  _embeddingsTime;
    NSNumber * _intentId;
    unsigned long long  _predictionTime;
    NSArray * _tokenRanges;
    NSArray * _tokens;
}

@property (nonatomic, readonly) NSArray *argIds;
@property (nonatomic, retain) NSArray *argIdsForTokens;
@property (nonatomic, readonly) NSArray *argScores;
@property (nonatomic, retain) NSArray *argScoresForTokens;
@property (nonatomic, retain) NSNumber *confidenceScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long embeddingsTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *intentId;
@property (nonatomic) unsigned long long predictionTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tokenRanges;
@property (nonatomic, retain) NSArray *tokens;

- (void).cxx_destruct;
- (id)argIds;
- (id)argIdsForTokens;
- (id)argScores;
- (id)argScoresForTokens;
- (id)confidenceScore;
- (unsigned long long)embeddingsTime;
- (id)intentId;
- (unsigned long long)predictionTime;
- (void)setArgIdsForTokens:(id)arg1;
- (void)setArgScoresForTokens:(id)arg1;
- (void)setConfidenceScore:(id)arg1;
- (void)setEmbeddingsTime:(unsigned long long)arg1;
- (void)setIntentId:(id)arg1;
- (void)setPredictionTime:(unsigned long long)arg1;
- (void)setTokenRanges:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)tokenRanges;
- (id)tokens;

@end
