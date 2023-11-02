
@interface FCPersonalizationTagScoringConfig : NSObject <NSCopying, NSSecureCoding> {
    double  _channelTopicMappingWeight;
    double  _democratizationFactor;
    double  _locationScoreDecayFactor;
    double  _locationWeight;
    double  _maxDistanceThreshold;
    long long  _maxLocationsToConsider;
    double  _popularityMultiplierBoost;
    double  _popularityMultiplierExponent;
    double  _topicTopicMappingWeight;
    double  _userMembershipWeight;
}

@property (nonatomic) double channelTopicMappingWeight;
@property (nonatomic) double democratizationFactor;
@property (nonatomic) double locationScoreDecayFactor;
@property (nonatomic) double locationWeight;
@property (nonatomic) double maxDistanceThreshold;
@property (nonatomic) long long maxLocationsToConsider;
@property (nonatomic) double popularityMultiplierBoost;
@property (nonatomic) double popularityMultiplierExponent;
@property (nonatomic) double topicTopicMappingWeight;
@property (nonatomic) double userMembershipWeight;

+ (bool)supportsSecureCoding;

- (double)channelTopicMappingWeight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)democratizationFactor;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithChannelTopicMappingWeight:(double)arg1 democratizationFactor:(double)arg2 locationScoreDecayFactor:(double)arg3 locationWeight:(double)arg4 maxDistanceThreshold:(double)arg5 maxLocationsToConsider:(long long)arg6 popularityMultiplierBoost:(double)arg7 popularityMultiplierExponent:(double)arg8 topicTopicMappingWeight:(double)arg9 userMembershipWeight:(double)arg10;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1 defaultConfig:(id)arg2;
- (double)locationScoreDecayFactor;
- (double)locationWeight;
- (double)maxDistanceThreshold;
- (long long)maxLocationsToConsider;
- (double)popularityMultiplierBoost;
- (double)popularityMultiplierExponent;
- (void)setChannelTopicMappingWeight:(double)arg1;
- (void)setDemocratizationFactor:(double)arg1;
- (void)setLocationScoreDecayFactor:(double)arg1;
- (void)setLocationWeight:(double)arg1;
- (void)setMaxDistanceThreshold:(double)arg1;
- (void)setMaxLocationsToConsider:(long long)arg1;
- (void)setPopularityMultiplierBoost:(double)arg1;
- (void)setPopularityMultiplierExponent:(double)arg1;
- (void)setTopicTopicMappingWeight:(double)arg1;
- (void)setUserMembershipWeight:(double)arg1;
- (double)topicTopicMappingWeight;
- (double)userMembershipWeight;

@end
