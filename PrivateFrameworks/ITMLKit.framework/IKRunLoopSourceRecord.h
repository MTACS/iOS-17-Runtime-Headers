
@interface IKRunLoopSourceRecord : NSObject {
    id /* block */  _completionBlock;
    id /* block */  _evaluateBlock;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, copy) id /* block */ evaluateBlock;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id /* block */)evaluateBlock;
- (id)initWithEvaluateBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setEvaluateBlock:(id /* block */)arg1;

@end
