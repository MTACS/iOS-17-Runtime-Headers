
@interface UIMutableSceneAsynchronousRenderingOptions : UISceneAsynchronousRenderingOptions

@property (nonatomic) bool opaque;
@property (nonatomic) float renderMaxAPL;
@property (nonatomic) double renderPeriod;
@property (nonatomic, copy) NSArray *renderTimes;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setRenderMaxAPL:(float)arg1;
- (void)setRenderPeriod:(double)arg1;
- (void)setRenderTimes:(id)arg1;

@end
