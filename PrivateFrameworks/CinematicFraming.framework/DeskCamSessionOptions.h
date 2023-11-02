
@interface DeskCamSessionOptions : NSObject {
    float  viewportScaleMultiplierLandscape;
    float  viewportScaleMultiplierPortrait;
}

@property (nonatomic) float viewportScaleMultiplierLandscape;
@property (nonatomic) float viewportScaleMultiplierPortrait;

- (id)asDictionary;
- (id)initWithPlist:(id)arg1;
- (id)initWithPlistPath:(id)arg1;
- (void)setViewportScaleMultiplierLandscape:(float)arg1;
- (void)setViewportScaleMultiplierPortrait:(float)arg1;
- (float)viewportScaleMultiplierLandscape;
- (float)viewportScaleMultiplierPortrait;

@end
