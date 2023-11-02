
@interface CARActiveNavigationIdentifiersObserver : NSObject <BSInvalidatable, CRCarPlayNavigationOwnerClient> {
    NSArray * _activeNavigationIdentifiers;
    NSXPCConnection * _connection;
    CARObserverHashTable * _observers;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly, copy) NSArray *activeNavigationIdentifiers;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)_setupConnection;
- (id)activeNavigationIdentifiers;
- (void)activeNavigationIdentifiersChangedTo:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)connection;
- (id)init;
- (void)invalidate;
- (void)navigationOwnershipChangedTo:(unsigned long long)arg1;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
