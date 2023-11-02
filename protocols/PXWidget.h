
@protocol PXWidget <NSObject>

@optional

+ (void)preloadResources;

- (bool)allowUserInteractionWithSubtitle;
- (PXAssetActionManager *)assetActionManager;
- (long long)contentLayoutStyle;
- (PXTilingController *)contentTilingController;
- (NSObject<PXAnonymousView> *)contentView;
- (long long)contentViewAnchoringType;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (void)contentViewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id <PXWidgetContentViewTransitionCoordinator>)arg2;
- (PXPhotosDetailsContext *)context;
- (void)deviceDidBecomeUnlocked;
- (double)extraSpaceNeededAtContentBottom;
- (bool)hasContentForCurrentInput;
- (bool)hasLoadedContentData;
- (bool)isFaceModeEnabled;
- (bool)isInEditMode;
- (bool)isSelecting;
- (bool)isUserInteractionEnabled;
- (void)loadContentData;
- (NSString *)localizedCaption;
- (NSString *)localizedDisclosureTitle;
- (NSString *)localizedSubtitle;
- (NSString *)localizedTitle;
- (struct CGSize { double x1; double x2; })maxVisibleSizeInEditMode;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)requestExitEditWithChangesSavingMode:(long long)arg1;
- (PXSectionedSelectionManager *)selectionManager;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContext:(PXPhotosDetailsContext *)arg1;
- (void)setFaceModeEnabled:(bool)arg1;
- (void)setMaxVisibleSizeInEditMode:(struct CGSize { double x1; double x2; })arg1;
- (void)setSelecting:(bool)arg1;
- (void)setSpec:(PXWidgetSpec *)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setWidgetDelegate:(id <PXWidgetDelegate>)arg1;
- (void)setWidgetEditingDelegate:(id <PXWidgetEditingDelegate>)arg1;
- (void)setWidgetInteractionDelegate:(id <PXWidgetInteractionDelegate>)arg1;
- (void)setWidgetUnlockDelegate:(id <PXWidgetUnlockDelegate>)arg1;
- (NSString *)snappableWidgetIdentifier;
- (void)spaceBarWasPressed;
- (PXWidgetSpec *)spec;
- (bool)supportsFaceMode;
- (bool)supportsSelection;
- (void)unloadContentData;
- (void)userDidSelectDisclosureControl;
- (void)userDidSelectSubtitle;
- (bool)wantsFocus;
- (bool)wantsNoSpaceAfterContentBottom;
- (<PXWidgetDelegate> *)widgetDelegate;
- (<PXWidgetEditingDelegate> *)widgetEditingDelegate;
- (<PXWidgetInteractionDelegate> *)widgetInteractionDelegate;
- (<PXWidgetUnlockDelegate> *)widgetUnlockDelegate;

@end
