
@interface PGLongTailAdditionalOptions : NSObject {
    unsigned long long  _qualityPercentile;
    unsigned long long  _topTierAestheticScoreValue;
    unsigned long long  _verifiedPersonScoreValue;
}

@property (nonatomic) unsigned long long qualityPercentile;
@property (nonatomic) unsigned long long topTierAestheticScoreValue;
@property (nonatomic) unsigned long long verifiedPersonScoreValue;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)qualityPercentile;
- (void)setQualityPercentile:(unsigned long long)arg1;
- (void)setTopTierAestheticScoreValue:(unsigned long long)arg1;
- (void)setVerifiedPersonScoreValue:(unsigned long long)arg1;
- (unsigned long long)topTierAestheticScoreValue;
- (unsigned long long)verifiedPersonScoreValue;

@end
