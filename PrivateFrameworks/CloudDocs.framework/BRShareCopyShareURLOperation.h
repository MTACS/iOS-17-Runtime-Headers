
@interface BRShareCopyShareURLOperation : BRShareOperation {
    NSString * _appName;
    id /* block */  _copyShareURLCompletionBlock;
    NSError * _error;
    CKShare * _share;
    id /* block */  _shareCopyURLCompletionBlock;
}

@property (copy) id /* block */ copyShareURLCompletionBlock;
@property (nonatomic, retain) CKShare *share;
@property (copy) id /* block */ shareCopyURLCompletionBlock;

- (void).cxx_destruct;
- (id /* block */)copyShareURLCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithFileURL:(id)arg1 documentType:(id)arg2;
- (id)initWithItemID:(id)arg1;
- (id)initWithShare:(id)arg1 documentType:(id)arg2;
- (id)initWithShare:(id)arg1 fileURL:(id)arg2 documentType:(id)arg3;
- (id)initWithShare:(id)arg1 itemID:(id)arg2;
- (void)main;
- (void)setCopyShareURLCompletionBlock:(id /* block */)arg1;
- (void)setShare:(id)arg1;
- (void)setShareCopyURLCompletionBlock:(id /* block */)arg1;
- (id)share;
- (id /* block */)shareCopyURLCompletionBlock;

@end
