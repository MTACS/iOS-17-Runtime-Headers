
@protocol HUCameraSettingsModule <NSObject>

@required

- (bool)isItemHeader:(HFItem *)arg1;

@optional

- (NAFuture *)didSelectItem:(HFItem *)arg1;
- (unsigned long long)displayStyle;
- (UIViewController *)presentingViewController;
- (void)setPresentingViewController:(UIViewController *)arg1;

@end
