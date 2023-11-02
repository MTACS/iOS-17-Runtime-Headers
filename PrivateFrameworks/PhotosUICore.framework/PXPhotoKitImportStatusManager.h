
@interface PXPhotoKitImportStatusManager : NSObject <PXAssetImportStatusManager> {
    NSMutableDictionary * _simulatedStateByAssetID;
    NSHashTable * _statusObservers;
    bool  _supportsStateSimulation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsStateSimulation;

- (void).cxx_destruct;
- (void)_notifySimulationObserversForAssetReference:(id)arg1;
- (long long)_simulatedStateForAsset:(id)arg1;
- (void)addAssetImportStatusObserver:(id)arg1;
- (void)beginSimulatedImportForAssetReference:(id)arg1;
- (void)completeSimulatedImportForAssetReference:(id)arg1 withSuccess:(bool)arg2;
- (long long)importStateForAsset:(id)arg1;
- (id)init;
- (id)initAllowingSimulation:(bool)arg1;
- (void)removeAssetImportStatusObserver:(id)arg1;
- (bool)supportsStateSimulation;

@end
