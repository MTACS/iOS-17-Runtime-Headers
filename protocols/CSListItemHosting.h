
@protocol CSListItemHosting <NSObject>

@optional

- (double)containerCornerRadius;
- (bool)isListAppeared;
- (bool)isScreenOn;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)restrictsTouchesOnHostedScene:(bool)arg1;
- (void)setContainerCornerRadius:(double)arg1;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setListAppeared:(bool)arg1;
- (void)setScreenOn:(bool)arg1;

@end
