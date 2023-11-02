
@interface TITypologyProfileOptInManager : NSObject <TITypologyProfileOptInManaging> {
    TITypologyProfileState * _typologyProfileState;
}

@property (nonatomic, readonly) bool isProfileInstalledAndUserEnabled;
@property (nonatomic, readonly) bool isTypologyProfileInstalled;
@property (nonatomic, retain) TITypologyProfileState *typologyProfileState;

+ (id)localizedStringForKey:(id)arg1;

- (void).cxx_destruct;
- (void)_askUserToAllow;
- (bool)_isProfileInstalledAndUserEnabled;
- (void)_launchVPNAndDeviceManagementSettings;
- (bool)devicePasscodeSet;
- (void)dismissDialogWithCompletionHandler:(id /* block */)arg1;
- (bool)iCloudAccountAvailable;
- (id)init;
- (bool)isProfileInstalledAndUserEnabled;
- (bool)isTypologyProfileInstalled;
- (id)notificationDetailsForType:(long long)arg1;
- (void)presentDialogForType:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setTypologyProfileState:(id)arg1;
- (id)typologyProfileState;

@end
