
@interface UIViewVectorAnimatableProperty : UIAnimatablePropertyWrapper {
    unsigned long long  __length;
}

@property (nonatomic, readonly) unsigned long long _length;
@property (nonatomic, readonly) const double*_presentationValue;
@property (nonatomic, readonly) const double*_value;
@property (nonatomic, readonly) const double*_velocity;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } safari_pointPresentationValue;
@property (setter=safari_setPointValue:, nonatomic) struct CGPoint { double x1; double x2; } safari_pointValue;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } safari_rectPresentationValue;
@property (setter=safari_setRectValue:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } safari_rectValue;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } safari_sizePresentationValue;
@property (setter=safari_setSizeValue:, nonatomic) struct CGSize { double x1; double x2; } safari_sizeValue;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } safari_transformPresentationValue;
@property (setter=safari_setTransformValue:, nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } safari_transformValue;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void)_copyValue:(const double*)arg1;
- (void)_copyVelocity:(const double*)arg1;
- (id)_initWithLength:(unsigned long long)arg1;
- (unsigned long long)_length;
- (void)_mutateValue:(id /* block */)arg1;
- (void)_mutateVelocity:(id /* block */)arg1;
- (const double*)_presentationValue;
- (const double*)_value;
- (id)_vectorAnimatableProperty;
- (const double*)_velocity;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (id)safari_pointProperty;
+ (id)safari_rectProperty;
+ (id)safari_sizeProperty;
+ (id)safari_transformProperty;

- (struct CGPoint { double x1; double x2; })safari_pointPresentationValue;
- (struct CGPoint { double x1; double x2; })safari_pointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })safari_rectPresentationValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })safari_rectValue;
- (void)safari_setPointValue:(struct CGPoint { double x1; double x2; })arg1;
- (void)safari_setRectValue:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)safari_setSizeValue:(struct CGSize { double x1; double x2; })arg1;
- (void)safari_setTransformValue:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGSize { double x1; double x2; })safari_sizePresentationValue;
- (struct CGSize { double x1; double x2; })safari_sizeValue;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })safari_transformPresentationValue;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })safari_transformValue;

@end
