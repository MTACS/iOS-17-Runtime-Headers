
@interface ICAuthenticationAlert : NSObject {
    id /* block */  _actionHandler;
    bool  _actionIsDestructive;
    NSString * _actionTitle;
    id /* block */  _dismissHandler;
    NSString * _dismissTitle;
    NSString * _message;
    bool  _prefersSheet;
    id /* block */  _shouldPresentHandler;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic) bool actionIsDestructive;
@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, copy) id /* block */ dismissHandler;
@property (nonatomic, copy) NSString *dismissTitle;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) bool prefersSheet;
@property (nonatomic, readonly) bool shouldPresent;
@property (nonatomic, copy) id /* block */ shouldPresentHandler;
@property (nonatomic, copy) NSString *title;

+ (id)aboutLockedNotesInfoAlert;
+ (id)cannotAddAttachmentsInfoAlertWithAttachmentCount:(unsigned long long)arg1;
+ (id)cannotLockInfoAlertWithReason:(unsigned long long)arg1;
+ (id)cannotSetCustomPasswordInfoAlert;
+ (id)cannotUnlockInfoAlert;
+ (id)customAccountNameForAccount:(id)arg1;
+ (id)customPasswordConfirmationAlert;
+ (id)devicePasswordIncompatibleConfirmationAlertWithAccount:(id)arg1 incompatibilityMessage:(id)arg2;
+ (id)enableBiometricsActionAlertShownKeyWithAccount:(id)arg1;
+ (id)enableBiometricsActionAlertWithAccount:(id)arg1;
+ (id)enableKeychainActionAlert;
+ (id)forgotCustomPasswordSwitchAnywayConfirmationAlert;
+ (id)incorrectCustomPasswordInfoAlertWithObject:(id)arg1 showHint:(bool)arg2;
+ (void)markSwitchToDevicePasswordPromptPresentedForAccount:(id)arg1;
+ (id)messageForPreventLockReason:(unsigned long long)arg1;
+ (id)mismatchedCustomPasswordInfoAlert;
+ (id)missingCustomPasswordInfoAlert;
+ (void)presentAlertsIfNeeded:(id)arg1 window:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)rememberCustomPasswordInfoAlertPresentedKeyForAccount:(id)arg1;
+ (id)rememberCustomPasswordInfoAlertWithAccount:(id)arg1;
+ (id)resetCustomPasswordConfirmationAlertWithAccount:(id)arg1;
+ (id)resetCustomPasswordInfoAlertWithAccount:(id)arg1;
+ (void)resetPresentationsForAccount:(id)arg1;
+ (id)setDevicePasswordActionAlert;
+ (id)setDevicePasswordInfoAlert;
+ (bool)shouldPresentSwitchToDevicePasswordPromptForAccount:(id)arg1;
+ (id)signIntoCloudAccountActionAlertWithAccount:(id)arg1;
+ (id)switchToDevicePasswordInSettingsInfoAlertWithAccount:(id)arg1;
+ (id)switchToDevicePasswordPromptPresentedCountKeyForAccount:(id)arg1;
+ (id)switchedModeInfoAlertWithAccount:(id)arg1;
+ (id)switchedToCustomPasswordModeInfoAlertWithAccount:(id)arg1;
+ (id)switchedToDevicePasswordModeInfoAlertWithAccount:(id)arg1;
+ (id)updateDivergedCustomPasswordModeActionAlertWithAccount:(id)arg1 incompatibilityMessage:(id)arg2;
+ (id)updateDivergedCustomPasswordNotesActionAlertWithObject:(id)arg1;
+ (id)updateDivergedDevicePasswordModeActionAlertWithAccount:(id)arg1;
+ (id)upgradeToLockNotesInfoAlert;

- (void).cxx_destruct;
- (id /* block */)actionHandler;
- (bool)actionIsDestructive;
- (id)actionTitle;
- (id)description;
- (id /* block */)dismissHandler;
- (id)dismissTitle;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)message;
- (bool)prefersSheet;
- (void)presentInWindow:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setActionIsDestructive:(bool)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setDismissTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setPrefersSheet:(bool)arg1;
- (void)setShouldPresentHandler:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldPresent;
- (id /* block */)shouldPresentHandler;
- (id)title;

@end
