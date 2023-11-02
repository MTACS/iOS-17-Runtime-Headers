
@interface PETEventTracker2 : NSObject <RBSAssertionObserving> {
    PETAggregateState * _aggregateState;
    PETConfig * _config;
    bool  _inited;
    bool  _isAsyncEnabled;
    bool  _isProcessManagedByRBS;
    NSString * _logStoresDir;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _loggingQueueLock;
    int  _loggingQueueSize;
    RBSAssertion * _rbsAssertion;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _rbsAssertionLock;
    bool  _rbsShouldInvalidate;
    RBSTarget * _rbsTarget;
    NSString * _rootDir;
    NSMutableDictionary * _storeCache;
}

@property (nonatomic, readonly) PETAggregateState *aggregateState;
@property (retain) PETConfig *config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isAsyncEnabled;
@property (retain) NSString *logStoresDir;
@property (retain) NSString *rootDir;
@property (retain) NSMutableDictionary *storeCache;
@property (readonly) Class superclass;

+ (id)_writeMessage:(id)arg1 objCClassName:(id)arg2;
+ (id)defaultRootDir;
+ (id)formattedTextForAggregatedMessage:(id)arg1;
+ (id)formattedTextForUnaggregatedMessage:(id)arg1 messageGroup:(id)arg2 config:(id)arg3;
+ (double)roundToSigFigs:(double)arg1 sigFigs:(unsigned long long)arg2;
+ (id)sharedInstance;
+ (unsigned int)typeIdForMessageName:(id)arg1;

- (void).cxx_destruct;
- (void)_dispatchAsyncForLogging:(id /* block */)arg1 txnName:(const char *)arg2;
- (id)_getLogStore:(id)arg1;
- (void)_init;
- (void)_initWithRootDir:(id)arg1 config:(id)arg2;
- (void)_logMessage:(id)arg1 subGroup:(id)arg2;
- (void)_logMessageData:(id)arg1 objcClassName:(id)arg2 subGroup:(id)arg3;
- (double)_roundToSigFigs:(double)arg1 forRawMessage:(id)arg2;
- (void)_runBlockWithRBSAssertion:(id /* block */)arg1;
- (void)_trackDistributionForMessage:(id)arg1 value:(double)arg2;
- (void)_trackScalarForMessage:(id)arg1 count:(int)arg2 overwrite:(bool)arg3;
- (id)aggregateState;
- (void)assertion:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)assertionWillInvalidate:(id)arg1;
- (void)clearLogStores;
- (id)config;
- (void)enumerateAggregatedMessagesWithBlock:(id /* block */)arg1 clearStore:(bool)arg2;
- (void)enumerateMessageGroups:(id /* block */)arg1;
- (void)enumerateMessagesWithBlock:(id /* block */)arg1 clearStore:(bool)arg2;
- (void)enumerateMessagesWithBlock:(id /* block */)arg1 messageGroup:(id)arg2 clearStore:(bool)arg3;
- (id)initForTestingWithRootDir:(id)arg1;
- (id)initWithAsyncEnabled:(bool)arg1;
- (id)initWithRootDir:(id)arg1 config:(id)arg2;
- (bool)isAsyncEnabled;
- (void)logMessage:(id)arg1;
- (void)logMessage:(id)arg1 subGroup:(id)arg2;
- (void)logMessageData:(id)arg1 objcClassName:(id)arg2 subGroup:(id)arg3;
- (id)logStoresDir;
- (id)rootDir;
- (void)setConfig:(id)arg1;
- (void)setIsAsyncEnabled:(bool)arg1;
- (void)setLogStoresDir:(id)arg1;
- (void)setRootDir:(id)arg1;
- (void)setStoreCache:(id)arg1;
- (id)storeCache;
- (void)trackDistributionForMessage:(id)arg1 value:(double)arg2;
- (void)trackScalarForMessage:(id)arg1;
- (void)trackScalarForMessage:(id)arg1 count:(int)arg2;
- (void)trackScalarForMessage:(id)arg1 updateCount:(int)arg2;

@end
