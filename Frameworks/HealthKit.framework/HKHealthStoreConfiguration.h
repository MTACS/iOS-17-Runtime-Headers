
@interface HKHealthStoreConfiguration : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _applicationSDKVersion;
    NSString * _debugIdentifier;
    HKProfileIdentifier * _profileIdentifier;
    NSString * _sourceBundleIdentifier;
    NSString * _sourceVersion;
}

@property (nonatomic, readonly) unsigned int applicationSDKVersion;
@property (nonatomic, readonly, copy) NSString *debugIdentifier;
@property (nonatomic, readonly, copy) HKProfileIdentifier *profileIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)applicationSDKVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceBundleIdentifier:(id)arg1 sourceVersion:(id)arg2 debugIdentifier:(id)arg3 profileIdentifier:(id)arg4 applicationSDKVersion:(unsigned int)arg5;
- (bool)isEqual:(id)arg1;
- (id)profileIdentifier;
- (id)sourceBundleIdentifier;
- (id)sourceVersion;

@end
