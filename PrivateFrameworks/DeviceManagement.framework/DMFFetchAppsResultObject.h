
@interface DMFFetchAppsResultObject : CATTaskResultObject {
    NSDictionary * _appsByBundleIdentifier;
}

@property (nonatomic, readonly, copy) NSDictionary *appsByBundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appsByBundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAppsByBundleIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
