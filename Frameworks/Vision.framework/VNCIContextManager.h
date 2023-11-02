
@interface VNCIContextManager : NSObject {
    VNCIContextsHandler * _cpuContextsHandler;
    NSMutableDictionary * _gpuContextsHandlers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _gpuHandlersLock;
    unsigned long long  _maxContextsCount;
}

- (void).cxx_destruct;
- (id)init;

@end
