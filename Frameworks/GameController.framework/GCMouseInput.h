
@interface GCMouseInput : GCPhysicalInputProfile <_GCDevicePhysicalInputDataSource> {
    NSMutableArray * _auxiliaryButtons;
    long long  _buttons;
    GCController * _controller;
    NSMutableArray * _eventBuffer;
    unsigned long long  _eventBufferDepth;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _eventBufferLock;
    _Atomic bool  _isActive;
    GCControllerButtonInput * _leftButton;
    _GCDevicePhysicalInput * _liveInput;
    GCControllerButtonInput * _middleButton;
    id /* block */  _mouseButtonPressedPrivate;
    id /* block */  _mouseMovedHandler;
    id /* block */  _mouseMovedHandlerPrivate;
    NSObject<OS_dispatch_queue> * _physicalInputQueue;
    GCControllerButtonInput * _rightButton;
    GCDeviceCursor * _scroll;
    _Atomic bool  _wasInitialized;
    UIWindow * _window;
}

@property (nonatomic, readonly) NSArray *auxiliaryButtons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GCControllerButtonInput *leftButton;
@property (nonatomic, readonly) GCControllerButtonInput *middleButton;
@property (nonatomic, copy) id /* block */ mouseMovedHandler;
@property (nonatomic, readonly) GCControllerButtonInput *rightButton;
@property (nonatomic, readonly) GCDeviceCursor *scroll;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_drainBufferedEvents:(id)arg1 latestOnly:(bool)arg2;
- (void)_handleButtonEventType:(unsigned long long)arg1 buttonMask:(unsigned long long)arg2;
- (void)_handleDigitizerEvent:(struct CGPoint { double x1; double x2; })arg1;
- (void)_handleEventImpl:(struct __IOHIDEvent { }*)arg1;
- (bool)_handleEventRec:(struct __IOHIDEvent { }*)arg1;
- (void)_legacy_handleEvent:(struct __IOHIDEvent { }*)arg1;
- (long long)_mouseButtons;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (id)auxiliaryButtons;
- (id)controller;
- (void)handleMouseButtonEventAddingButtonMask:(unsigned long long)arg1;
- (void)handleMouseButtonEventRemovingButtonMask:(unsigned long long)arg1;
- (void)handleMouseButtonEventSettingButtonMask:(unsigned long long)arg1;
- (void)handleMouseMovementEventWithDelta:(struct CGPoint { double x1; double x2; })arg1;
- (void)handleScrollEventWithDelta:(struct CGPoint { double x1; double x2; })arg1;
- (id)handlerQueue;
- (id)initWithController:(id)arg1;
- (id)leftButton;
- (id)middleButton;
- (id /* block */)mouseButtonPressedPrivate;
- (id /* block */)mouseMovedHandler;
- (id /* block */)mouseMovedHandlerPrivate;
- (id)name;
- (void)physicalInput:(id)arg1 setQueue:(id)arg2;
- (void)physicalInputPoll:(id)arg1 forLatest:(bool)arg2;
- (id)physicalInputQueue:(id)arg1;
- (void)physicalInputTransactionQueueDepthDidChange:(id)arg1;
- (id)physicalInputWithAttributes:(id)arg1;
- (id)productCategory;
- (id)rightButton;
- (id)scroll;
- (void)setController:(id)arg1;
- (void)setMouseButtonPressedPrivate:(id /* block */)arg1;
- (void)setMouseMovedHandler:(id /* block */)arg1;
- (void)setMouseMovedHandlerPrivate:(id /* block */)arg1;
- (bool)shouldAcceptMouseEvents;

@end
