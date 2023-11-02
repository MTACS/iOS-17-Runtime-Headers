
@interface ATXModeConfigurationLogger : NSObject {
    NSArray * _cachedConfigurations;
    NSMutableDictionary * _cachedSuggestedItems;
    ATXDNDModeConfigurationClient * _client;
    ATXModeEntityTrialClientWrapper * _modeEntityTrialClientWrapper;
}

@property (nonatomic, retain) NSArray *cachedConfigurations;
@property (nonatomic, retain) NSMutableDictionary *cachedSuggestedItems;
@property (nonatomic, readonly) ATXDNDModeConfigurationClient *client;

- (void).cxx_destruct;
- (id)cachedConfigurations;
- (id)cachedSuggestedItems;
- (id)client;
- (id)init;
- (id)initWithDNDModeConfigurationClient:(id)arg1;
- (void)logMetricForConfiguration:(id)arg1;
- (void)logModeConfigurations;
- (void)logModeConfigurationsWithXPCActivity:(id)arg1;
- (void)retrieveEvents;
- (void)setCachedConfigurations:(id)arg1;
- (void)setCachedSuggestedItems:(id)arg1;

@end
