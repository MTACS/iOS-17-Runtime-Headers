
@interface BSXPCConnectionListenerManager : NSObject {
    NSObject<OS_dispatch_queue> * _defaultHandlerQueue;
    NSObject<OS_dispatch_queue> * _listeningQueue;
    NSMutableDictionary * _services;
    NSLock * _servicesLock;
}

+ (id)defaultHandlerQueue;
+ (void)listenForService:(id)arg1 onQueue:(id)arg2 withHandler:(id)arg3;
+ (void)stopListeningForService:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
