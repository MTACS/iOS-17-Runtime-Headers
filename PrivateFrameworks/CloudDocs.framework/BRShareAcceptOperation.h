
@interface BRShareAcceptOperation : BROperation {
    id /* block */  _shareAcceptCompletionBlock;
    NSURL * _shareLink;
}

@property (copy) id /* block */ shareAcceptCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShareLink:(id)arg1;
- (void)main;
- (void)setShareAcceptCompletionBlock:(id /* block */)arg1;
- (id /* block */)shareAcceptCompletionBlock;

@end
