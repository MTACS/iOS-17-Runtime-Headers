
@interface _NACAVRoutingDiscoverySession : NSObject {
    void * _callbackToken;
    void * _discoverySession;
    bool  _initialFetchCompleted;
    NSObject<OS_dispatch_group> * _initialFetchGroup;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchRouteForOriginIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
