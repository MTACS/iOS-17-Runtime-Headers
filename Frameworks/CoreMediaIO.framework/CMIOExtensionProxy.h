
@interface CMIOExtensionProxy : NSObject <CMIOExtensionProxyContextDelegate> {
    int  _activeStreams;
    NSMutableArray * _contexts;
    <CMIOExtensionProxyDelegate> * _delegate;
    NSObject<OS_xpc_object> * _endpoint;
    int  _extensionPID;
    bool  _invalidated;
    NSObject<OS_xpc_object> * _listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_xpc_object> * _proxyEndpoint;
    NSObject<OS_dispatch_queue> * _updateStreamStateQueue;
    NSObject<OS_dispatch_source> * _updateStreamStateTimer;
    bool  _updateStreamStateTimerActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<OS_xpc_object> *endpoint;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) NSObject<OS_xpc_object> *proxyEndpoint;
@property (readonly) Class superclass;

+ (id)proxyWithEndpoint:(id)arg1 extensionPID:(int)arg2 delegate:(id)arg3;

- (void)addConnection:(id)arg1;
- (void)dealloc;
- (id)endpoint;
- (id)initWithEndpoint:(id)arg1 extensionPID:(int)arg2 delegate:(id)arg3;
- (void)invalidate;
- (bool)isInvalidated;
- (void)proxyContextHasBeenInvalidated:(id)arg1;
- (id)proxyEndpoint;
- (void)proxyStreamHasStarted;
- (void)proxyStreamsHaveStopped:(int)arg1;

@end
