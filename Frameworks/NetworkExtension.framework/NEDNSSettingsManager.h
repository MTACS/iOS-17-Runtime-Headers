
@interface NEDNSSettingsManager : NSObject <NEPrettyDescription> {
    NEConfiguration * _configuration;
    NEConfigurationManager * _configurationManager;
    NEVPNConnection * _connection;
    <NEDNSSettingsManagerDelegate> * _delegate;
    bool  _hasLoaded;
    NSObject * _statusObserver;
}

@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property (getter=isConfigurationGradeEnterprise, nonatomic, readonly) bool configurationGradeEnterprise;
@property (nonatomic, readonly) NEProfileIngestionPayloadInfo *configurationPayloadInfo;
@property <NEDNSSettingsManagerDelegate> *delegate;
@property (retain) NEDNSSettings *dnsSettings;
@property (getter=isEnabled) bool enabled;
@property (getter=isFromProfile, nonatomic, readonly) bool fromProfile;
@property (nonatomic, readonly) NSUUID *identifier;
@property (copy) NSString *localizedDescription;
@property (copy) NSArray *onDemandRules;

+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)configurationPayloadInfo;
- (id)delegate;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)dnsSettings;
- (void)fetchStatusWithCompletionHandler:(id /* block */)arg1;
- (id)identifier;
- (id)init;
- (bool)isConfigurationGradeEnterprise;
- (bool)isEnabled;
- (bool)isFromProfile;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)arg1;
- (id)localizedDescription;
- (id)onDemandRules;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)arg1;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDnsSettings:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setOnDemandRules:(id)arg1;

@end
