
@interface IDSTransactionLogTask : NSObject {
    id /* block */  _completionBlock;
}

@property (nonatomic, copy) id /* block */ completionBlock;

- (void).cxx_destruct;
- (void)_completeWithError:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;

@end
