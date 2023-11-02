
@interface FPTrashOperation : FPTransformOperation

- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)fp_prettyDescription;
- (id)initWithItems:(id)arg1;
- (void)presendNotifications;
- (id)replicateForItems:(id)arg1;
- (void)subclassPreflightWithCompletion:(id /* block */)arg1;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;

@end
