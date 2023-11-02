
@interface PKShareAuthorizationSession : NSObject {
    LAContext * _context;
}

- (void).cxx_destruct;
- (void)authorizeDeviceOwnerWithAuthHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidate;

@end
