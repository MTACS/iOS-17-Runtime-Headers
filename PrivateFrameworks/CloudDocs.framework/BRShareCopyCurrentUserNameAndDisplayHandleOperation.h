
@interface BRShareCopyCurrentUserNameAndDisplayHandleOperation : BRShareOperation {
    id /* block */  _shareUserNameCompletionBlock;
}

@property (copy) id /* block */ shareUserNameCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)setShareUserNameCompletionBlock:(id /* block */)arg1;
- (id /* block */)shareUserNameCompletionBlock;

@end
