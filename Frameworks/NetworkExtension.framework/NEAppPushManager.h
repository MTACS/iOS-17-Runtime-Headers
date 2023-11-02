
@interface NEAppPushManager : NSObject {
    bool  _active;
    NEConfiguration * _configuration;
    NEConfigurationManager * _configurationManager;
    <NEAppPushDelegate> * _delegate;
    bool  _hasLoaded;
    void * _nesmConnection;
}

@property (getter=isActive) bool active;
@property <NEAppPushDelegate> *delegate;
@property (getter=isEnabled) bool enabled;
@property (copy) NSString *localizedDescription;
@property (copy) NSArray *matchPrivateLTENetworks;
@property (copy) NSArray *matchSSIDs;
@property (copy) NSString *providerBundleIdentifier;
@property (copy) NSDictionary *providerConfiguration;

+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isActive;
- (bool)isEnabled;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)arg1;
- (id)localizedDescription;
- (id)matchPrivateLTENetworks;
- (id)matchSSIDs;
- (id)providerBundleIdentifier;
- (id)providerConfiguration;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)arg1;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)arg1;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setMatchPrivateLTENetworks:(id)arg1;
- (void)setMatchSSIDs:(id)arg1;
- (void)setProviderBundleIdentifier:(id)arg1;
- (void)setProviderConfiguration:(id)arg1;

@end
