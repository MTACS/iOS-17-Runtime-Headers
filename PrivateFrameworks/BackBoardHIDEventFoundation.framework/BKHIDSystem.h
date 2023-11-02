
@interface BKHIDSystem : NSObject <BKHIDEventBufferingHIDSystem, BKHIDEventProcessor, BKHIDSystemInterfacing> {
    struct __IOHIDEventSystem { } * _HIDEventSystem;
    struct __IOHIDEventSystemClient { } * _HIDEventSystemClient;
    NSObject<OS_dispatch_mach> * _HIDSystemChannel;
    <BKHIDSystemDelegate> * _delegate;
    BKHIDEventDeliveryManager * _deliveryManager;
    <BKHIDEventDispatcherProviding> * _dispatcherProvider;
    <BKHIDEventProcessor><BKHIDBufferedEventProcessor> * _eventProcessor;
    bool  _fullyInitialized;
    NSObject<OS_dispatch_queue> * _gsEventQueue;
    <BKHIDDisplayChangeObserving> * _mainDisplayObserver;
    BKHIDEventSenderCache * _senderCache;
}

@property (getter=HIDSystemChannel, retain) NSObject<OS_dispatch_mach> *HIDSystemChannel;
@property (readonly) BKHIDClientConnectionManager *clientConnectionManager;
@property (readonly, copy) NSString *debugDescription;
@property <BKHIDSystemDelegate> *delegate;
@property (readonly) BKHIDEventDeliveryManager *deliveryManager;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BKHIDEventDispatcherProviding> *dispatcherProvider;
@property (nonatomic, readonly) <BKHIDEventProcessor><BKHIDBufferedEventProcessor> *eventProcessor;
@property (getter=isFullyInitialized) bool fullyInitialized;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <BKHIDDisplayChangeObserving> *mainDisplayObserver;
@property (readonly) BKHIDEventSenderCache *senderCache;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)HIDSystemChannel;
- (id)IOHIDServicesMatching:(id)arg1;
- (void)_asyncScheduleWithHIDEventQuue:(id /* block */)arg1;
- (void)_beginHandlingEvents;
- (void)buffer:(id)arg1 drainEvent:(struct __IOHIDEvent { }*)arg2 withContext:(id)arg3 sender:(id)arg4 sequence:(id)arg5 toResolution:(id)arg6;
- (void)bufferDidFinishDraining:(id)arg1;
- (void)bufferWillBeginDraining:(id)arg1;
- (void)bufferingDidAddNewBuffers:(id)arg1;
- (id)clientConnectionManager;
- (void)dealloc;
- (id)delegate;
- (id)deliveryManager;
- (id)dispatcherProvider;
- (id)eventProcessor;
- (id)init;
- (void)injectGSEvent:(struct __GSEvent { }*)arg1;
- (void)injectHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (bool)isFullyInitialized;
- (id)mainDisplayObserver;
- (long long)processEvent:(inout struct __IOHIDEvent {}**)arg1 sender:(id)arg2 dispatcher:(id)arg3;
- (void)registerIOHIDServicesCallback:(int (*)arg1 matchingDictionary:(id)arg2 target:(void*)arg3 refCon:(void*)arg4;
- (void)requestBufferReevaluationWithContext:(id)arg1;
- (id)senderCache;
- (void)setDelegate:(id)arg1;
- (void)setDispatcherProvider:(id)arg1;
- (void)setFullyInitialized:(bool)arg1;
- (void)setHIDSystemChannel:(id)arg1;
- (void)setMainDisplayObserver:(id)arg1;
- (void)setSystemProperty:(id)arg1 forKey:(id)arg2;
- (void)startEventProcessor:(id)arg1 mainDisplayObserver:(id)arg2 deliveryManager:(id)arg3 dispatcherProvider:(id)arg4;
- (void)startEventRouting;
- (void)startHIDSystem;
- (void)startServerWithChannel:(id)arg1;
- (struct __IOHIDEvent { }*)systemEventOfType:(unsigned int)arg1 matchingEvent:(struct __IOHIDEvent { }*)arg2 options:(unsigned int)arg3;
- (id)systemPropertyForKey:(id)arg1;
- (void)unregisterIOHIDServicesCallback:(int (*)arg1 matchingDictionary:(id)arg2 target:(void*)arg3 refCon:(void*)arg4;

@end
