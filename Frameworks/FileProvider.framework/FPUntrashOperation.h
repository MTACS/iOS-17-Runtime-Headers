
@interface FPUntrashOperation : FPTransformOperation {
    FPItem * _restoreDirectory;
    FPItem * _rootDirectory;
    id /* block */  _untrashCompletionBlock;
}

@property (nonatomic, copy) id /* block */ untrashCompletionBlock;

- (void).cxx_destruct;
- (id)fp_prettyDescription;
- (id)initWithItems:(id)arg1 restoreDirectory:(id)arg2;
- (void)postStitchingFinishWithResult:(id)arg1 error:(id)arg2;
- (void)presendNotifications;
- (id)replicateForItems:(id)arg1;
- (void)setUntrashCompletionBlock:(id /* block */)arg1;
- (void)subclassPreflightWithCompletion:(id /* block */)arg1;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id /* block */)untrashCompletionBlock;

@end
