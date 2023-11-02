
@interface PXDemoDynamicViewWidget : NSObject <PXWidget> {
    double  __preferredHeightPhase;
    UIView * __view;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (setter=_setPreferredHeight:, nonatomic) double _preferredHeightPhase;
@property (nonatomic, readonly) UIView *_view;
@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle;
@property (nonatomic, readonly) PXAssetActionManager *assetActionManager;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double extraSpaceNeededAtContentBottom;
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled;
@property (nonatomic, readonly) bool hasContentForCurrentInput;
@property (nonatomic, readonly) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInEditMode;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) struct CGSize { double x1; double x2; } maxVisibleSizeInEditMode;
@property (getter=isSelecting, nonatomic) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, readonly) NSString *snappableWidgetIdentifier;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode;
@property (nonatomic, readonly) bool supportsSelection;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic, readonly) bool wantsFocus;
@property (nonatomic, readonly) bool wantsNoSpaceAfterContentBottom;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;
@property (nonatomic) <PXWidgetEditingDelegate> *widgetEditingDelegate;
@property (nonatomic) <PXWidgetInteractionDelegate> *widgetInteractionDelegate;
@property (nonatomic) <PXWidgetUnlockDelegate> *widgetUnlockDelegate;

- (void).cxx_destruct;
- (void)_heartBeatIncreaseHeightPhase:(bool)arg1;
- (void)_loadView;
- (double)_preferredHeightPhase;
- (void)_setPreferredHeight:(double)arg1;
- (void)_setPreferredHeightPhase:(double)arg1;
- (id)_view;
- (id)contentView;
- (bool)hasContentForCurrentInput;
- (id)localizedTitle;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (id)widgetDelegate;

@end
