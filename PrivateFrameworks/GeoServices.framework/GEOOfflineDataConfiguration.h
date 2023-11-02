
@interface GEOOfflineDataConfiguration : NSObject <GEOPListStateCapturing, GEOResourceManifestTileGroupObserver> {
    NSDictionary * _activeVersions;
    GEOPBOfflineDataConfiguration * _configuration;
    geo_isolater * _configurationIsolation;
    NSDictionary * _latestAvailableVersions;
    GEOResourceManifestManager * _manifestManager;
    NSObject<OS_dispatch_queue> * _observerQueue;
    GEOObserverHashTable * _observers;
    id  _regulatoryRegionOverrideConfigObserver;
    id  _simulateUpdateAvailableConfigObserver;
    unsigned long long  _stateCaptureHandle;
}

@property (nonatomic, readonly) unsigned long long activeReleaseDataVersion;
@property (nonatomic, readonly, copy) NSDictionary *activeVersions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastUpdatedDate;
@property (nonatomic, copy) NSDictionary *latestAvailableVersions;
@property (nonatomic, readonly) unsigned int regulatoryRegionID;
@property (readonly) Class superclass;
@property (nonatomic, retain) GEOPBOfflineTileMetadata *tileMetadata;
@property (getter=isUpdateAvailable, nonatomic, readonly) bool updateAvailable;

+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (void)_broadcastUpdateAvailability;
- (id)_configurationIsolated;
- (bool)_isUpdateAvailableIsolated;
- (void)_regulatoryRegionOverrideDidChange;
- (void)_setLatestReleaseDataVersionIsCurrentWithConfiguration:(id)arg1;
- (void)_updateAvailableOverrideChanged;
- (void)_writeConfiguration;
- (unsigned long long)activeReleaseDataVersion;
- (id)activeVersions;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x1; char *x2; unsigned int x3; unsigned int x4; }*)arg1;
- (void)dealloc;
- (id)init;
- (bool)isUpdateAvailable;
- (id)lastUpdatedDate;
- (id)latestAvailableVersions;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (unsigned int)regulatoryRegionID;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)setActiveReleaseDataVersion:(unsigned long long)arg1;
- (void)setLastUpdatedDateToNow;
- (void)setLatestAvailableVersions:(id)arg1;
- (void)setTileMetadata:(id)arg1;
- (id)tileMetadata;
- (void)unregisterObserver:(id)arg1;
- (void)updateCompletedWithVersions:(id)arg1 tileMetadata:(id)arg2;

@end
