
@interface BSXPCServiceConnectionRootClientEndpointContext : BSXPCServiceConnectionRootContext {
    NSObject<OS_xpc_object> * _endpoint;
    bool  _nonLaunching;
    NSUUID * _oneshot;
}

- (void).cxx_destruct;
- (bool)isClient;
- (bool)isNonLaunching;

@end
