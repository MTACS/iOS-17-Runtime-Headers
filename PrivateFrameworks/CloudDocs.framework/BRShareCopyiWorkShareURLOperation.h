
@interface BRShareCopyiWorkShareURLOperation : BROperation {
    CKShare * _share;
    id /* block */  _shareCopyURLCompletionBlock;
}

@property (nonatomic, retain) CKShare *share;
@property (copy) id /* block */ shareCopyURLCompletionBlock;

+ (id)iWorkShareableExtensions;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithShare:(id)arg1;
- (id)initWithShare:(id)arg1 appName:(id)arg2;
- (id)initWithShare:(id)arg1 documentType:(id)arg2;
- (void)main;
- (void)setShare:(id)arg1;
- (void)setShareCopyURLCompletionBlock:(id /* block */)arg1;
- (id)share;
- (id /* block */)shareCopyURLCompletionBlock;

@end
