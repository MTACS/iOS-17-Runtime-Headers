
@interface VNCIContextsHandler : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _contextsLock;
    NSMutableArray * _freeContexts;
    NSMutableSet * _inUseContexts;
    <MTLDevice> * _metalDevice;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

- (void).cxx_destruct;

@end
