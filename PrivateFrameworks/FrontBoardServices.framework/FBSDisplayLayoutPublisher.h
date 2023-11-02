
@interface FBSDisplayLayoutPublisher : NSObject <BSInvalidatable, BSServiceConnectionListenerDelegate, FBSDisplayLayoutPublishing> {
    FBSDisplayLayout * _currentLayout;
    bool  _dirty;
    BSAtomicSignal * _invalidatedSignal;
    BSServiceConnectionListener * _listener;
    NSMutableSet * _mutableElementKeys;
    FBSDisplayLayout * _mutableLayout;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queuesByQOS;
    NSMutableSet * _queues_connectionsByQOS;
    NSObject<OS_xpc_object> * _queues_xLayoutByQOS;
    NSMutableOrderedSet * _transitionReasons;
    unsigned long long  _transitionsCount;
    NSObject<OS_xpc_object> * _xLayout;
}

@property (nonatomic) long long backlightLevel;
@property (nonatomic, readonly) FBSDisplayLayout *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) FBSDisplayConfiguration *displayConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interfaceOrientation;
@property (readonly) Class superclass;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;

+ (id)publisherWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (id)_addElement:(id)arg1 forKey:(id)arg2;
- (id)_initWithConfiguration:(id)arg1;
- (void)activate;
- (id)addElement:(id)arg1;
- (void)addObserver:(id)arg1;
- (long long)backlightLevel;
- (id)currentLayout;
- (id)displayConfiguration;
- (void)flush;
- (id)init;
- (long long)interfaceOrientation;
- (void)invalidate;
- (bool)isTransitioning;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)setBacklightLevel:(long long)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (id)transitionAssertionWithReason:(id)arg1;

@end
