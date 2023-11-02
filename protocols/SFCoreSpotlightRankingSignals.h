
@protocol SFCoreSpotlightRankingSignals <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSNumber *)engagementScore;
- (NSNumber *)freshness;
- (bool)isExactMatchOfLaunchString;
- (NSData *)jsonData;
- (NSNumber *)predictedLikelihoodOfEngagement;
- (int)resultQueryRecency;
- (void)setEngagementScore:(NSNumber *)arg1;
- (void)setFreshness:(NSNumber *)arg1;
- (void)setIsExactMatchOfLaunchString:(bool)arg1;
- (void)setPredictedLikelihoodOfEngagement:(NSNumber *)arg1;
- (void)setResultQueryRecency:(int)arg1;
- (void)setSodiumL2Score:(NSNumber *)arg1;
- (void)setTopicalityScore:(NSNumber *)arg1;
- (void)setWasEngagedInSpotlight:(bool)arg1;
- (void)setWasNominatedAsTopHit:(bool)arg1;
- (NSNumber *)sodiumL2Score;
- (NSNumber *)topicalityScore;
- (bool)wasEngagedInSpotlight;
- (bool)wasNominatedAsTopHit;

@end
