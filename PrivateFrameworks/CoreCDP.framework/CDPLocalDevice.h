
@interface CDPLocalDevice : NSObject {
    <CDPLocalDeviceSecretProxy> * _localSecretProxy;
}

+ (bool)hasLocalSecret;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_currentProcessCreatesDaemonTypeProxy;
- (bool)_isHomePod;
- (bool)currentProcessHasEntitlement:(id)arg1;
- (id)deviceClass;
- (id)deviceName;
- (id)hardwareModel;
- (bool)hasLocalSecret;
- (id)init;
- (id)marketingModel;
- (id)modelVersion;
- (id)osVersion;
- (id)serialNumber;
- (bool)supportsSecureBackupRecovery;

@end
