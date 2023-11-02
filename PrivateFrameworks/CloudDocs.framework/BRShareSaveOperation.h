
@interface BRShareSaveOperation : BRShareOperation {
    CKShare * _share;
    id /* block */  _shareSaveCompletionBlock;
}

@property (nonatomic, retain) CKShare *share;
@property (copy) id /* block */ shareSaveCompletionBlock;

+ (bool)shouldRetryShareSaveOnError:(id)arg1;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShare:(id)arg1;
- (id)initWithShare:(id)arg1 fileURL:(id)arg2;
- (void)main;
- (void)setShare:(id)arg1;
- (void)setShareSaveCompletionBlock:(id /* block */)arg1;
- (id)share;
- (id /* block */)shareSaveCompletionBlock;

@end
