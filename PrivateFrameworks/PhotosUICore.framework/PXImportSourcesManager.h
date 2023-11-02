
@interface PXImportSourcesManager : PXObservable <PHImportControllerObserver, PHImportSourceObserver> {
    PHImportSource * _URLImportSource;
    PHImportController * _importController;
    NSMutableArray * _importSources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHImportController *importController;
@property (nonatomic, readonly) NSArray *importSources;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_notifyObserversDidAddImportSource:(id)arg1;
- (void)_notifyObserversDidRemoveImportSource:(id)arg1;
- (void)_notifyObserversDidUpdateImportSource:(id)arg1;
- (void)_updateImportURLSource:(id)arg1;
- (void)capabilitiesDidChangeForImportSource:(id)arg1;
- (id)importController;
- (void)importController:(id)arg1 addedImportSource:(id)arg2;
- (void)importController:(id)arg1 failedToAddImportSource:(id)arg2 exceptions:(id)arg3;
- (void)importController:(id)arg1 removedImportSource:(id)arg2;
- (void)importSource:(id)arg1 didAddAssets:(id)arg2;
- (void)importSource:(id)arg1 didDeleteAsset:(id)arg2;
- (void)importSource:(id)arg1 didRemoveAssets:(id)arg2;
- (void)importSource:(id)arg1 didUpdateAsset:(id)arg2 propertyMask:(unsigned short)arg3;
- (id)importSources;
- (id)init;
- (void)nameDidChangeForImportSource:(id)arg1;
- (void)userHasTrustedHostForImportSource:(id)arg1;
- (void)userRequiredToTrustHostForImportSource:(id)arg1;

@end
