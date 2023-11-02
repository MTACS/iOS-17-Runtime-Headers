
@interface BKHIDGenericGestureEventProcessor : NSObject <BKHIDEventProcessor, BKIOHIDServiceDisappearanceObserver> {
    <BKHIDEventDispatcher> * _eventDispatcher;
    NSMutableDictionary * _genericGestureTypePerSenderID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _pendingDestinationsPerSenderID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BKHIDEventDispatcher> *eventDispatcher;
@property (nonatomic, retain) NSMutableDictionary *genericGestureTypePerSenderID;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *pendingDestinationsPerSenderID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_postEvent:(struct __IOHIDEvent { }*)arg1 toDestination:(id)arg2 usingDispatcher:(id)arg3;
- (id)eventDispatcher;
- (id)genericGestureTypePerSenderID;
- (id)pendingDestinationsPerSenderID;
- (long long)processEvent:(inout struct __IOHIDEvent {}**)arg1 sender:(id)arg2 dispatcher:(id)arg3;
- (void)serviceDidDisappear:(id)arg1;
- (void)setEventDispatcher:(id)arg1;
- (void)setGenericGestureTypePerSenderID:(id)arg1;
- (void)setPendingDestinationsPerSenderID:(id)arg1;

@end
