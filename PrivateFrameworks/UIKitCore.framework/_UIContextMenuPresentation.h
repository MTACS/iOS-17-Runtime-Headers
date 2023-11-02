
@interface _UIContextMenuPresentation : _UIClickPresentation <_UIContextMenuPreviewPresentationControllerDelegate, _UIContextMenuUIControllerDelegate> {
    <_UIContextMenuPresentationDelegate> * _delegate;
    bool  _suppressInputViewDuringPresentation;
    _UIContextMenuUIController * _uiController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIContextMenuPresentationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIFulfilledContextMenuConfiguration *menuConfiguration;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressInputViewDuringPresentation;
@property (nonatomic, readonly) _UIContextMenuUIController *uiController;
@property (nonatomic, readonly) NSArray *visibleMenus;

- (void).cxx_destruct;
- (id)_platformMetrics;
- (void)contextMenuPreviewPresentationController:(id)arg1 didChangePreviewContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)contextMenuUIController:(id)arg1 didBeginDragWithTouch:(id)arg2;
- (void)contextMenuUIController:(id)arg1 didRequestDismissalWithReason:(unsigned long long)arg2 alongsideActions:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)contextMenuUIController:(id)arg1 didSelectMenuLeaf:(id)arg2;
- (id)contextMenuUIController:(id)arg1 dismissalPreviewForItem:(id)arg2 clientReturnedPreview:(bool*)arg3;
- (id)contextMenuUIController:(id)arg1 willDisplayMenu:(id)arg2;
- (void)contextMenuUIControllerDidEndPanInteraction:(id)arg1;
- (bool)contextMenuUIControllerShouldAllowSwipeToDismissForBeginningPanInteraction:(id)arg1;
- (void)contextMenuUIControllerWillPerformLayout:(id)arg1 withPreviewSize:(struct CGSize { double x1; double x2; })arg2;
- (id)delegate;
- (void)dismiss;
- (void)displayMenu:(id)arg1 inPlaceOfMenu:(id)arg2;
- (void)dragWillCancelWithAnimator:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 configuration:(id)arg2 style:(id)arg3;
- (id)livePreviewForDragItem:(id)arg1 preferringFullSize:(bool)arg2;
- (id)menuConfiguration;
- (id)preferredFocusEnvironmentsForContextMenuPreviewPresentationController:(id)arg1;
- (void)prepareToDismiss;
- (void)prepareToPresent;
- (void)present;
- (id)previewForCancellingDragItem:(id)arg1;
- (void)requestMenuDismissal;
- (void)retargetDismissingMenuToPreview:(id)arg1;
- (void)setAlongsideAnimatorForDismissal:(id)arg1;
- (void)setAlongsideAnimatorForPresentation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSuppressInputViewDuringPresentation:(bool)arg1;
- (bool)suppressInputViewDuringPresentation;
- (id)uiController;
- (void)viewTraitCollectionDidChange;
- (id)visibleMenus;
- (id)windowSceneActivationPreview;

@end
