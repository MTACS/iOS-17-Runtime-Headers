
@protocol _NCWidgetViewController_Host_IPC

@required

- (void)__closeTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(NSUUID *)arg2;
- (void)__requestPreferredViewHeight:(double)arg1;

@optional

- (void)__setLargestAvailableDisplayMode:(long long)arg1;

@end
