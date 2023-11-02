
@interface BAAppStorePrepareDescriptor : NSObject <NSSecureCoding> {
    NSString * _appBundleIdentifier;
    NSDictionary * _appStoreMetadata;
    unsigned long long  _cellularPolicy;
    unsigned long long  _clientType;
    bool  _userInitiated;
}

@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property (nonatomic, readonly) NSDictionary *appStoreMetadata;
@property (nonatomic) unsigned long long cellularPolicy;
@property (nonatomic, readonly) unsigned long long clientType;
@property (nonatomic) bool userInitiated;

+ (id)descriptorWithAppBundleIdentifier:(id)arg1 appStoreMetadata:(id)arg2 client:(unsigned long long)arg3;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)appStoreMetadata;
- (unsigned long long)cellularPolicy;
- (unsigned long long)clientType;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setCellularPolicy:(unsigned long long)arg1;
- (void)setUserInitiated:(bool)arg1;
- (bool)userInitiated;

@end
