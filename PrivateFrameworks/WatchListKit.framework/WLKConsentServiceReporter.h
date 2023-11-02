
@interface WLKConsentServiceReporter : NSObject {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _xpcLock;
}

- (void).cxx_destruct;
- (id)_connection;
- (void)_invalidationHandler;
- (id)init;

@end
