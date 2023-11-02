
@protocol UIKBKeyViewContentView <NSObject>

@required

+ (struct CGSize { double x1; double x2; })preferredContentViewSizeForKey:(UIKBTree *)arg1 withTraits:(UIKBRenderTraits *)arg2;

- (bool)retestSelectedVariantIndexForKey:(UIKBTree *)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 phase:(long long)arg3;
- (void)setTouchForwardingView:(UIView *)arg1;
- (void)updateForKeyplane:(UIKBTree *)arg1 key:(UIKBTree *)arg2;
- (void)updateRenderConfig:(UIKBRenderConfig *)arg1;

@end
