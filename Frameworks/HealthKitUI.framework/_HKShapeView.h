
@interface _HKShapeView : UIView

@property (nonatomic, retain) UIBezierPath *path;
@property (nonatomic, readonly) CAShapeLayer *shapeLayer;

+ (Class)layerClass;

- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)shapeLayer;

@end
