
@interface HMDHH2CoreDataCloudKitMirroringObserver : HMFObject <HMDCoreDataNotificationListener, HMFLogging> {
    NSManagedObjectContext * _cachedMOC;
    id /* block */  _completionHandler;
    HMDCoreData * _coreData;
    bool  _isExportProgressRequestAlreadyInProgress;
    unsigned long long  _numberOfIgnoredExportProgressRequest;
    NSMutableSet * _objectIdsToMonitor;
    NSString * _storeIdentifier;
    unsigned long long  _totalObjectsToMonitor;
}

@property (nonatomic, retain) NSManagedObjectContext *cachedMOC;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) HMDCoreData *coreData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExportProgressRequestAlreadyInProgress;
@property (nonatomic) unsigned long long numberOfIgnoredExportProgressRequest;
@property (nonatomic, retain) NSMutableSet *objectIdsToMonitor;
@property (nonatomic, retain) NSString *storeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long totalObjectsToMonitor;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)cachedMOC;
- (void)callClientsCompletionHandler:(id)arg1;
- (id /* block */)completionHandler;
- (id)coreData;
- (void)coreData:(id)arg1 persistentStoreWithIdentifierDidChange:(id)arg2;
- (id)initWithObjectIds:(id)arg1 coreData:(id)arg2 storeIdentifier:(id)arg3;
- (bool)isExportProgressRequestAlreadyInProgress;
- (unsigned long long)numberOfIgnoredExportProgressRequest;
- (id)objectIdsToMonitor;
- (void)processExportResult:(id)arg1 withError:(id)arg2;
- (void)setCachedMOC:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCoreData:(id)arg1;
- (void)setIsExportProgressRequestAlreadyInProgress:(bool)arg1;
- (void)setNumberOfIgnoredExportProgressRequest:(unsigned long long)arg1;
- (void)setObjectIdsToMonitor:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)startMonitoring:(id /* block */)arg1;
- (void)stopMonitoring;
- (id)storeIdentifier;
- (unsigned long long)totalObjectsToMonitor;
- (void)verifyModelsPushedToCloudKit;
- (bool)verifyModelsPushedToCloudKitUsingCoreDataExportStream;

@end
