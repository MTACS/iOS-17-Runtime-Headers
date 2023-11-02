
@interface UIButtonConfigurationVisualProviderTVOS : UIButtonConfigurationVisualProvider <_UIFloatingContentViewDelegate> {
    _UIFloatingContentView * _floatingContentView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_floatingContentView;
- (void)_layoutFloatingContentView;
- (void)_updateBackgroundViewWithConfiguration:(id)arg1;
- (void)_updateContentBackdropView;
- (void)cleanupForVisualProvider:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 updateStyleForMenuWithConfiguration:(id)arg2 style:(id)arg3;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)effectiveContentView;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })menuAttachmentPointForConfiguration:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1;

@end
