
@interface RBRequestManager : NSObject <RBRequestManaging> {
    <RBDaemonContextProviding> * _daemonContext;
}

- (void).cxx_destruct;
- (void)executeLaunchRequest:(id)arg1 euid:(unsigned int)arg2 requestor:(id)arg3 entitlements:(id)arg4 completion:(id /* block */)arg5;
- (id)initWithContext:(id)arg1;

@end
