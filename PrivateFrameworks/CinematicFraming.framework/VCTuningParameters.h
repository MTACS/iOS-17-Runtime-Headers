
@interface VCTuningParameters : NSObject {
    float  _cameraResetDuration;
    float  _oneShotFramingDuration;
    NSDictionary * _plist;
    float  _superWideToWideSwitchMargin;
    float  _wideToSuperWideSwitchMargin;
}

@property (nonatomic) float cameraResetDuration;
@property (nonatomic) float oneShotFramingDuration;
@property (nonatomic) float superWideToWideSwitchMargin;
@property (nonatomic) float wideToSuperWideSwitchMargin;

- (void).cxx_destruct;
- (float)cameraResetDuration;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (float)oneShotFramingDuration;
- (void)setCameraResetDuration:(float)arg1;
- (void)setOneShotFramingDuration:(float)arg1;
- (void)setSuperWideToWideSwitchMargin:(float)arg1;
- (void)setWideToSuperWideSwitchMargin:(float)arg1;
- (float)superWideToWideSwitchMargin;
- (float)wideToSuperWideSwitchMargin;

@end
