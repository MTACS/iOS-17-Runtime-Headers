
@interface VCPMABaseTask : NSObject <VCPMADTaskProtocol> {
    id /* block */  _cancelBlock;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _canceled;
    id /* block */  _completionHandler;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _started;
}

@property (nonatomic, copy) id /* block */ cancelBlock;
@property (nonatomic, readonly) id /* block */ completionHandler;

- (void).cxx_destruct;
- (bool)autoCancellable;
- (void)cancel;
- (id /* block */)cancelBlock;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)init;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (bool)isCanceled;
- (float)resourceRequirement;
- (int)run;
- (bool)run:(id*)arg1;
- (void)setCancelBlock:(id /* block */)arg1;

@end
