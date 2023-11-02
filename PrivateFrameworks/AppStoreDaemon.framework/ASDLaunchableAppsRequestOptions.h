
@interface ASDLaunchableAppsRequestOptions : ASDRequestOptions {
    NSArray * _bundleIDs;
}

@property (nonatomic, readonly) NSArray *bundleIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIDs:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
