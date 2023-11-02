
@interface NEProfileIngestion : NSObject <NEProfileIngestionDelegate> {
    NSString * _clientName;
    NSMutableArray * _currentConfigurations;
    NEConfiguration * _ingestedConfiguration;
    NEConfigurationManager * _manager;
    NSString * _payloadType;
}

@property (readonly) NSString *clientName;
@property (retain) NSMutableArray *currentConfigurations;
@property (retain) NEConfiguration *ingestedConfiguration;
@property (readonly) NEConfigurationManager *manager;
@property (readonly) NSString *payloadType;

+ (id)getServiceIDForPayload:(id)arg1;
+ (void)profileMigrationComplete;

- (void).cxx_destruct;
- (id)clientName;
- (id)copyManagedConfigurationIDs;
- (bool)createConfigurationFromPayload:(id)arg1 payloadType:(id)arg2;
- (id)currentConfigurations;
- (void)dealloc;
- (bool)enableAlwaysOnVpn;
- (void)enableDefaultService;
- (id)findConfigurationByConfigurationID:(id)arg1;
- (id)findConfigurationByName:(id)arg1;
- (id)findConfigurationByPayloadUUID:(id)arg1;
- (id)getCertificatesForConfigurationWithIdentifier:(id)arg1;
- (id)ingestedConfiguration;
- (id)initWithName:(id)arg1;
- (id)initWithNameAndType:(id)arg1 payloadType:(id)arg2;
- (bool)isInstalled:(id)arg1;
- (bool)loadConfigurationsForceReloadFromDisk;
- (bool)lockConfigurations;
- (id)manager;
- (id)payloadType;
- (void)removeAllConfigurationsWithPayload:(id)arg1 profile:(id)arg2;
- (bool)removeConfiguration:(id)arg1;
- (bool)removeConfigurationWithIdentifier:(id)arg1;
- (bool)removeIngestedConfiguration;
- (bool)saveIngestedConfiguration;
- (bool)saveIngestedConfiguration:(id*)arg1;
- (id)setAsideConfigurationName:(id)arg1 unsetAside:(bool)arg2;
- (void)setCurrentConfigurations:(id)arg1;
- (void)setIngestedConfiguration:(id)arg1;
- (void)unlockConfigurations;
- (bool)updateAccountIdentifiers:(id)arg1;
- (bool)updateAppLayerVPNMappingRules:(id)arg1;
- (bool)updateDefaultAfterAddingConfiguration;
- (bool)updateDefaultAfterDeletingConfiguration;
- (bool)updateManagedAppRules:(id)arg1;
- (bool)updatePerAppMappingRules:(id)arg1;

@end
