
@interface AAIdentityController : NSObject {
    AAIdentityDaemonConnection * _daemonConnection;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDaemonXPCEndpoint:(id)arg1;

@end
