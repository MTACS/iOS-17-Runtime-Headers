
@interface TIInputModeAssetStatusManager : NSObject {
    TILinguisticAssetDownloadClient * _client;
    NSMutableSet * _debuggingTimers;
    NSMutableDictionary * _inputModeToAssetStatusMap;
    NSMutableSet * _listeners;
    bool  _usesDummyFileDebugging;
}

@property (nonatomic, retain) TILinguisticAssetDownloadClient *client;
@property (nonatomic, retain) NSMutableSet *debuggingTimers;
@property (nonatomic, retain) NSMutableDictionary *inputModeToAssetStatusMap;
@property (nonatomic, retain) NSMutableSet *listeners;
@property (nonatomic) bool usesDummyFileDebugging;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addDebuggingTimerForInputMode:(id)arg1 status:(long long)arg2 duration:(double)arg3;
- (void)addListener:(id)arg1;
- (id)addedInputModesForInputModes:(id)arg1;
- (long long)assetStatusForInputMode:(id)arg1;
- (id)client;
- (void)debuggingTimerFired:(id)arg1;
- (id)debuggingTimers;
- (id)dummyFilePathForInputMode:(id)arg1 assetStatus:(long long)arg2;
- (id)inputModeToAssetStatusMap;
- (id)inputModesToRemoveForInputModes:(id)arg1;
- (id)listeners;
- (id)normalizedInputModesForInputModes:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setDebuggingTimers:(id)arg1;
- (void)setInputModeToAssetStatusMap:(id)arg1;
- (void)setListeners:(id)arg1;
- (void)setUsesDummyFileDebugging:(bool)arg1;
- (void)startDownloadingAssetsForInputMode:(id)arg1;
- (void)startMonitoringAssetUpdateStatusForInputModes:(id)arg1;
- (void)startMonitoringAssetUpdateStatusForInputModes:(id)arg1 includeExisting:(bool)arg2;
- (void)updateAssetStatus:(long long)arg1 forInputMode:(id)arg2;
- (void)updateListenerOnMainThread:(id)arg1 status:(long long)arg2 inputModeName:(id)arg3;
- (bool)usesDummyFileDebugging;

@end
