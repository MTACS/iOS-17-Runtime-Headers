
@interface HMDCoreDataCloudMirroringExportStatusMonitor : HMFObject <HMDCoreDataNotificationListener, HMFLogging> {
    bool  _additionalExportVerificationPending;
    HMDCoreData * _coreData;
    <HMDCoreDataCloudMirroringExportStatusMonitorDelegate> * _delegate;
    bool  _exportVerificationInProgress;
    NSManagedObjectContext * _managedObjectContext;
    NSMutableDictionary * _objectIDToExportedToken;
}

@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCoreDataCloudMirroringExportStatusMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configureWithExpectedObjectIDToExportedToken:(id)arg1;
- (void)coreData:(id)arg1 persistentStoreWithIdentifierDidChange:(id)arg2;
- (id)delegate;
- (id)initWithCoreData:(id)arg1 managedObjectContext:(id)arg2;
- (bool)isComplete;
- (id)managedObjectContext;
- (void)setDelegate:(id)arg1;
- (void)verifyModelsExportStatus;

@end
