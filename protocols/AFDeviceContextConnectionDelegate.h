
@protocol AFDeviceContextConnectionDelegate <NSObject>

@required

- (void)deviceContextConnectionDidInvalidate:(AFDeviceContextConnection *)arg1;

@optional

- (void)deviceContextConnection:(AFDeviceContextConnection *)arg1 didUpdateLocalDeviceContext:(AFDeviceContext *)arg2;

@end
