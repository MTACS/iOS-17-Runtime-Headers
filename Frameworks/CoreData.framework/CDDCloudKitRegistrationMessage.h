
@interface CDDCloudKitRegistrationMessage : CDDCloudKitMessage {
    NSString * _bundleIdentifier;
    NSString * _containerIdentifier;
    NSString * _storeConfigurationName;
    NSFileHandle * _storeFileHandle;
    NSString * _storeFileProtectionClass;
    NSString * _storePath;
    NSString * _storeType;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
