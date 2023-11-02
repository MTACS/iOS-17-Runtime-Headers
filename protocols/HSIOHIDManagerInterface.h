
@protocol HSIOHIDManagerInterface

@required

- (bool)close:(id*)arg1;
- (NSSet<HSIOHIDDeviceInterface> *)devices;
- (void)enumerateDevicesMatching:(NSArray *)arg1;
- (bool)open:(id*)arg1;
- (void)scheduleWithRunLoop:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;
- (void)setDeviceEnumeratedCallback:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <HSIOHIDDeviceInterface> *, NSError *, void*
- (void)setDeviceRemovedCallback:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <HSIOHIDDeviceInterface> *, NSError *, void*
- (bool)setValue:(id)arg1 forProperty:(struct __CFString { }*)arg2;
- (void)unscheduleFromRunLoop:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;
- (id)valueForProperty:(struct __CFString { }*)arg1;

@end
