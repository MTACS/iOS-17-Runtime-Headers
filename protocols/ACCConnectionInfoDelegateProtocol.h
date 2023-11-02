
@protocol ACCConnectionInfoDelegateProtocol <NSObject>

@optional

- (void)accessoryConnectionAttached:(NSString *)arg1 type:(int)arg2;
- (void)accessoryConnectionAttached:(NSString *)arg1 type:(int)arg2 info:(NSDictionary *)arg3 properties:(NSDictionary *)arg4;
- (void)accessoryConnectionDetached:(NSString *)arg1;
- (void)accessoryConnectionInfoPropertyChanged:(NSString *)arg1;
- (void)accessoryConnectionInfoPropertyChanged:(NSString *)arg1 properties:(NSDictionary *)arg2;
- (void)accessoryEndpointAttached:(NSString *)arg1 transportType:(int)arg2 protocol:(int)arg3 forConnection:(NSString *)arg4;
- (void)accessoryEndpointAttached:(NSString *)arg1 transportType:(int)arg2 protocol:(int)arg3 properties:(NSDictionary *)arg4 forConnection:(NSString *)arg5;
- (void)accessoryEndpointDetached:(NSString *)arg1 forConnection:(NSString *)arg2;
- (void)accessoryEndpointInfoPropertyChanged:(NSString *)arg1 forConnection:(NSString *)arg2;
- (void)accessoryEndpointInfoPropertyChanged:(NSString *)arg1 properties:(NSDictionary *)arg2 forConnection:(NSString *)arg3;
- (void)accessoryEndpointUpdate:(NSString *)arg1 protocol:(int)arg2 forConnection:(NSString *)arg3;
- (void)accessoryEndpointUpdate:(NSString *)arg1 protocol:(int)arg2 properties:(NSDictionary *)arg3 forConnection:(NSString *)arg4;

@end
