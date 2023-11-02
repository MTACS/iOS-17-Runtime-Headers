
@interface MSPCloudKitAccountAccess : NSObject {
    NSString * _accountIdentifier;
    CKContainer * _container;
    CKContainer * _containerWithZoneWidePCS;
    bool  _disableDeviceToDeviceEncryption;
    CKContainer * _secureContainer;
    CKContainer * _secureContainerWithZoneWidePCS;
    bool  _useSecureContainer;
}

@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic) bool disableDeviceToDeviceEncryption;
@property (nonatomic) bool useSecureContainer;

+ (long long)containerEnvironmentForAccessEnvironment:(long long)arg1;
+ (long long)defaultEnvironment;
+ (void)fetchDeviceToDeviceEncryptionStatus:(id /* block */)arg1;
+ (bool)hasCloudKitEntitlement;
+ (id)sharedAccess;
+ (bool)useLongLivedOperations;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)containerForAccount;
- (id)containerWithZoneWidePCS:(bool)arg1;
- (id)description;
- (bool)disableDeviceToDeviceEncryption;
- (void)fetchAccountIdentifierWithCompletion:(id /* block */)arg1;
- (void)fetchAccountStatus:(id /* block */)arg1;
- (void)fetchDeviceToDeviceEncryptionStatus:(id /* block */)arg1;
- (id)initWithEnvironment:(long long)arg1;
- (id)initWithEnvironment:(long long)arg1 createContainers:(bool)arg2;
- (void)setAccountIdentifier:(id)arg1;
- (void)setDisableDeviceToDeviceEncryption:(bool)arg1;
- (void)setUseSecureContainer:(bool)arg1;
- (bool)useSecureContainer;

@end
