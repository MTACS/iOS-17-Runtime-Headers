
@interface NEFilterManager : NSObject <NEPrettyDescription> {
    NEConfiguration * _configuration;
    NEConfigurationManager * _configurationManager;
    NEVPNConnection * _connection;
    <NEFilterManagerDelegate> * _delegate;
    bool  _hasLoaded;
    NSObject * _statusObserver;
}

@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property (retain) NEConfiguration *configuration;
@property (nonatomic, readonly) NEProfileIngestionPayloadInfo *configurationPayloadInfo;
@property <NEFilterManagerDelegate> *delegate;
@property (getter=isEnabled) bool enabled;
@property long long grade;
@property (nonatomic, readonly) NSUUID *identifier;
@property (getter=isFromMDM, nonatomic, readonly) bool isFromMDM;
@property (getter=isFromProfile, nonatomic, readonly) bool isFromProfile;
@property (copy) NSString *localizedDescription;
@property (retain) NEFilterProviderConfiguration *providerConfiguration;

+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)arg1;
+ (void)loadMyFiltersFromPreferencesWithCompletionHandler:(id /* block */)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)configuration;
- (id)configurationPayloadInfo;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)fetchStatusWithCompletionHandler:(id /* block */)arg1;
- (long long)grade;
- (id)identifier;
- (id)init;
- (id)initPrivate;
- (bool)isEnabled;
- (bool)isFromMDM;
- (bool)isFromProfile;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)arg1;
- (id)localizedDescription;
- (id)providerConfiguration;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)arg1;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGrade:(long long)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setProviderConfiguration:(id)arg1;

@end
