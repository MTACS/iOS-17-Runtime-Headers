
@protocol CSXPCClientDelegate <NSObject>

@required

- (void)CSXPCClient:(CSXPCClient *)arg1 didDisconnect:(bool)arg2;

@end
