
@interface SFCoreSpotlightRankingSignals : NSObject <NSCopying, NSSecureCoding, SFCoreSpotlightRankingSignals> {
    NSNumber * _engagementScore;
    NSNumber * _freshness;
    struct { 
        unsigned int wasNominatedAsTopHit : 1; 
        unsigned int isExactMatchOfLaunchString : 1; 
        unsigned int wasEngagedInSpotlight : 1; 
        unsigned int resultQueryRecency : 1; 
    }  _has;
    bool  _isExactMatchOfLaunchString;
    NSNumber * _predictedLikelihoodOfEngagement;
    int  _resultQueryRecency;
    NSNumber * _sodiumL2Score;
    NSNumber * _topicalityScore;
    bool  _wasEngagedInSpotlight;
    bool  _wasNominatedAsTopHit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSNumber *engagementScore;
@property (nonatomic, copy) NSNumber *freshness;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExactMatchOfLaunchString;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSNumber *predictedLikelihoodOfEngagement;
@property (nonatomic) int resultQueryRecency;
@property (nonatomic, copy) NSNumber *sodiumL2Score;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *topicalityScore;
@property (nonatomic) bool wasEngagedInSpotlight;
@property (nonatomic) bool wasNominatedAsTopHit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)engagementScore;
- (id)freshness;
- (bool)hasIsExactMatchOfLaunchString;
- (bool)hasResultQueryRecency;
- (bool)hasWasEngagedInSpotlight;
- (bool)hasWasNominatedAsTopHit;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExactMatchOfLaunchString;
- (id)jsonData;
- (id)predictedLikelihoodOfEngagement;
- (int)resultQueryRecency;
- (void)setEngagementScore:(id)arg1;
- (void)setFreshness:(id)arg1;
- (void)setIsExactMatchOfLaunchString:(bool)arg1;
- (void)setPredictedLikelihoodOfEngagement:(id)arg1;
- (void)setResultQueryRecency:(int)arg1;
- (void)setSodiumL2Score:(id)arg1;
- (void)setTopicalityScore:(id)arg1;
- (void)setWasEngagedInSpotlight:(bool)arg1;
- (void)setWasNominatedAsTopHit:(bool)arg1;
- (id)sodiumL2Score;
- (id)topicalityScore;
- (bool)wasEngagedInSpotlight;
- (bool)wasNominatedAsTopHit;

@end
