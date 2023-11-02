
@interface AXDeviceMonitor : NSObject {
    <AXDeviceMonitorDelegate> * _delegate;
    NSMutableSet * _devices;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _devicesLock;
    struct __IOHIDManager { } * _hidManager;
    unsigned long long  _state;
    NSRunLoop * _targetRunLoop;
}

@property (nonatomic) <AXDeviceMonitorDelegate> *delegate;

+ (id)bluetoothKeyboardDevices;

- (void).cxx_destruct;
- (void)_commonInitWithRunLoop:(id)arg1;
- (id)_existingDevicesForDevice:(struct __IOHIDDevice { }*)arg1;
- (void)begin;
- (id)copyDevices;
- (void)dealloc;
- (id)delegate;
- (void)didAddDevice:(struct __IOHIDDevice { }*)arg1;
- (void)didRemoveDevice:(struct __IOHIDDevice { }*)arg1;
- (void)informDelegate;
- (id)initWithMatchingDictionary:(id)arg1 callbackRunLoop:(id)arg2;
- (id)initWithMatchingMultiple:(id)arg1 callbackRunLoop:(id)arg2;
- (void)invalidate;
- (void)setDelegate:(id)arg1;

@end
