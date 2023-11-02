
@interface _PKPathView : UIView

@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic, retain) UIBezierPath *path;

+ (Class)layerClass;

- (id)_shapeLayer;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)fillColor;
- (id)path;
- (void)setFillColor:(id)arg1;
- (void)setPath:(id)arg1;

@end
