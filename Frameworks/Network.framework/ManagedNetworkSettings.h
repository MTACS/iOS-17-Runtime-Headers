
@interface ManagedNetworkSettings : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedMNS;

- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (id)init;
- (id)queue;
- (void)reloadMNS;
- (void)reloadNetworkdSettings;
- (void)setQueue:(id)arg1;

@end
