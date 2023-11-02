
@interface DSHardwareButtonEventMonitor : NSObject {
    bool  _allowEvents;
    NSMutableSet * _buttonEventHandlers;
    NSObject<OS_dispatch_queue> * _buttonEventQueue;
    struct __IOHIDEventSystemClient { } * _buttonHIDSystemClient;
    NSLock * _eventHandlerChangeLock;
    NSObject<OS_dispatch_queue> * _systemClientCreationQueue;
    NSObject<OS_dispatch_queue> * _targetQueue;
    DSTestAutomation * _testAutomation;
}

@property (nonatomic) bool allowEvents;
@property (nonatomic, retain) NSMutableSet *buttonEventHandlers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *buttonEventQueue;
@property (nonatomic, retain) NSLock *eventHandlerChangeLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *systemClientCreationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (nonatomic, retain) DSTestAutomation *testAutomation;

- (void).cxx_destruct;
- (id)_handlersForEvent:(unsigned long long)arg1;
- (id)_handlersForTarget:(id)arg1;
- (bool)_triggerHandlers:(id)arg1 event:(unsigned long long)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forButtonEvents:(unsigned long long)arg3 propagate:(bool)arg4;
- (bool)allowEvents;
- (id)buttonEventHandlers;
- (id)buttonEventQueue;
- (id)eventHandlerChangeLock;
- (bool)hasTarget:(id)arg1;
- (id)init;
- (void)removeTarget:(id)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forButtonEvents:(unsigned long long)arg3 propagate:(bool)arg4;
- (void)setAllowEvents:(bool)arg1;
- (void)setButtonEventHandlers:(id)arg1;
- (void)setButtonEventQueue:(id)arg1;
- (void)setEventHandlerChangeLock:(id)arg1;
- (void)setSystemClientCreationQueue:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)setTestAutomation:(id)arg1;
- (void)startWithPriority:(long long)arg1 completion:(id /* block */)arg2;
- (void)stopWithCompletion:(id /* block */)arg1;
- (id)systemClientCreationQueue;
- (id)targetQueue;
- (id)testAutomation;

@end