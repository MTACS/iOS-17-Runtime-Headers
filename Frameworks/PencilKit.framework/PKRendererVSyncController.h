
@interface PKRendererVSyncController : NSObject {
    struct __IOMobileFramebuffer { } * _ioMobileFramebuffer;
    NSHashTable * _rendererControllers;
    NSObject<OS_dispatch_queue> * _runloopQueue;
    NSObject<OS_dispatch_queue> * _vSyncQueue;
}

- (void).cxx_destruct;
- (id)init;

@end
