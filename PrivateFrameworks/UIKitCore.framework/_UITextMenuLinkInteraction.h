
@interface _UITextMenuLinkInteraction : _UITextSimpleLinkInteraction <UIContextMenuInteractionDelegate> {
    NSMapTable * _configurationItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contextMenuInteraction:(id)arg1 configuration:(id)arg2 interactionEffectForTargetedPreview:(id)arg3;
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;
- (bool)_contextMenuInteraction:(id)arg1 shouldAttemptToPresentConfiguration:(id)arg2;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (id)_targetedPreviewForItem:(id)arg1 dismissing:(bool)arg2;
- (id)contextMenuDelegateProxy;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)didMoveToView:(id)arg1;
- (id)initWithShouldProxyContextMenuDelegate:(bool)arg1;
- (void)willMoveToView:(id)arg1;

@end
