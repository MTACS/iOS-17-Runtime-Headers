
@interface VCPVideoMetaLensSwitchAnalyzer : NSObject {
    bool  _hadZoom;
    float  _maxZoom;
    float  _minZoom;
    bool  _settlingHadZoom;
    float  _settlingMaxZoom;
    float  _settlingMinZoom;
}

@property (nonatomic) bool hadZoom;
@property (nonatomic) float maxZoom;
@property (nonatomic) float minZoom;
@property (nonatomic) bool settlingHadZoom;
@property (nonatomic) float settlingMaxZoom;
@property (nonatomic) float settlingMinZoom;

- (bool)hadZoom;
- (id)init;
- (float)maxZoom;
- (float)minZoom;
- (id)results;
- (void)setHadZoom:(bool)arg1;
- (void)setMaxZoom:(float)arg1;
- (void)setMinZoom:(float)arg1;
- (void)setSettlingHadZoom:(bool)arg1;
- (void)setSettlingMaxZoom:(float)arg1;
- (void)setSettlingMinZoom:(float)arg1;
- (bool)settlingHadZoom;
- (float)settlingMaxZoom;
- (float)settlingMinZoom;

@end
