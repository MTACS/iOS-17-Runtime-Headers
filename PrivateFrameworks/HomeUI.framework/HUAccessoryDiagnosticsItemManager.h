
@interface HUAccessoryDiagnosticsItemManager : HFItemManager {
    HFAccessoryDiagnosticsControlItem * _diagnosticsModesItem;
    NSMutableArray * _downloadedLogs;
    HFItem * _enableAudioClipLoggingItem;
    HFItem * _enableVerboseLoggingItem;
    HFStaticItem * _fetchADKSnapshotButtonItem;
    HFStaticItem * _fetchManufacturerSnapshotButtonItem;
    HFStaticItem * _logCollectionFailedItem;
    HMAccessory * _sourceAccessory;
}

@property (nonatomic) bool collectionFailed;
@property (nonatomic) bool collectionInProgress;
@property (nonatomic, readonly) HFAccessoryDiagnosticsControlItem *diagnosticsModesItem;
@property (nonatomic, retain) NSMutableArray *downloadedLogs;
@property (nonatomic, readonly) HFItem *enableAudioClipLoggingItem;
@property (nonatomic, readonly) HFItem *enableVerboseLoggingItem;
@property (nonatomic, readonly) HFStaticItem *fetchADKSnapshotButtonItem;
@property (nonatomic, readonly) HFStaticItem *fetchManufacturerSnapshotButtonItem;
@property (nonatomic, readonly) HFStaticItem *logCollectionFailedItem;
@property (nonatomic, readonly) HMAccessory *sourceAccessory;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (void)_loadDownloadedLogs;
- (void)_registerForExternalUpdates;
- (void)_setLoggingOption:(long long)arg1 enable:(bool)arg2;
- (void)_unregisterForExternalUpdates;
- (id)availableLogs;
- (void)beginDiagnosticCollection:(id)arg1;
- (bool)collectionFailed;
- (bool)collectionInProgress;
- (id)diagnosticsModesItem;
- (void)didChangeNotification:(id)arg1;
- (id)downloadedLogs;
- (id)enableAudioClipLoggingItem;
- (id)enableVerboseLoggingItem;
- (id)fetchADKSnapshotButtonItem;
- (id)fetchManufacturerSnapshotButtonItem;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)logCollectionFailedItem;
- (void)recordDownloadedLog:(id)arg1;
- (void)setAudioClipLoggingEnabled:(bool)arg1;
- (void)setCollectionFailed:(bool)arg1;
- (void)setCollectionInProgress:(bool)arg1;
- (void)setDownloadedLogs:(id)arg1;
- (void)setVerboseLoggingEnabled:(bool)arg1;
- (id)sourceAccessory;

@end
