
@interface DSSafetyCheck : NSObject

+ (void)authForSafetyCheckWithPresentingViewController:(id)arg1 safetyCheckController:(id)arg2;
+ (void)isChildOrTeenAccountWithCompletion:(id /* block */)arg1;
+ (bool)isManagedAccount;
+ (id)safetyCheckViewController;
+ (bool)shouldShowHSA2Upgrade;
+ (void)showHSA2UpgradeWithPresentingViewController:(id)arg1 safetyCheckController:(id)arg2;
+ (void)showManagedAccountAlertWithPresentingViewController:(id)arg1;
+ (void)showlearnMoreForPresentingViewController:(id)arg1 withURL:(id)arg2;
+ (void)startEmergencyResetWithPresentingViewController:(id)arg1;
+ (void)startManageSharingWithPresentingViewController:(id)arg1;
+ (void)startSafetyCheckWithPresentingViewController:(id)arg1 safetyCheckController:(id)arg2;

@end
