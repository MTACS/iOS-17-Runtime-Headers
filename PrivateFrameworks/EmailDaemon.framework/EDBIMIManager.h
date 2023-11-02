
@interface EDBIMIManager : NSObject {
    NSMutableDictionary * _activeDataTasksByRequest;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _activeDataTasksLock;
    <EFScheduler> * _downloadScheduler;
    EDMessagePersistence * _messagePersistence;
    EMRemoteContentURLSession * _urlSession;
}

@property (nonatomic, readonly) <EFScheduler> *downloadScheduler;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) EMRemoteContentURLSession *urlSession;

- (void).cxx_destruct;
- (void)dealloc;
- (id)downloadScheduler;
- (id)initWithMessagePersistence:(id)arg1 urlSession:(id)arg2;
- (id)messagePersistence;
- (id)processBIMIHeadersForMessages:(id)arg1;
- (void)scheduleRecurringActivity;
- (void)test_tearDown;
- (id)urlSession;

@end
