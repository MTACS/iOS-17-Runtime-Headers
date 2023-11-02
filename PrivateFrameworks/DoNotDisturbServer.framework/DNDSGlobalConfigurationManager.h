
@interface DNDSGlobalConfigurationManager : NSObject <DNDSBackingStoreDelegate, DNDSGlobalConfigurationStoreDelegate, DNDSSysdiagnoseDataProvider> {
    <DNDSGlobalConfigurationStoring> * _backingStore;
    <DNDSGlobalConfigurationManagerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSGlobalConfigurationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *sysdiagnoseDataIdentifier;

- (void).cxx_destruct;
- (unsigned long long)_writeConfiguration:(id)arg1 error:(id*)arg2;
- (id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;
- (void)dealloc;
- (id)delegate;
- (id)fallbackConfiguration;
- (id)getConfigurationReturningError:(id*)arg1;
- (bool)getModesCanImpactAvailabilityReturningError:(id*)arg1;
- (bool)getPreventAutoReplyReturningError:(id*)arg1;
- (void)globalConfigurationStore:(id)arg1 didUpdatePreventAutoReplySetting:(bool)arg2;
- (id)initWithBackingStore:(id)arg1;
- (bool)setConfiguration:(id)arg1 withError:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (bool)setModesCanImpactAvailability:(bool)arg1 withError:(id*)arg2;
- (bool)setPreventAutoReply:(bool)arg1 withError:(id*)arg2;
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(bool)arg2;
- (id)sysdiagnoseDataIdentifier;

@end
