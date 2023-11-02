
@protocol HPSAccessorySettingServiceConnectionProvider <NSObject>

@required

- (NSXPCConnection *)accessorySettingServiceConnection;

@end
