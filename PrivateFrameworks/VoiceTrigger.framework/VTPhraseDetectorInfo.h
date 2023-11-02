
@interface VTPhraseDetectorInfo : NSObject {
    float  _effectiveKeywordThreshold;
    bool  _hasPendingNearMiss;
    VTPhraseConfig * _phraseConfig;
}

@property (nonatomic) float effectiveKeywordThreshold;
@property (nonatomic) bool hasPendingNearMiss;
@property (nonatomic, retain) VTPhraseConfig *phraseConfig;

- (void).cxx_destruct;
- (float)effectiveKeywordThreshold;
- (bool)hasPendingNearMiss;
- (id)initWithPhraseConfig:(id)arg1;
- (id)phraseConfig;
- (void)setEffectiveKeywordThreshold:(float)arg1;
- (void)setHasPendingNearMiss:(bool)arg1;
- (void)setPhraseConfig:(id)arg1;

@end
