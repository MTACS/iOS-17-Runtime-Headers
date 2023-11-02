
@interface CKCloudKitAccountRepairController : NSObject <CDPUIDeviceToDeviceEncryptionHelperDelegate> {
    CDPUIDeviceToDeviceEncryptionHelper * _encryptionHelper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CDPUIDeviceToDeviceEncryptionHelper *encryptionHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)AKSecurityUpgradeContextMessages;
- (id)CDPUIDeviceToDeviceEncryptionHelperWithPresentingViewController:(id)arg1;
- (id)accountStore;
- (id)authenticationContext;
- (Class)authenticationContextClass;
- (void)beginRepairWithPresentingViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(id /* block */)arg2;
- (id)encryptionHelper;
- (id)primaryAppleAccount;
- (void)setEncryptionHelper:(id)arg1;

@end
