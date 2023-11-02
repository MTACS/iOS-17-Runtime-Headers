
@interface PLLazyObject : NSObject {
    id /* block */  _block;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _object;
    bool  _shouldRetryBlockOnNil;
}

@property (readonly) id currentObjectValueWithoutForcingEvaluation;
@property (readonly) id objectValue;

- (void).cxx_destruct;
- (id)currentObjectValueWithoutForcingEvaluation;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithRetriableBlock:(id /* block */)arg1;
- (id)initWithRetry:(bool)arg1 block:(id /* block */)arg2;
- (void)invalidate;
- (void)invalidateWithHandler:(id /* block */)arg1;
- (id)objectValue;
- (void)resetObject;
- (void)resetObjectWithHandler:(id /* block */)arg1;

@end
