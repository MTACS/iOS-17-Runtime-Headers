
@interface VCSpotlightSyncService : NSObject <VCSpotlightSyncOperationDelegate, WFDatabaseObjectObserver> {
    <WFDatabaseProvider> * _databaseProvider;
    WFDebouncer * _debouncer;
    SwiftVCDaemonXPCEventHandler * _eventHandler;
    CSSearchableIndex * _index;
    bool  _isFetchingClientState;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _queuedInserted;
    NSMutableSet * _queuedModified;
    NSMutableSet * _queuedRemoved;
    VCSpotlightSyncOperation * _syncOperation;
}

@property (nonatomic, readonly) <WFDatabaseProvider> *databaseProvider;
@property (nonatomic, readonly) WFDebouncer *debouncer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SwiftVCDaemonXPCEventHandler *eventHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CSSearchableIndex *index;
@property (nonatomic) bool isFetchingClientState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableSet *queuedInserted;
@property (nonatomic, retain) NSMutableSet *queuedModified;
@property (nonatomic, retain) NSMutableSet *queuedRemoved;
@property (readonly) Class superclass;
@property (nonatomic, retain) VCSpotlightSyncOperation *syncOperation;

- (void).cxx_destruct;
- (void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (id)databaseProvider;
- (void)dealloc;
- (id)debouncer;
- (id)eventHandler;
- (id)index;
- (id)initWithDatabaseProvider:(id)arg1 eventHandler:(id)arg2;
- (bool)isFetchingClientState;
- (id)queue;
- (id)queuedInserted;
- (id)queuedModified;
- (id)queuedRemoved;
- (void)requestSync;
- (void)setIsFetchingClientState:(bool)arg1;
- (void)setQueuedInserted:(id)arg1;
- (void)setQueuedModified:(id)arg1;
- (void)setQueuedRemoved:(id)arg1;
- (void)setSyncOperation:(id)arg1;
- (void)start;
- (void)sync;
- (id)syncOperation;
- (void)syncOperationFinishedWithRequestToRelaunch:(bool)arg1;
- (void)syncWithModifiedObjects:(id)arg1 inserted:(id)arg2 removed:(id)arg3;

@end
