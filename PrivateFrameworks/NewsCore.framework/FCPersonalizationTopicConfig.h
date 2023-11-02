
@interface FCPersonalizationTopicConfig : NSObject <NSCopying, NSSecureCoding> {
    bool  _capAtBaseline;
    double  _halfLifeCoefficientOverride;
    long long  _limitInGroup;
    double  _publisherTopicWeight;
    double  _scoreMultiplier;
    bool  _shouldLimitInGroup;
    double  _tagWeight;
    NSString * _topicID;
    bool  _useHalfLifeCoefficientOverride;
}

@property (nonatomic) bool capAtBaseline;
@property (nonatomic) double halfLifeCoefficientOverride;
@property (nonatomic) long long limitInGroup;
@property (nonatomic) double publisherTopicWeight;
@property (nonatomic) double scoreMultiplier;
@property (nonatomic) bool shouldLimitInGroup;
@property (nonatomic) double tagWeight;
@property (nonatomic, copy) NSString *topicID;
@property (nonatomic) bool useHalfLifeCoefficientOverride;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)capAtBaseline;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)halfLifeCoefficientOverride;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1 defaultConfig:(id)arg2;
- (id)initWithTopicID:(id)arg1 scoreMultiplier:(double)arg2 tagWeight:(double)arg3 capAtBaseline:(bool)arg4 limitInGroup:(long long)arg5 shouldLimitInGroup:(bool)arg6 publisherTopicWeight:(double)arg7 useHalfLifeCoefficientOverride:(bool)arg8 halfLifeCoefficientOverride:(double)arg9;
- (long long)limitInGroup;
- (double)publisherTopicWeight;
- (double)scoreMultiplier;
- (void)setCapAtBaseline:(bool)arg1;
- (void)setHalfLifeCoefficientOverride:(double)arg1;
- (void)setLimitInGroup:(long long)arg1;
- (void)setPublisherTopicWeight:(double)arg1;
- (void)setScoreMultiplier:(double)arg1;
- (void)setShouldLimitInGroup:(bool)arg1;
- (void)setTagWeight:(double)arg1;
- (void)setTopicID:(id)arg1;
- (void)setUseHalfLifeCoefficientOverride:(bool)arg1;
- (bool)shouldLimitInGroup;
- (double)tagWeight;
- (id)topicID;
- (bool)useHalfLifeCoefficientOverride;

@end
