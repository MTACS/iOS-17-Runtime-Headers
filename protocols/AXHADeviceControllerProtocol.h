
@protocol AXHADeviceControllerProtocol <NSObject>

@required

- (void)device:(id <AXHADeviceProtocol>)arg1 didUpdateProperty:(unsigned long long)arg2;
- (void)registerForPropertyUpdates:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)stopPropertyUpdates;
- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(NSString *)arg2;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 andDeviceID:(NSString *)arg3;

@end
