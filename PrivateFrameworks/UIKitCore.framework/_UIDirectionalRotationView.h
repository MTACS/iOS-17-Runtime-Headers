
@interface _UIDirectionalRotationView : UIView

@property (getter=isCounterTransformView, nonatomic) bool counterTransformView;
@property (getter=isInverseTransformView, nonatomic) bool inverseTransformView;

+ (Class)layerClass;

- (id)drLayer;
- (bool)isCounterTransformView;
- (bool)isInverseTransformView;
- (void)setCounterTransformView:(bool)arg1;
- (void)setInverseTransformView:(bool)arg1;

@end
