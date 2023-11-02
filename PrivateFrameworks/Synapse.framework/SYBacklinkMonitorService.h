
@interface SYBacklinkMonitorService : NSObject <NSXPCListenerDelegate, SYBacklinkMonitorOperationDelegate, SYBacklinkMonitorServiceHandleDelegate> {
    SYBacklinkMonitorOperation * __activeOperation;
    bool  __forTesting;
    NSMutableDictionary * __handles;
    NSObject<OS_os_transaction> * __keepAliveTransaction;
    NSXPCListener * __listener;
    SYBacklinkMonitorOperation * __longerLivedOperation;
    SYNotesActivationObserver * __notesObserver;
    NSMutableOrderedSet * __pendingOperations;
    NSObject<OS_dispatch_queue> * __serviceQueue;
    <SYBacklinkMonitorServiceTestingDelegate> * _testingDelegate;
}

@property (nonatomic, retain) SYBacklinkMonitorOperation *_activeOperation;
@property (nonatomic, readonly) bool _forTesting;
@property (nonatomic, retain) NSMutableDictionary *_handles;
@property (nonatomic, retain) NSObject<OS_os_transaction> *_keepAliveTransaction;
@property (nonatomic, retain) NSXPCListener *_listener;
@property (nonatomic, retain) SYBacklinkMonitorOperation *_longerLivedOperation;
@property (nonatomic, retain) SYNotesActivationObserver *_notesObserver;
@property (nonatomic, retain) NSMutableOrderedSet *_pendingOperations;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_serviceQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasKeepAliveTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <SYBacklinkMonitorServiceTestingDelegate> *testingDelegate;

- (void).cxx_destruct;
- (id)_activeOperation;
- (void)_createAndScheduleOperationForHandle:(id)arg1 withUserActivity:(id)arg2 context:(id)arg3;
- (void)_evaluateAndBeginPendingOperations;
- (bool)_forTesting;
- (id)_handles;
- (id)_keepAliveTransaction;
- (id)_listener;
- (id)_listenerEndpoint;
- (id)_longerLivedOperation;
- (void)_notesActivationDidChange:(bool)arg1;
- (id)_notesObserver;
- (id)_pendingOperations;
- (id)_serviceQueue;
- (void)_updateKeepAliveTransaction;
- (void)backlinkMonitorOperation:(id)arg1 shouldUpdateFilterCache:(id)arg2;
- (void)backlinkMonitorOperationDidFinish:(id)arg1;
- (void)beginListeningToConnections;
- (void)dealloc;
- (void)handleDidDisconnect:(id)arg1;
- (bool)hasKeepAliveTransaction;
- (id)init;
- (id)initForTesting:(bool)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)scheduleOperationForHandle:(id)arg1 withUserActivity:(id)arg2 context:(id)arg3;
- (void)setTestingDelegate:(id)arg1;
- (void)set_activeOperation:(id)arg1;
- (void)set_handles:(id)arg1;
- (void)set_keepAliveTransaction:(id)arg1;
- (void)set_listener:(id)arg1;
- (void)set_longerLivedOperation:(id)arg1;
- (void)set_notesObserver:(id)arg1;
- (void)set_pendingOperations:(id)arg1;
- (void)set_serviceQueue:(id)arg1;
- (id)testingDelegate;

@end
