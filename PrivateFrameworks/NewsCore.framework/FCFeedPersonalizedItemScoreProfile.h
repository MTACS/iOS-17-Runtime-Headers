
@interface FCFeedPersonalizedItemScoreProfile : NSObject {
    bool  _hasShadowScores;
    NTPBScoreProfile * _pbScoreProfile;
    float  _shadowAgedPersonalizationScore;
    float  _shadowTabiScore;
}

@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic, retain) NSArray *cohortMemberships;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) double conversionMultiplier;
@property (nonatomic) double dampenedStaticMultiplier;
@property (nonatomic, retain) NTPBScoreProfileDebug *debugFields;
@property (nonatomic) double embeddingScore;
@property (nonatomic) double featureCtr;
@property (nonatomic) bool hasShadowScores;
@property (nonatomic) bool isEvergreen;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic, retain) NTPBScoreProfile *pbScoreProfile;
@property (nonatomic) double personalizationScore;
@property (nonatomic) double publisherDampener;
@property (nonatomic) double publisherFavorability;
@property (nonatomic) double qualitativeMultiplier;
@property (nonatomic) double rawPersonalizationScore;
@property (nonatomic) double rawUserFeedbackScore;
@property (nonatomic) float shadowAgedPersonalizationScore;
@property (nonatomic) float shadowTabiScore;
@property (nonatomic, readonly) double sortingScore;
@property (nonatomic) double staticMultiplier;
@property (nonatomic) double subscribedChannelCtr;
@property (nonatomic) double tabiScore;
@property (nonatomic) double userFeedbackScore;

- (void).cxx_destruct;
- (id)debugFields;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (bool)hasShadowScores;
- (id)init;
- (id)initWithPBScoreProfile:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)pbScoreProfile;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setDebugFields:(id)arg1;
- (void)setHasShadowScores:(bool)arg1;
- (void)setPbScoreProfile:(id)arg1;
- (void)setShadowAgedPersonalizationScore:(float)arg1;
- (void)setShadowTabiScore:(float)arg1;
- (float)shadowAgedPersonalizationScore;
- (float)shadowTabiScore;
- (double)sortingScore;

@end
