
@protocol OSDeviceDelegate <NSObject>

@required

- (bool)activityStream:(OSActivityStream *)arg1 deviceUDID:(NSString *)arg2 deviceID:(OSLogDevice *)arg3 status:(long long)arg4 error:(NSError *)arg5;

@end
