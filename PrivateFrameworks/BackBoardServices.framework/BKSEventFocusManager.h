
@interface BKSEventFocusManager : NSObject <BKSHIDEventDeferringObserving> {
    NSSet * _cachedFocusedDeferralProperties;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSString * _clientIdentifier;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _focusClientQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _focusDataLock;
    NSMutableArray * _focusDataLock_assertions;
    NSMutableSet * _focusDataLock_currentState;
    BKSHIDEventDeliveryManager * _focusDataLock_manager;
    NSMutableDictionary * _focusDataLock_pendingStatesByPriority;
    NSMapTable * _infoPerFocusChangeObserver;
    bool  _needsFlush;
    BKSHIDEventObserver * _observer;
    <BSInvalidatable> * _observingAssertion;
    int  _pid;
    unsigned long long  _propertyUpdateGeneration;
    <BSInvalidatable> * _queue_keyCommandRulesAssertion;
}

@property (nonatomic, retain) NSSet *cachedFocusedDeferralProperties;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *infoPerFocusChangeObserver;
@property (nonatomic) bool needsFlush;
@property (nonatomic, readonly) int pid;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_focusClientQueue_deferringResolutionsChanged;
- (void)_focusDataLock_reallyFlushWithSet:(id)arg1;
- (void)_focusDataLock_rebuildPendingStatesByPriority;
- (id)_initWithManager:(id)arg1 observer:(id)arg2 pid:(int)arg3 clientIdentifier:(id)arg4;
- (void)_pruneSet:(id)arg1 ofDeferralsPassingTest:(id /* block */)arg2;
- (id)_queryDeferralResolutions;
- (void)_syncObserverState;
- (void)addObserver:(id)arg1;
- (id)cachedFocusedDeferralProperties;
- (id)clientIdentifier;
- (id)connection;
- (void)dealloc;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 withPriority:(int)arg3;
- (void)deferringResolutionsChanged;
- (id)description;
- (void)flush;
- (id)infoPerFocusChangeObserver;
- (id)init;
- (bool)needsFlush;
- (int)pid;
- (void)removeObserver:(id)arg1;
- (void)setCachedFocusedDeferralProperties:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2;
- (void)setInfoPerFocusChangeObserver:(id)arg1;
- (void)setNeedsFlush:(bool)arg1;
- (void)setSystemAppControlsFocusOnMainDisplay:(bool)arg1;

@end
