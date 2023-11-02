
@interface CKAccountInfo : NSObject <NSSecureCoding> {
    long long  _accountPartition;
    long long  _accountStatus;
    long long  _deviceToDeviceEncryptionAvailability;
    bool  _hasEncryptionIdentity;
    bool  _hasValidCredentials;
    bool  _isFromCache;
    bool  _needsToVerifyTerms;
    long long  _validationCounter;
    long long  _walrusStatus;
}

@property (nonatomic) long long accountPartition;
@property (nonatomic) long long accountStatus;
@property (nonatomic, readonly) long long deviceToDeviceDataPrivacyStatus;
@property (nonatomic) long long deviceToDeviceEncryptionAvailability;
@property bool hasEncryptionIdentity;
@property (nonatomic) bool hasValidCredentials;
@property (nonatomic) bool isFromCache;
@property (nonatomic, readonly) bool needsToVerifyTerms;
@property (nonatomic) bool supportsDeviceToDeviceEncryption;
@property (nonatomic, readonly) long long walrusStatus;

+ (void)initialize;
+ (void)invalidateCachedAccountInfo;
+ (id)new;
+ (bool)supportsSecureCoding;

- (id)CKPropertiesDescription;
- (long long)accountPartition;
- (long long)accountStatus;
- (id)copyWithFakeDeviceToDeviceEncryptionAvailability:(long long)arg1;
- (id)description;
- (long long)deviceToDeviceDataPrivacyStatus;
- (long long)deviceToDeviceEncryptionAvailability;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasEncryptionIdentity;
- (bool)hasValidCredentials;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAccountStatus:(long long)arg1 accountPartition:(long long)arg2 hasValidCredentials:(bool)arg3 deviceToDeviceEncryptionAvailability:(long long)arg4 walrusStatus:(long long)arg5 needsToVerifyTerms:(bool)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFromCache;
- (bool)needsToVerifyTerms;
- (void)setAccountPartition:(long long)arg1;
- (void)setAccountStatus:(long long)arg1;
- (void)setDeviceToDeviceEncryptionAvailability:(long long)arg1;
- (void)setHasEncryptionIdentity:(bool)arg1;
- (void)setHasValidCredentials:(bool)arg1;
- (void)setIsFromCache:(bool)arg1;
- (void)setSupportsDeviceToDeviceEncryption:(bool)arg1;
- (bool)supportsDeviceToDeviceEncryption;
- (long long)walrusStatus;

@end
