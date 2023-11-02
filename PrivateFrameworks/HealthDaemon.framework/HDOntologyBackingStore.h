
@interface HDOntologyBackingStore : NSObject <HDAssertionObserver, HDContentProtectionObserver, HDDatabaseConnectionPoolDelegate, HDHealthDaemonReadyObserver, HDProtectedResourceStore, HDProtectedResourceStoreProvider> {
    NSConditionLock * _activeDatabaseConnectionLock;
    NSMutableSet * _activeDatabaseConnections;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _availabilityLock;
    bool  _available;
    HDDaemon * _daemon;
    HDDatabaseConnectionPool * _databaseConnectionPool;
    _Atomic bool  _invalidated;
    long long  _observedContentProtectionState;
    HKObserverSet * _observers;
    NSURL * _ontologyURL;
    HDAssertionManager * _protectedResourceAssertionManager;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _threadLocalTransactionKey;
}

@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (nonatomic, readonly) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *protectedResourceIdentifier;
@property (readonly) Class superclass;

+ (id)unitTesting_ontologyBackingStoreForDaemon:(id)arg1 baseURL:(id)arg2;
+ (id)unitTesting_ontologyURLWithBaseURL:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithDaemon:(id)arg1 baseURL:(id)arg2;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)checkInProtectedResource:(id)arg1;
- (id)checkOutProtectedResourceWithAssertion:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (void)close;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (id)daemon;
- (void)daemonReady:(id)arg1;
- (void)databasePool:(id)arg1 didFlushConnections:(id)arg2;
- (id)init;
- (id)initWithDaemon:(id)arg1;
- (void)invalidate;
- (bool)isAvailable;
- (id)newConnectionForPool:(id)arg1 error:(id*)arg2;
- (void)obliterateWithReason:(id)arg1;
- (bool)obliterateWithReason:(id)arg1 error:(id*)arg2;
- (bool)performOntologyTransactionForWrite:(bool)arg1 profile:(id)arg2 databaseTransaction:(id)arg3 error:(id*)arg4 transactionHandler:(id /* block */)arg5;
- (id)protectedResourceIdentifier;
- (id)protectedResourceStoreForProfile:(id)arg1;
- (void)registerOntologyDatabase:(id)arg1;
- (id)requestProtectedResourceAccessAssertionForOwnerIdentifier:(id)arg1 error:(id*)arg2;
- (id)sizeOfUnderlyingDatabaseInBytes;

@end
