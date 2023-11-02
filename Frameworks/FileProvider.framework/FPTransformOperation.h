
@interface FPTransformOperation : FPActionOperation {
    NSArray * _items;
    id /* block */  _transformCompletionBlock;
}

@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, copy) id /* block */ transformCompletionBlock;

- (void).cxx_destruct;
- (void)actionMain;
- (id)finalItemsForStitcherForResult:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)fp_prettyDescription;
- (id)initWithItemsOfDifferentProviders:(id)arg1 action:(id)arg2;
- (id)items;
- (void)postStitchingFinishWithResult:(id)arg1 error:(id)arg2;
- (void)presendNotifications;
- (void)setTransformCompletionBlock:(id /* block */)arg1;
- (id /* block */)transformCompletionBlock;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;

@end
