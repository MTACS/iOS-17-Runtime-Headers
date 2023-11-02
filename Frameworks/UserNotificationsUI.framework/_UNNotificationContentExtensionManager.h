
@interface _UNNotificationContentExtensionManager : NSObject {
    _UNNotificationContentExtensionCache * _extensionsCache;
    id  _extensionsDiscoveryToken;
}

@property (nonatomic, retain) _UNNotificationContentExtensionCache *extensionsCache;
@property (nonatomic, retain) id extensionsDiscoveryToken;

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_beginMatchingExtensions;
- (id)_matchingAttributes;
- (void)_stopMatchingExtensions;
- (id)extensionForNotificationSourceIdentifier:(id)arg1 categoryIdentifier:(id)arg2;
- (id)extensionsCache;
- (id)extensionsDiscoveryToken;
- (id)init;
- (void)setExtensionsCache:(id)arg1;
- (void)setExtensionsDiscoveryToken:(id)arg1;

@end
