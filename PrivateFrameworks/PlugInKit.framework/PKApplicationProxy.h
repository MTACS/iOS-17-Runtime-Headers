
@interface PKApplicationProxy : PKBundleProxy <PKApplicationProxy>

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSURL *dataContainerURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (getter=isPlaceholder, nonatomic, readonly) bool placeholder;
@property (nonatomic, readonly) NSArray *plugInKitPlugins;
@property (readonly) Class superclass;

+ (id)applicationProxyForBundleURL:(id)arg1;

- (bool)isPlaceholder;
- (id)plugInKitPlugins;

@end
