
@interface LSDatabaseBlockingFetchServer : NSObject {
    _Atomic bool  _forManualRebuild;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _running;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)getEndpoint;
- (bool)isForManualRebuild;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setBlockingIsForManualRebuild:(bool)arg1;
- (void)startRunningIfNecessary;

@end
