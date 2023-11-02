
@protocol PXGReusableView <PXReusableObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippingRect;
- (void)setClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUserData:(id <NSCopying>)arg1;
- (<NSCopying> *)userData;

@optional

- (void)addHostedLayer:(CALayer *)arg1;
- (void)addHostedView:(NSObject<PXAnonymousView> *)arg1;
- (struct CGPoint { double x1; double x2; })convertHostedChildCenter:(struct CGPoint { double x1; double x2; })arg1 fromGlobalLayer:(CALayer *)arg2;
- (bool)shouldReloadForUserData:(id <NSCopying>)arg1;
- (bool)shouldReuseWhenInvisible;

@end
