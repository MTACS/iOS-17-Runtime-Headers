
@protocol AVOutputDeviceFrecentsWriting <NSObject>

@required

- (long long)numberOfKeysToBeSet;
- (bool)persistToDiskReturningError:(id*)arg1;
- (void)removeFrecencyInfoForDeviceID:(NSString *)arg1;
- (void)setFrecencyInfo:(NSDictionary *)arg1 forDeviceID:(NSString *)arg2;

@end
