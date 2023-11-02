
@interface PUPXAssetActionPerformer : PUAssetActionPerformer <PXActionPerformerDelegate> {
    <PXActionPerformerDelegate> * _forwardingDelegate;
    PXAssetActionManager * _underlyingActionManager;
    PXAssetActionPerformer * _underlyingActionPerformer;
    UIViewController * presentedViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXActionPerformerDelegate> *forwardingDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (nonatomic, retain) UIViewController *presentedViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXAssetActionManager *underlyingActionManager;

- (void).cxx_destruct;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (id)forwardingDelegate;
- (id)initWithActionType:(unsigned long long)arg1 assets:(id)arg2 orAssetsByAssetCollection:(id)arg3;
- (id)initWithUnderlyingActionPerformer:(id)arg1;
- (void)performWithCompletionHandler:(id /* block */)arg1;
- (id)presentedViewController;
- (void)setPresentedViewController:(id)arg1;
- (void)setUnderlyingActionManager:(id)arg1;
- (unsigned long long)state;
- (id)underlyingActionManager;
- (id)undoManagerForActionPerformer:(id)arg1;

@end
