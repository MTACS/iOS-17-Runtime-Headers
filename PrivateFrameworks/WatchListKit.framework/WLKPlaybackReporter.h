
@interface WLKPlaybackReporter : NSObject {
    NSXPCConnection * _xpcConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _xpcLock;
}

- (void).cxx_destruct;
- (id)_connection;
- (void)_invalidationHandler;
- (void)endPlaybackSession:(id)arg1;
- (id)init;
- (void)reportPlayback:(id)arg1 sessionID:(id)arg2 completion:(id /* block */)arg3;
- (void)reportPlayback:(id)arg1 withCompletion:(id /* block */)arg2;

@end
