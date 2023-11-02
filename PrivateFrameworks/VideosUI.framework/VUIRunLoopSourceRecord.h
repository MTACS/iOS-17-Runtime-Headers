
@interface VUIRunLoopSourceRecord : NSObject {
    id /* block */  _completionBlock;
    NSObject<OS_dispatch_queue> * _completionQueue;
    id /* block */  _evaluateBlock;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, copy) id /* block */ evaluateBlock;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id)completionQueue;
- (id /* block */)evaluateBlock;
- (id)initWithEvaluateBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithEvaluateBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2 completionQueue:(id)arg3;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setEvaluateBlock:(id /* block */)arg1;

@end
