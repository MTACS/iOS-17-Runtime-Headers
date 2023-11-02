
@protocol PUOneUpAssetTransitionViewController <NSObject>

@optional

- (PUAssetTransitionInfo *)createAssetTransitionInfo;
- (PUAssetTransitionInfo *)oneUpAssetTransition:(id <PUOneUpAssetTransition>)arg1 adjustTransitionInfo:(PUAssetTransitionInfo *)arg2;
- (void)oneUpAssetTransition:(void *)arg1 animateTransitionWithContext:(void *)arg2 duration:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: <PUOneUpAssetTransition> *, PUOneUpAssetTransitionContext *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)oneUpAssetTransition:(void *)arg1 requestTransitionContextWithCompletion:(void *)arg2; // needs 2 arg types, found 7: <PUOneUpAssetTransition> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PUOneUpAssetTransitionContext *, void*
- (void)oneUpAssetTransition:(void *)arg1 requestTransitionContextWithCompletion:(void *)arg2 options:(void *)arg3; // needs 3 arg types, found 8: <PUOneUpAssetTransition> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PUOneUpAssetTransitionContext *, void*, unsigned long long
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })oneUpAssetTransitionAssetFinalFrame:(id <PUOneUpAssetTransition>)arg1;
- (void)oneUpAssetTransitionDidEnd:(id <PUOneUpAssetTransition>)arg1;
- (void)oneUpAssetTransitionWillBegin:(id <PUOneUpAssetTransition>)arg1;

@end
