
@protocol UVBSServerConnection <NSObject>

@required

- (int)clientPid;
- (id)initWithServiceConnection:(BSServiceConnection<BSServiceConnectionHost> *)arg1 context:(id <BSXPCDecoding>)arg2;

@end
