
@interface _SFPBCoreSpotlightRankingSignals : PBCodable <NSSecureCoding, _SFPBCoreSpotlightRankingSignals> {
    float  _engagementScore;
    float  _freshness;
    bool  _isExactMatchOfLaunchString;
    float  _predictedLikelihoodOfEngagement;
    int  _resultQueryRecency;
    float  _sodiumL2Score;
    float  _topicalityScore;
    bool  _wasEngagedInSpotlight;
    bool  _wasNominatedAsTopHit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float engagementScore;
@property (nonatomic) float freshness;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExactMatchOfLaunchString;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float predictedLikelihoodOfEngagement;
@property (nonatomic) int resultQueryRecency;
@property (nonatomic) float sodiumL2Score;
@property (readonly) Class superclass;
@property (nonatomic) float topicalityScore;
@property (nonatomic) bool wasEngagedInSpotlight;
@property (nonatomic) bool wasNominatedAsTopHit;

- (id)dictionaryRepresentation;
- (float)engagementScore;
- (float)freshness;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExactMatchOfLaunchString;
- (id)jsonData;
- (float)predictedLikelihoodOfEngagement;
- (bool)readFrom:(id)arg1;
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
- (void)writeTo:(id)arg1;

@end
