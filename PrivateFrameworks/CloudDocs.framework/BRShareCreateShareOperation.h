
@interface BRShareCreateShareOperation : BRShareOperation {
    id /* block */  _shareCreateCompletionBlock;
}

@property (copy) id /* block */ shareCreateCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItemID:(id)arg1;
- (void)main;
- (void)setShareCreateCompletionBlock:(id /* block */)arg1;
- (id /* block */)shareCreateCompletionBlock;

@end
