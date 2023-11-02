
@interface HDHAHealthAppPluginHostConnection : NSObject {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _resumed;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)proxy;
- (void)resumeIfNecessary;
- (id)synchronousProxy;

@end
