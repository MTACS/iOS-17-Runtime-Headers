
@protocol MTSDeviceSetupExtensionProcess <NSObject>

@required

- (void)invalidate;
- (<MTSXPCConnection> *)makeMTSXPCConnectionWithError:(id*)arg1;

@end
