
@interface DNDSPlaceholderModeManager : NSObject <DNDSBackingStoreDelegate, DNDSSysdiagnoseDataProvider> {
    <DNDSBackingStore> * _backingStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *sysdiagnoseDataIdentifier;

- (void).cxx_destruct;
- (id)_readPlaceholderModesReturningError:(id*)arg1;
- (id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;
- (id)initWithBackingStore:(id)arg1;
- (id)placeholderModeIgnoringExcludedPlatformsForSemanticType:(long long)arg1;
- (id)placeholderModesWithError:(id*)arg1;
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(bool)arg2;
- (id)sysdiagnoseDataIdentifier;

@end
