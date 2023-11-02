
@interface MockRemoteGlobalSettingsProvider : NSObject <BLTRemoteGlobalSettingsProvider, BLTRemoteGlobalSettingsSyncServerLocalEndpoint> {
    long long  _effectiveGlobalScheduledDeliverySetting;
    long long  _globalScheduledDeliverySetting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long effectiveGlobalScheduledDeliverySetting;
@property (nonatomic) long long globalScheduledDeliverySetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)effectiveGlobalScheduledDeliverySetting;
- (long long)globalScheduledDeliverySetting;
- (void)setEffectiveGlobalScheduledDeliverySetting:(long long)arg1;
- (void)setGlobalScheduledDeliverySetting:(long long)arg1;

@end
