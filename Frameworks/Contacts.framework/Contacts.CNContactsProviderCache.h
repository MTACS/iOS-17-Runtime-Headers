
@interface Contacts.CNContactsProviderCache : NSObject {
    void appExtensionIdentityByBundleIdentifierCache;
    void appExtensionIdentityCache;
    void containerByBundleIdentifierCache;
    void lock;
    void queryTask;
}

@property (nonatomic, readonly) NSArray *cachedBundleIdentifiers;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)cachedBundleIdentifiers;
- (id)init;
- (void)invalidateCache;

@end
