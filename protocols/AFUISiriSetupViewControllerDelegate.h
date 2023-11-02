
@protocol AFUISiriSetupViewControllerDelegate <NSObject>

@required

- (void)disableSiriActivationRequestedBySiriSetupViewController:(AFUISiriSetupViewController *)arg1;
- (void)dismissSiriSetupViewController:(AFUISiriSetupViewController *)arg1;
- (void)openSiriRequestedBySiriSetupViewController:(AFUISiriSetupViewController *)arg1;
- (bool)siriSetupViewController:(AFUISiriSetupViewController *)arg1 openURL:(NSURL *)arg2;

@optional

- (void)updateHomeGestureSharingForSiriSetup:(bool)arg1;

@end
