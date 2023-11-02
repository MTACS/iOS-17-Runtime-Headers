
@interface VNCanceller : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _signalled;
    id /* block */  _signallingBlock;
}

- (void).cxx_destruct;
- (void)_releaseSignallingBlock;
- (id)init;
- (void)reset;
- (void)signalCancellation;
- (bool)tryToPerformBlock:(id /* block */)arg1 usingSignallingBlock:(id /* block */)arg2;
- (bool)wasSignalled;

@end
