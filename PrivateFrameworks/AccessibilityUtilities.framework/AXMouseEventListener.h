
@interface AXMouseEventListener : NSObject <AXDeviceMonitorDelegate> {
    NSSet * _cachedMouseDevices;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachedMouseDevicesLock;
    AXDeviceMonitor * _deviceMonitor;
    AXEventProcessor * _eventProcessor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observerLock;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) bool currentDevicesHaveAssistiveTouchCustomActions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_mouseMatching;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_finishHandlingMouseButtonEvent:(id)arg1 buttonMask:(double)arg2 creatorHIDServiceClient:(struct __IOHIDServiceClient { }*)arg3;
- (bool)_handleMouseButtonEvent:(id)arg1;
- (id)_init;
- (void)addObserver:(id)arg1;
- (void)beginFilteringButtonEvents;
- (bool)currentDevicesHaveAssistiveTouchCustomActions;
- (void)dealloc;
- (void)deviceMonitorDidDetectDeviceEvent:(id)arg1;
- (id)discoveredMouseDevices;
- (void)endFilteringButtonEvents;
- (void)mouseSettingsDidChange;
- (void)removeObserver:(id)arg1;

@end
