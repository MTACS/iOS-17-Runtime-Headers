
@interface PKAsyncUnaryOperationEvaluator : NSObject <PKCancelable> {
    bool  _canceled;
    id /* block */  _completion;
    _Atomic bool  _crashed;
    bool  _escaped;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _operations;
    PKAsyncOperationState * _runningOperationState;
    bool  _started;
    id  _value;
}

@property (getter=isCanceled, nonatomic, readonly) bool canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithOperations:(id)arg1 input:(id)arg2;
- (bool)_performOperation;
- (void)cancel;
- (id)cancelable;
- (void)dealloc;
- (id)evaluateWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isCanceled;

@end
