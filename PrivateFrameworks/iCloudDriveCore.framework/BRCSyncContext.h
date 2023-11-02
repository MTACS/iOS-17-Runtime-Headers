
@interface BRCSyncContext : NSObject {
    BRCThrottleBase * _applyThrottle;
    CKContainer * _ckContainer;
    NSString * _contextIdentifier;
    NSDate * _dateWhenLastForegroundClientLeft;
    NSHashTable * _discretionaryModifyOperations;
    NSOperationQueue * _discretionaryRecursiveListOperationQueue;
    BRCTransferStream * _downloadStream;
    BRCThrottleBase * _downloadThrottle;
    NSMutableSet * _foregroundClients;
    unsigned long long  _foregroundState;
    NSObject<OS_dispatch_queue> * _foregroundStateQueue;
    bool  _isCancelled;
    bool  _isShared;
    NSString * _lastForegroundClientDescription;
    NSHashTable * _nonDiscretionaryModifyOperations;
    NSOperationQueue * _nonDiscretionaryRecursiveListOperationQueue;
    int  _notifyTokenForFramework;
    BRCThrottleBase * _perItemSyncUpThrottle;
    BRCThrottleBase * _readerThrottle;
    BRCAccountSession * _session;
    NSObject<OS_dispatch_source> * _timerForForcedForegroundPeriod;
    NSObject<OS_dispatch_source> * _timerForGraceForegroundPeriod;
    BRCThrottleBase * _uploadFileModifiedThrottle;
    BRCTransferStream * _uploadStream;
    BRCThrottleBase * _uploadThrottle;
}

@property (nonatomic, readonly) BRCThrottleBase *applyThrottle;
@property (nonatomic, readonly) CKContainer *ckContainer;
@property (nonatomic, readonly) CKContainerID *ckContainerID;
@property (nonatomic, readonly) NSString *contextIdentifier;
@property (nonatomic, readonly) BRCUserDefaults *defaults;
@property (nonatomic, readonly) BRCTransferStream *downloadStream;
@property (nonatomic, readonly) BRCThrottleBase *downloadThrottle;
@property (nonatomic, readonly) bool isShared;
@property (nonatomic, readonly) BRCThrottleBase *perItemSyncUpThrottle;
@property (nonatomic, readonly) BRCThrottleBase *readerThrottle;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (nonatomic, readonly) BRCThrottleBase *uploadFileModifiedThrottle;
@property (nonatomic, readonly) BRCTransferStream *uploadStream;
@property (nonatomic, readonly) BRCThrottleBase *uploadThrottle;

+ (id)_contextIdentifierForMangledID:(id)arg1 metadata:(bool)arg2;
+ (id)transferContextForServerZone:(id)arg1 appLibrary:(id)arg2;

- (void).cxx_destruct;
- (void)_armForegroundGraceTimerForClientDescription:(id)arg1;
- (id)_database;
- (void)_notifyContainerBeingNowForeground;
- (void)_notifyFrameworkContainersMonitorWithState:(bool)arg1;
- (void)_preventConcurrentModifyRecordsOperations:(id)arg1 nonDiscretionary:(bool)arg2;
- (void)addForegroundClient:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)addOperation:(id)arg1 allowsCellularAccess:(id)arg2;
- (void)addOperation:(id)arg1 allowsCellularAccess:(id)arg2 nonDiscretionary:(id)arg3;
- (void)addOperation:(id)arg1 nonDiscretionary:(bool)arg2;
- (bool)allowsCellularAccess;
- (id)applyThrottle;
- (void)cancel;
- (id)ckContainer;
- (id)ckContainerID;
- (void)close;
- (id)contextIdentifier;
- (void)dealloc;
- (id)defaults;
- (id)description;
- (void)didReceiveHandoffRequest;
- (id)downloadStream;
- (id)downloadThrottle;
- (void)dumpToContext:(id)arg1;
- (void)forceContainerForegroundForDuration:(double)arg1;
- (id)foregroundClients;
- (id)initWithSession:(id)arg1 contextIdentifier:(id)arg2 isShared:(bool)arg3;
- (bool)isForeground;
- (bool)isShared;
- (void)notifyDuetFromAccessByBundleID:(id)arg1;
- (id)perItemSyncUpThrottle;
- (id)readerThrottle;
- (void)removeForegroundClient:(id)arg1;
- (void)resume;
- (id)session;
- (void)setupIfNeeded;
- (id)uploadFileModifiedThrottle;
- (id)uploadStream;
- (id)uploadThrottle;

@end
