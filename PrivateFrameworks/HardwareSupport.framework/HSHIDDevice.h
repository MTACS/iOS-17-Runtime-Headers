
@interface HSHIDDevice : NSObject <HSIOHIDDeviceInterface> {
    bool  _active;
    bool  _cancelled;
    struct __IOHIDDevice { } * _deviceRef;
    id /* block */  _deviceRemovedCallback;
    id /* block */  _inputReportCallback;
    unsigned char  _reportCallbackBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct __IOHIDDevice { }*deviceRef;
@property (nonatomic, copy) id /* block */ deviceRemovedCallback;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ inputReportCallback;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_setReportWithID:(long long)arg1 type:(int)arg2 data:(id)arg3 error:(id*)arg4;
- (bool)close:(id*)arg1;
- (void)dealloc;
- (struct __IOHIDDevice { }*)deviceRef;
- (id /* block */)deviceRemovedCallback;
- (id)featureReportWithID:(long long)arg1 error:(id*)arg2;
- (id)initWithDeviceRef:(struct __IOHIDDevice { }*)arg1;
- (id)initWithService:(unsigned int)arg1;
- (id /* block */)inputReportCallback;
- (bool)open:(id*)arg1;
- (void)scheduleWithRunLoop:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;
- (void)setDeviceRef:(struct __IOHIDDevice { }*)arg1;
- (void)setDeviceRemovedCallback:(id /* block */)arg1;
- (bool)setFeatureReportWithID:(long long)arg1 data:(id)arg2 error:(id*)arg3;
- (void)setInputReportCallback:(id /* block */)arg1;
- (bool)setOutputReportWithID:(long long)arg1 data:(id)arg2 error:(id*)arg3;
- (bool)setValue:(id)arg1 forProperty:(struct __CFString { }*)arg2;
- (void)unscheduleFromRunLoop:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;
- (id)valueForProperty:(struct __CFString { }*)arg1;

@end
