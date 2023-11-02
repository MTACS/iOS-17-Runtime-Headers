
@protocol _CPCoreSpotlightRankingSignalsForFeedback <NSObject>

@required

- (float)engagementScore;
- (float)freshness;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isExactMatchOfLaunchString;
- (NSData *)jsonData;
- (float)predictedLikelihoodOfEngagement;
- (int)resultQueryRecency;
- (void)setEngagementScore:(float)arg1;
- (void)setFreshness:(float)arg1;
- (void)setIsExactMatchOfLaunchString:(bool)arg1;
- (void)setPredictedLikelihoodOfEngagement:(float)arg1;
- (void)setResultQueryRecency:(int)arg1;
- (void)setSodiumL2Score:(float)arg1;
- (void)setTopicalityScore:(float)arg1;
- (void)setWasEngagedInSpotlight:(bool)arg1;
- (void)setWasNominatedAsTopHit:(bool)arg1;
- (float)sodiumL2Score;
- (float)topicalityScore;
- (bool)wasEngagedInSpotlight;
- (bool)wasNominatedAsTopHit;

@end
