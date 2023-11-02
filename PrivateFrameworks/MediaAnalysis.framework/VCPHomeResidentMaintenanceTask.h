
@interface VCPHomeResidentMaintenanceTask : NSObject <VCPMADTaskProtocol> {
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _cancel;
    id /* block */  _cancelBlock;
    id /* block */  _completionHandler;
    NSDictionary * _options;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _started;
    int  _taskID;
}

@property (nonatomic, copy) id /* block */ cancelBlock;

+ (id)taskWithOptions:(id)arg1 andCompletionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)autoCancellable;
- (void)cancel;
- (id /* block */)cancelBlock;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 andCompletionHandler:(id /* block */)arg2;
- (bool)isCanceled;
- (float)resourceRequirement;
- (int)run;
- (void)setCancelBlock:(id /* block */)arg1;

@end
