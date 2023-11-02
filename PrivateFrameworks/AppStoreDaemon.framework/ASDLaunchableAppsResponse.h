
@interface ASDLaunchableAppsResponse : ASDRequestResponse {
    NSArray * _bundleIDs;
}

@property (nonatomic, readonly) NSArray *bundleIDs;
@property bool success;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBundleIDs:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
