
@protocol UISpringLoadedInteractionContext <NSObject>

@required

- (struct CGPoint { double x1; double x2; })locationInView:(UIView *)arg1;
- (void)setTargetItem:(id)arg1;
- (void)setTargetView:(UIView *)arg1;
- (long long)state;
- (id)targetItem;
- (UIView *)targetView;

@end
