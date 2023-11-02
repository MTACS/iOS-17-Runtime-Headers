
@protocol PXActionPerformerDelegate <NSObject>

@required

- (NSUndoManager *)undoManagerForActionPerformer:(PXActionPerformer *)arg1;

@optional

- (void)actionPerformer:(PXActionPerformer *)arg1 didChangeState:(unsigned long long)arg2;
- (bool)actionPerformer:(void *)arg1 dismissViewController:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: PXActionPerformer *, NSObject<PXAnonymousViewController> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)actionPerformer:(PXActionPerformer *)arg1 presentViewController:(NSObject<PXAnonymousViewController> *)arg2;
- (bool)actionPerformer:(PXActionPerformer *)arg1 transitionToViewController:(NSObject<PXAnonymousViewController> *)arg2 transitionType:(long long)arg3;
- (NSObject<PXAnonymousViewController> *)hostViewControllerForActionPerformer:(PXActionPerformer *)arg1;
- (<PXMemoryAssetsActionFactory> *)memoryAssetsActionFactory;
- (<PXPresentationEnvironment> *)presentationEnvironmentForActionPerformer:(PXActionPerformer *)arg1;
- (double)progressToastPaddingForActionPerformer:(PXActionPerformer *)arg1;
- (NSObject<PXAnonymousViewController> *)progressToastViewControllerForActionPerformer:(PXActionPerformer *)arg1;

@end
