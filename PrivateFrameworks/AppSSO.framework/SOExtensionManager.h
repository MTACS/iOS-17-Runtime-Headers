
@interface SOExtensionManager : NSObject {
    SOExtensionFinder * _extensionFinder;
    NSObject<OS_dispatch_queue> * _extensionManagerQueue;
    NSArray * _loadedExtensions;
}

@property (nonatomic, readonly) NSArray *loadedExtensions;

+ (bool)_isMatchedExtension:(id)arg1 forBundleIdentifier:(id)arg2;
+ (void)_sendNotificationsLoadedExtensions:(id)arg1 new:(id)arg2 removed:(id)arg3;
+ (id)internalExtensionBundleIdentifier;
+ (id)internalExtensionsBundleIdentifiers;
+ (bool)isAppleConnectExtensionBundleIdentifier:(id)arg1;
+ (bool)isInternalExtensionBundleIdentifier:(id)arg1;
+ (bool)isTiburonExtensionBundleIdentifier:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_doBeginMatchingExtensions;
- (void)_doEndMatchingExtensions;
- (id)_doLoadExtensions;
- (void)beginMatchingExtensions;
- (void)dealloc;
- (void)endMatchingExtensions;
- (id)init;
- (bool)isLoadedExtensionWithBundleIdentifer:(id)arg1;
- (void)loadExtensionWithBundleIdentifer:(id)arg1 completion:(id /* block */)arg2;
- (id)loadExtensionWithBundleIdentifier:(id)arg1;
- (void)loadExtensions;
- (id)loadInternalExtension;
- (id)loadedExtensionWithBundleIdentifer:(id)arg1;
- (id)loadedExtensions;
- (id)loadedInternalExtension;
- (void)unloadExtensions;

@end
