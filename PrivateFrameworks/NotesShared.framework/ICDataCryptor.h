
@interface ICDataCryptor : NSObject <NSSecureCoding> {
    NSString * _cloudSyncingObjectIdentifier;
}

@property (nonatomic, retain) NSString *cloudSyncingObjectIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cloudSyncingObjectIdentifier;
- (id)decryptEncryptedData:(id)arg1 identifier:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptData:(id)arg1 identifier:(id)arg2;
- (id)init;
- (id)initWithCloudSyncingObjectIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCloudSyncingObjectIdentifier:(id)arg1;

@end
