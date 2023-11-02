
@interface NEVPNManager : NSObject <NEPrettyDescription> {
    NEConfiguration * _configuration;
    NEVPNConnection * _connection;
    bool  _hasLoaded;
    bool  _notificationSent;
}

@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property (copy) NEConfiguration *configuration;
@property (nonatomic, readonly) NEProfileIngestionPayloadInfo *configurationPayloadInfo;
@property (readonly) NEVPNConnection *connection;
@property (getter=isEnabled) bool enabled;
@property (getter=isFromMDM, nonatomic, readonly) bool fromMDM;
@property (getter=isFromProfile, nonatomic, readonly) bool fromProfile;
@property (nonatomic, readonly) NSUUID *identifier;
@property (copy) NSString *localizedDescription;
@property (getter=isOnDemandEnabled) bool onDemandEnabled;
@property (copy) NSArray *onDemandRules;
@property (retain) NEVPNProtocol *protocol;
@property (retain) NEVPNProtocol *protocolConfiguration;

+ (id)create;
+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)additionalSetup;
- (id)appBundleIdentifier;
- (id)configuration;
- (id)configurationPayloadInfo;
- (id)connection;
- (id)copyCurrentUserStartOptions;
- (id)createL2TPUserPreferencesWithName:(id)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)identifier;
- (id)init;
- (id)initWithGrade:(long long)arg1 connection:(id)arg2 tunnelType:(long long)arg3;
- (bool)isEnabled;
- (bool)isFromMDM;
- (bool)isFromProfile;
- (bool)isOnDemandEnabled;
- (bool)isProtocolTypeValid:(long long)arg1;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)arg1;
- (id)localizedDescription;
- (id)onDemandRules;
- (id)protocol;
- (id)protocolConfiguration;
- (void)removeFromPreferencesWithCompletionHandler:(id /* block */)arg1;
- (void)saveToPreferencesWithCompletionHandler:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setOnDemandEnabled:(bool)arg1;
- (void)setOnDemandRules:(id)arg1;
- (void)setProtocol:(id)arg1;
- (void)setProtocolConfiguration:(id)arg1;

@end
