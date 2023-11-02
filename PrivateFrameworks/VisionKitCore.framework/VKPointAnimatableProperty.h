
@interface VKPointAnimatableProperty : NSObject {
    UIViewFloatAnimatableProperty * _x;
    UIViewFloatAnimatableProperty * _y;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } presentationValue;
@property (nonatomic) struct CGPoint { double x1; double x2; } value;
@property (nonatomic, readonly) UIViewFloatAnimatableProperty *x;
@property (nonatomic, readonly) UIViewFloatAnimatableProperty *y;

- (void).cxx_destruct;
- (id)init;
- (struct CGPoint { double x1; double x2; })presentationValue;
- (void)setValue:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })value;
- (id)x;
- (id)y;

@end
