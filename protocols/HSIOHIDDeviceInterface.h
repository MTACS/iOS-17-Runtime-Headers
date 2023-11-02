
@protocol HSIOHIDDeviceInterface <NSObject>

@required

- (bool)close:(id*)arg1;
- (NSData *)featureReportWithID:(long long)arg1 error:(id*)arg2;
- (bool)open:(id*)arg1;
- (void)scheduleWithRunLoop:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;
- (void)setDeviceRemovedCallback:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)setFeatureReportWithID:(long long)arg1 data:(NSData *)arg2 error:(id*)arg3;
- (void)setInputReportCallback:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSData *, NSError *, void*
- (bool)setOutputReportWithID:(long long)arg1 data:(NSData *)arg2 error:(id*)arg3;
- (bool)setValue:(id)arg1 forProperty:(struct __CFString { }*)arg2;
- (void)unscheduleFromRunLoop:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;
- (id)valueForProperty:(struct __CFString { }*)arg1;

@end
