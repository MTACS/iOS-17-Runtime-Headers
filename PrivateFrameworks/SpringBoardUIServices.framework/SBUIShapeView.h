
@interface SBUIShapeView : UIView

+ (Class)layerClass;

- (id)_shapeLayer;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setFillRule:(long long)arg1;
- (void)setPath:(id)arg1;

@end
