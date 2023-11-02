
@interface CLSAssetScoringContext : NSObject {
    double  _aestheticScoreThresholdToBeAwesome;
    short  _audioClassificationsToEmphasize;
    double  _playCountThreshold;
    bool  _shouldEmphasizeAdjusted;
    bool  _shouldEmphasizeBurst;
    bool  _shouldEmphasizeLive;
    bool  _shouldEmphasizePanorama;
    bool  _shouldEmphasizeReframe;
    bool  _shouldEmphasizeSDOF;
    bool  _shouldEmphasizeShared;
    double  _viewCountThreshold;
}

@property (nonatomic) double aestheticScoreThresholdToBeAwesome;
@property (nonatomic) short audioClassificationsToEmphasize;
@property (nonatomic) double playCountThreshold;
@property (nonatomic) bool shouldEmphasizeAdjusted;
@property (nonatomic) bool shouldEmphasizeBurst;
@property (nonatomic) bool shouldEmphasizeLive;
@property (nonatomic) bool shouldEmphasizePanorama;
@property (nonatomic) bool shouldEmphasizeReframe;
@property (nonatomic) bool shouldEmphasizeSDOF;
@property (nonatomic) bool shouldEmphasizeShared;
@property (nonatomic) double viewCountThreshold;

- (double)aestheticScoreThresholdToBeAwesome;
- (short)audioClassificationsToEmphasize;
- (double)playCountThreshold;
- (void)setAestheticScoreThresholdToBeAwesome:(double)arg1;
- (void)setAudioClassificationsToEmphasize:(short)arg1;
- (void)setPlayCountThreshold:(double)arg1;
- (void)setShouldEmphasizeAdjusted:(bool)arg1;
- (void)setShouldEmphasizeBurst:(bool)arg1;
- (void)setShouldEmphasizeLive:(bool)arg1;
- (void)setShouldEmphasizePanorama:(bool)arg1;
- (void)setShouldEmphasizeReframe:(bool)arg1;
- (void)setShouldEmphasizeSDOF:(bool)arg1;
- (void)setShouldEmphasizeShared:(bool)arg1;
- (void)setViewCountThreshold:(double)arg1;
- (bool)shouldEmphasizeAdjusted;
- (bool)shouldEmphasizeBurst;
- (bool)shouldEmphasizeLive;
- (bool)shouldEmphasizePanorama;
- (bool)shouldEmphasizeReframe;
- (bool)shouldEmphasizeSDOF;
- (bool)shouldEmphasizeShared;
- (double)viewCountThreshold;

@end
