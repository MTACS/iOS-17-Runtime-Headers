
@interface HSHIDManager : NSObject <HSIOHIDManagerInterface> {
    bool  _active;
    bool  _cancelled;
    id /* block */  _deviceEnumeratedCallback;
    id /* block */  _deviceRemovedCallback;
    struct __IOHIDManager { } * _managerRef;
}

@property (nonatomic, copy) id /* block */ deviceEnumeratedCallback;
@property (nonatomic, copy) id /* block */ deviceRemovedCallback;

- (void).cxx_destruct;
- (bool)close:(id*)arg1;
- (void)dealloc;
- (id /* block */)deviceEnumeratedCallback;
- (id /* block */)deviceRemovedCallback;
- (id)devices;
- (void)enumerateDevicesMatching:(id)arg1;
- (id)init;
- (id)initWithManagerRef:(struct __IOHIDManager { }*)arg1;
- (bool)open:(id*)arg1;
- (void)scheduleWithRunLoop:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;
- (void)setDeviceEnumeratedCallback:(id /* block */)arg1;
- (void)setDeviceRemovedCallback:(id /* block */)arg1;
- (bool)setValue:(id)arg1 forProperty:(struct __CFString { }*)arg2;
- (void)unscheduleFromRunLoop:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;
- (id)valueForProperty:(struct __CFString { }*)arg1;

@end
