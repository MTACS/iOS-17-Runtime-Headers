
@interface DMFMDMv1InstallAppResultObject : CATTaskResultObject {
    NSString * _bundleIdentifier;
    unsigned long long  _state;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) unsigned long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 state:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)state;

@end
