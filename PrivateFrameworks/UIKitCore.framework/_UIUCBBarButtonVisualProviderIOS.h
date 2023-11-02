
@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {
    UIButton * _contentButton;
    id /* block */  _menuProvider;
    _UISlotView * _securePasteButtonSlotView;
    bool  _slotViewHasRemoteContent;
}

+ (id)_defaultTitleAttributes;

- (void).cxx_destruct;
- (void)_configureImageOrTitleFromBarItem:(id)arg1;
- (id)_constraintsForButton:(id)arg1 withButtonItem:(id)arg2;
- (id)_defaultTitleAttributes;
- (id)_newButtonForType:(long long)arg1;
- (long long)_securePasteButtonSite;
- (id)buttonContextMenuInteractionConfiguration;
- (id)buttonContextMenuStyleFromDefaultStyle:(id)arg1;
- (id)buttonContextMenuTargetedPreview;
- (bool)canUpdateMenuInPlace;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (id)contentView;
- (void)enableSecureButton:(bool)arg1;
- (id)imageSymbolConfiguration;
- (struct CGPoint { double x1; double x2; })menuAnchorPoint;
- (id)pointerShapeInContainer:(id)arg1;
- (bool)shouldSuppressPointerSpecularFilter;
- (bool)shouldUseImageInsets;
- (void)updateButton:(id)arg1 forEnabledState:(bool)arg2;
- (void)updateButton:(id)arg1 forHighlightedState:(bool)arg2;
- (void)updateMenu;
- (void)updateSecureButton;

@end
