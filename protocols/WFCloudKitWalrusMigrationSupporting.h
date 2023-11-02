
@protocol WFCloudKitWalrusMigrationSupporting <NSObject>

@required

+ (long long)latestEncryptedSchemaVersion;

- (long long)encryptedSchemaVersion;
- (void)setEncryptedSchemaVersion:(long long)arg1;

@end
