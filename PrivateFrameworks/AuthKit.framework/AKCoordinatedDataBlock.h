
@interface AKCoordinatedDataBlock : NSObject {
    id /* block */  _block;
    id /* block */  _completionHandler;
    NSObject<OS_dispatch_group> * _group;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _started;
}

+ (id)startCoordinatingBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_callCompletionWithData:(id)arg1 error:(id)arg2;
- (void)_start;
- (id)initWithBlock:(id /* block */)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)start;

@end
