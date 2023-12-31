
@interface TSBonjourBrowser : NSObject {
    <TSBonjourBrowserDelegate> * _delegate;
    NSArray * _nodes;
    NSObject<OS_dispatch_queue> * _queue;
    struct _DNSServiceRef_t { } * _sdRef;
}

@property (nonatomic) <TSBonjourBrowserDelegate> *delegate;
@property (nonatomic, copy) NSArray *nodes;

- (void).cxx_destruct;
- (void)addedServiceWithName:(const char *)arg1 regType:(const char *)arg2 domain:(const char *)arg3 onInterface:(unsigned int)arg4 withFlags:(unsigned int)arg5;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)nodes;
- (void)removedServiceWithName:(const char *)arg1 regType:(const char *)arg2 domain:(const char *)arg3 onInterface:(unsigned int)arg4 withFlags:(unsigned int)arg5;
- (void)setDelegate:(id)arg1;
- (void)setNodes:(id)arg1;
- (bool)startBrowsingWithError:(id*)arg1;
- (bool)stopBrowsing;

@end
