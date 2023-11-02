
@interface NRMockXPCProxy : NSProxy {
    bool  _async;
    NSObject<OS_dispatch_queue> * _queue;
    id  _target;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
