
@protocol SBIconViewActionDelegate <NSObject>

@optional

- (void)icon:(SBIconView *)arg1 touchEnded:(bool)arg2;
- (void)icon:(SBIconView *)arg1 touchMoved:(UITouch *)arg2;
- (void)iconAccessoryViewTapped:(SBIconView *)arg1;
- (void)iconCloseBoxTapped:(SBIconView *)arg1;
- (void)iconTapped:(SBIconView *)arg1;
- (void)iconTapped:(SBIconView *)arg1 modifierFlags:(long long)arg2;
- (void)iconTouchBegan:(SBIconView *)arg1;

@end
