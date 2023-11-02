
@interface FCPersonalizationCohortConfig : NSObject <NSCopying, NSSecureCoding> {
    bool  _considerPublisherTopicAggregates;
    double  _dilutionFactor;
    bool  _enableUndampening;
    double  _exponentialFavoritedBoost;
    double  _favoritedBoost;
    double  _globalWeight;
    double  _globalWeightHalfLife;
    double  _globalWeightInitialMultiplier;
    double  _paddingFactor;
    double  _postBaselineCurvature;
    double  _preBaselineCurvature;
    bool  _undampenOnlyAboveBaselineMembership;
    bool  _useExponentialFavoritedBoost;
    bool  _useRelativePersonalizationValue;
    double  _userBaseline;
}

@property (nonatomic) bool considerPublisherTopicAggregates;
@property (nonatomic) double dilutionFactor;
@property (nonatomic) bool enableUndampening;
@property (nonatomic) double exponentialFavoritedBoost;
@property (nonatomic) double favoritedBoost;
@property (nonatomic) double globalWeight;
@property (nonatomic) double globalWeightHalfLife;
@property (nonatomic) double globalWeightInitialMultiplier;
@property (nonatomic) double paddingFactor;
@property (nonatomic) double postBaselineCurvature;
@property (nonatomic) double preBaselineCurvature;
@property (nonatomic) bool undampenOnlyAboveBaselineMembership;
@property (nonatomic) bool useExponentialFavoritedBoost;
@property (nonatomic) bool useRelativePersonalizationValue;
@property (nonatomic) double userBaseline;

+ (bool)supportsSecureCoding;

- (bool)considerPublisherTopicAggregates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dilutionFactor;
- (bool)enableUndampening;
- (void)encodeWithCoder:(id)arg1;
- (double)exponentialFavoritedBoost;
- (double)favoritedBoost;
- (double)globalWeight;
- (double)globalWeightHalfLife;
- (double)globalWeightInitialMultiplier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithConsiderPublisherTopicAggregates:(bool)arg1 dilutionFactor:(double)arg2 enableUndampening:(bool)arg3 favoritedBoost:(double)arg4 exponentialFavoritedBoost:(double)arg5 globalWeight:(double)arg6 globalWeightHalfLife:(double)arg7 globalWeightInitialMultiplier:(double)arg8 paddingFactor:(double)arg9 preBaselineCurvature:(double)arg10 postBaselineCurvature:(double)arg11 undampenOnlyAboveBaselineMembership:(bool)arg12 userBaseline:(double)arg13 useRelativePersonalizationValue:(bool)arg14 useExponentialFavoritedBoost:(bool)arg15;
- (double)paddingFactor;
- (double)postBaselineCurvature;
- (double)preBaselineCurvature;
- (void)setConsiderPublisherTopicAggregates:(bool)arg1;
- (void)setDilutionFactor:(double)arg1;
- (void)setEnableUndampening:(bool)arg1;
- (void)setExponentialFavoritedBoost:(double)arg1;
- (void)setFavoritedBoost:(double)arg1;
- (void)setGlobalWeight:(double)arg1;
- (void)setGlobalWeightHalfLife:(double)arg1;
- (void)setGlobalWeightInitialMultiplier:(double)arg1;
- (void)setPaddingFactor:(double)arg1;
- (void)setPostBaselineCurvature:(double)arg1;
- (void)setPreBaselineCurvature:(double)arg1;
- (void)setUndampenOnlyAboveBaselineMembership:(bool)arg1;
- (void)setUseExponentialFavoritedBoost:(bool)arg1;
- (void)setUseRelativePersonalizationValue:(bool)arg1;
- (void)setUserBaseline:(double)arg1;
- (bool)undampenOnlyAboveBaselineMembership;
- (bool)useExponentialFavoritedBoost;
- (bool)useRelativePersonalizationValue;
- (double)userBaseline;

@end
