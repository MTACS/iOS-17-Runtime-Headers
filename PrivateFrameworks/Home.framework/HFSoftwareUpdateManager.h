
@interface HFSoftwareUpdateManager : NSObject <HFAccessoryObserver, HFAccessorySoftwareUpdateControllerV2Observer, HFExecutionEnvironmentObserver, HFHomeObserver, HFSoftwareUpdateObserver> {
    NSMapTable * _accessoryUniqueIDToFetchPromisesMapTable;
    NSMapTable * _accessoryUniqueIDToSoftwareUpdateMapTable;
    NSMapTable * _accessoryUniqueIDToSoftwareUpdateProgressMapTable;
    HFHomeKitDispatcher * _dispatcher;
    NSMapTable * _documentationMetadataToDocumentationFutureMapTable;
    NSMapTable * _documentationMetadataToDocumentationMapTable;
    NSMapTable * _observedAccessoryUniqueIDToAccessoryMapTable;
    NSMutableSet * _requestedSoftwareUpdateInstalls;
}

@property (nonatomic, readonly) NSMapTable *accessoryUniqueIDToFetchPromisesMapTable;
@property (nonatomic, readonly) NSMapTable *accessoryUniqueIDToSoftwareUpdateMapTable;
@property (nonatomic, readonly) NSMapTable *accessoryUniqueIDToSoftwareUpdateProgressMapTable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) HFHomeKitDispatcher *dispatcher;
@property (nonatomic, readonly) NSMapTable *documentationMetadataToDocumentationFutureMapTable;
@property (nonatomic, readonly) NSMapTable *documentationMetadataToDocumentationMapTable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *observedAccessoryUniqueIDToAccessoryMapTable;
@property (nonatomic, readonly) NSMutableSet *requestedSoftwareUpdateInstalls;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fetchNeedsAttentionReasons:(id)arg1;
- (id)_fetchSoftwareUpdateDocumentationWithAccessory:(id)arg1;
- (void)_finishFetchPromisesWithAccessory:(id)arg1;
- (void)_markSoftwareUpdate:(id)arg1 asRequested:(bool)arg2;
- (long long)_softwareUpdateStateForAccessory:(id)arg1;
- (void)_updateRequestedSoftwareUpdateInstallsWithAccessory:(id)arg1 softwareUpdateState:(long long)arg2 softwareUpdateVersion:(id)arg3;
- (void)_waitToFinishPromise:(id)arg1 untilSoftwareUpdateDocumentationFetchCompletes:(id)arg2;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (id)accessoryUniqueIDToFetchPromisesMapTable;
- (id)accessoryUniqueIDToSoftwareUpdateMapTable;
- (id)accessoryUniqueIDToSoftwareUpdateProgressMapTable;
- (void)dealloc;
- (id)dispatcher;
- (id)documentationMetadataToDocumentationFutureMapTable;
- (id)documentationMetadataToDocumentationMapTable;
- (void)executionEnvironmentDidBecomeActive:(id)arg1;
- (id)fetchAvailableSoftwareUpdate:(id)arg1 options:(unsigned long long)arg2;
- (bool)hasNewValidSoftwareUpdate:(id)arg1;
- (bool)hasRequestedSoftwareUpdate:(id)arg1;
- (bool)hasSoftwareUpdate:(id)arg1;
- (bool)hasValidSoftwareUpdate:(id)arg1;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (id)init;
- (id)initWithDispatcher:(id)arg1;
- (bool)isDownloadingSoftwareUpdate:(id)arg1;
- (bool)isInstallingSoftwareUpdate:(id)arg1;
- (bool)isReadyToInstallSoftwareUpdate:(id)arg1;
- (bool)isSoftwareUpdateInProgress:(id)arg1;
- (bool)isSoftwareUpdateInstalled:(id)arg1;
- (id)observedAccessoryUniqueIDToAccessoryMapTable;
- (id)requestedSoftwareUpdateInstalls;
- (void)resetCaches;
- (void)setDispatcher:(id)arg1;
- (void)softwareUpdate:(id)arg1 didUpdateState:(long long)arg2;
- (void)softwareUpdateController:(id)arg1 accessory:(id)arg2 didFailUpdate:(id)arg3 withError:(id)arg4 timestamp:(id)arg5;
- (void)softwareUpdateController:(id)arg1 accessory:(id)arg2 didReceiveUpdate:(id)arg3;
- (void)softwareUpdateController:(id)arg1 accessory:(id)arg2 didUpdateProgress:(id)arg3;
- (id)softwareUpdateDocumentation:(id)arg1;
- (unsigned long long)softwareUpdateDownloadSize:(id)arg1;
- (id)softwareUpdateForAccessory:(id)arg1;
- (id)softwareUpdatePortionComplete:(id)arg1;
- (bool)softwareUpdatePossessesNecessaryDocumentation:(id)arg1;
- (id)softwareUpdateProgressForAccessory:(id)arg1;
- (id)softwareUpdateReleaseDate:(id)arg1;
- (id)softwareUpdateVersion:(id)arg1;
- (void)startObservingSoftwareUpdatesForAccessories:(id)arg1;
- (id)startSoftwareUpdate:(id)arg1;
- (void)stopObservingSoftwareUpdatesForAccessories:(id)arg1;

@end
