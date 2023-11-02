
@interface PKBundleProxy : NSObject <PKBundleProxy> {
    LSBundleProxy * _lsObject;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSURL *dataContainerURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) LSBundleProxy *lsObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)bundleVersion;
- (id)dataContainerURL;
- (id)entitlements;
- (id)initWithLSBundleProxy:(id)arg1;
- (id)localizedName;
- (id)lsObject;

@end
