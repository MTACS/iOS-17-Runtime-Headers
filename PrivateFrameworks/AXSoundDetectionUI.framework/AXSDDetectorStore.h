
@interface AXSDDetectorStore : NSObject <AXSDUltronModelAssetManagerDelegate> {
    AXUltronModelAssetManager * _assetManager;
    NSMutableDictionary * _detectors;
    bool  _detectorsReady;
    NSPointerArray * _observers;
    NSMutableArray * _purgedDetectors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *detectors;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *purgedDetectors;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long totalDownloadSize;
@property (nonatomic, readonly) long long totalUnarchivedFileSize;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_addDetectorForAXAsset:(id)arg1;
- (id)_detectorsNeedingUpgrade;
- (void)_downloadAssetsFromDetectors:(id)arg1;
- (void)_enumerateObserversWithBlock:(id /* block */)arg1;
- (void)_notifyObserversAvailableDetectorsDidUpdate:(id)arg1;
- (void)_notifyObserversDetectorsAreReady;
- (void)_notifyObserversDetectorsDownloadProgress:(long long)arg1 totalSizeExpected:(long long)arg2 remainingTimeExpected:(double)arg3 isStalled:(bool)arg4;
- (void)_notifyObserversDetectorsDownloadProgress:(long long)arg1 totalSizeExpected:(long long)arg2 remainingTimeExpected:(double)arg3 isStalled:(bool)arg4 error:(id)arg5;
- (void)_notifyObserversDetectorsNeedUpdate:(id)arg1 toDetectors:(id)arg2;
- (void)_notifyObserversDidFinishRefreshingDetectors:(id)arg1 wasSuccessful:(bool)arg2 error:(id)arg3;
- (void)_purgeAssetsFromDetectors:(id)arg1;
- (void)_reloadCustomDetectors;
- (void)_removeCustomDetectors;
- (void)_toggleDetectorsBasedOnSettingsChange;
- (void)addObserver:(id)arg1;
- (id)allDetectors;
- (id)allDetectorsByIdentifier;
- (bool)areDetectorsReady;
- (void)assetManager:(id)arg1 didFinishRefreshingAssets:(id)arg2 wasSuccessful:(bool)arg3 error:(id)arg4;
- (void)assetManager:(id)arg1 totalSizeExpected:(long long)arg2 downloadProgressTotalWritten:(long long)arg3 remainingTimeExpected:(double)arg4 isStalled:(bool)arg5;
- (void)assetsNotReadyForUltronManager:(id)arg1;
- (void)assetsReadyForUltronManager:(id)arg1;
- (id)customDetectors;
- (id)description;
- (id)detectorWithAssetID:(id)arg1;
- (id)detectorWithIdentifier:(id)arg1;
- (id)detectorWithName:(id)arg1;
- (id)detectors;
- (id)detectorsByIdentifier;
- (void)disableDetector:(id)arg1;
- (void)disableDetectorWithIdentifier:(id)arg1;
- (void)downloadDetectors;
- (void)enableDetector:(id)arg1;
- (void)enableDetectorWithIdentifier:(id)arg1;
- (id)enabledDetectors;
- (bool)hasInProgressDownloads;
- (id)init;
- (id)installedDetectors;
- (bool)isAssetCatalogInstalled;
- (void)loadDetectors;
- (id)localizedNamesByIdentifier;
- (unsigned long long)numberOfObservers;
- (void)purgeDetectors;
- (id)purgedDetectors;
- (void)removeObserver:(id)arg1;
- (void)setDetectors:(id)arg1;
- (void)setPurgedDetectors:(id)arg1;
- (void)stopDownloadOfDetectors;
- (id)supportedDetectors;
- (long long)totalDownloadSize;
- (long long)totalUnarchivedFileSize;
- (id)unInstalledDetectors;

@end
