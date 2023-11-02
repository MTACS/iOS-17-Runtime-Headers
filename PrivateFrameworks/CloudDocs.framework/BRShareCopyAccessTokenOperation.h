
@interface BRShareCopyAccessTokenOperation : BRShareOperation {
    id /* block */  _shareCopyAccessTokenCompletionBlock;
}

@property (copy) id /* block */ shareCopyAccessTokenCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)main;
- (void)setShareCopyAccessTokenCompletionBlock:(id /* block */)arg1;
- (id /* block */)shareCopyAccessTokenCompletionBlock;

@end
