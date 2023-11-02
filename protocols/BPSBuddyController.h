
@protocol BPSBuddyController <NSObject>

@required

- (<BPSBuddyControllerDelegate> *)delegate;
- (void)setDelegate:(id <BPSBuddyControllerDelegate>)arg1;

@optional

+ (bool)controllerNeedsToRun;
+ (void)doWorkForSkippedExpressSettingPane:(NRDevice *)arg1;
+ (BPSExpressSetupDetailItem *)expressModeSettingsItem:(NRDevice *)arg1;
+ (NSString *)expressModeSettingsString:(NRDevice *)arg1;
+ (UIImage *)imageForExpressSetting;
+ (bool)skipControllerForExpressMode:(NRDevice *)arg1;

- (bool)controllerAllowsNavigatingBackFrom;
- (bool)controllerAllowsNavigatingBackTo;
- (bool)controllerBlocksRunningBeforeSignIn;
- (bool)holdBeforeDisplaying;
- (UIViewController *)viewController;

@end
