
@protocol IPXPCClientDelegate <NSObject>

@required

- (NSArray *)activeInstallationsForClient:(IPXPCClient *)arg1;
- (NSArray *)allInstallableStatesForClient:(IPXPCClient *)arg1;
- (IPInstallableProgressData *)progressForIdentity:(LSApplicationIdentity *)arg1 forClient:(IPXPCClient *)arg2 error:(id*)arg3;

@end
