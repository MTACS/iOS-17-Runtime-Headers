
@protocol IMDaemonMultiplexedConnectionManaging <NSObject>

@required

- (void)connectWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)invalidate;
- (<IMDaemonProtocol> *)remoteProxy;
- (<IMDaemonProtocol> *)synchronousRemoteProxy;
- (void)waitForSetup;

@end
