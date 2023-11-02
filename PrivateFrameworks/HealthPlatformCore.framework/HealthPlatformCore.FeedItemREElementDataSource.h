
@interface HealthPlatformCore.FeedItemREElementDataSource : REElementDataSource {
    void sourceProfiles;
    void store;
}

@property (nonatomic, readonly) NSArray *supportedSections;

+ (id)applicationBundleIdentifier;
+ (id)bundleIdentifier;
+ (id)contentAttributes;

- (void).cxx_destruct;
- (void)getElementsInSection:(id)arg1 withHandler:(id /* block */)arg2;
- (id)init;
- (id)supportedSections;

@end
