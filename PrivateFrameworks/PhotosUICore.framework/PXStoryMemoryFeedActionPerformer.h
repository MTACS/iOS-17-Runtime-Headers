
@interface PXStoryMemoryFeedActionPerformer : NSObject <PXFeedActionPerformer> {
    id /* block */  _viewControllerSetupBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) id /* block */ viewControllerSetupBlock;

- (void).cxx_destruct;
- (void)_presentViewController:(id)arg1 contentViewController:(id)arg2 fromViewController:(id)arg3 animated:(bool)arg4 completion:(id /* block */)arg5;
- (void)deleteItemsInSelection:(id)arg1 undoManager:(id)arg2;
- (bool)handlePrimaryActionOnItemAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1 inDataSource:(id)arg2 fromViewController:(id)arg3;
- (id)init;
- (id)initWithViewControllerSetupBlock:(id /* block */)arg1;
- (bool)navigateToObjectReference:(id)arg1 originalSource:(id)arg2 fromViewController:(id)arg3 animated:(bool)arg4 willPresentHandler:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (id /* block */)viewControllerSetupBlock;

@end
