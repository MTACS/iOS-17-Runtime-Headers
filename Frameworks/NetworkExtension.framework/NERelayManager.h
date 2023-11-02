
@interface NERelayManager : NSObject <NEPrettyDescription> {
    NEConfiguration * _configuration;
    <NERelayManagerDelegate> * _delegate;
    bool  _hasLoaded;
    bool  _isShared;
    bool  _notificationSent;
}

@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property <NERelayManagerDelegate> *delegate;
@property (getter=isEnabled) bool enabled;
@property (copy) NSArray *excludedDomains;
@property (getter=isFromProfile, nonatomic, readonly) bool fromProfile;
@property (nonatomic, readonly) NSUUID *identifier;
@property (copy) NSString *localizedDescription;
@property (copy) NSArray *matchDomains;
@property (copy) NSArray *onDemandRules;
@property (retain) NSArray *relays;

+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)arg1;
+ (void)loadAllManagersFromPreferencesWithCompletionHandler:(id /* block */)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)delegate;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)excludedDomains;
- (id)identifier;
- (id)init;
- (bool)isEnabled;
- (bool)isFromProfile;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)arg1;
- (id)localizedDescription;
- (id)matchDomains;
- (id)onDemandRules;
- (id)relays;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)arg1;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setExcludedDomains:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setMatchDomains:(id)arg1;
- (void)setOnDemandRules:(id)arg1;
- (void)setRelays:(id)arg1;

@end
