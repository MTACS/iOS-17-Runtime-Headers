
@interface MUPlaceEnrichmentSectionController : MUPlaceSectionController <MUPlaceEnrichmentManagerObserver, MUPlaceEnrichmentSectionAnalyticsDelegate, MUPlaceEnrichmentSectionContextMenuDelegate, MUPlaceSectionControlling, MUWebContentViewControllerDelegate> {
    MUPlaceEnrichmentActionManager * _actionManager;
    MUPlaceEnrichmentAction * _contextMenuAction;
    MUPlaceEnrichmentContextMenu * _contextMenuButton;
    UIContextMenuInteraction * _contextMenuInteraction;
    GEOEnrichmentData * _enrichmentData;
    bool  _loading;
    <MUPlaceEnrichmentSectionControllerDelegate> * _placeEnrichmentDelegate;
    MUPlaceSectionView * _sectionView;
    bool  _shouldRemoveWebContent;
    MUWebContentViewController * _webContentViewController;
}

@property (nonatomic, retain) MUPlaceEnrichmentActionManager *actionManager;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic, retain) MUPlaceEnrichmentAction *contextMenuAction;
@property (nonatomic, retain) MUPlaceEnrichmentContextMenu *contextMenuButton;
@property (nonatomic, retain) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GEOEnrichmentData *enrichmentData;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic) <MUPlaceEnrichmentSectionControllerDelegate> *placeEnrichmentDelegate;
@property (nonatomic, readonly) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (nonatomic, readonly) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (nonatomic, readonly) UIView *sectionView;
@property (nonatomic, readonly) UIViewController *sectionViewController;
@property (nonatomic, readonly) NSArray *sectionViews;
@property (nonatomic, retain) MUPlaceCallToActionAppearance *submissionStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_populateRevealedAnalyticsModule:(id)arg1;
- (void)_setupPlaceEnrichmentViewController;
- (id)actionManager;
- (void)addContextMenuUsingBoundingBox:(id)arg1 accessibilityLabel:(id)arg2;
- (int)analyticSuppressionReasonFrom:(id)arg1;
- (int)analyticsModuleType;
- (id)contextMenuAction;
- (id)contextMenuButton;
- (id)contextMenuInteraction;
- (void)dealloc;
- (void)didLayoutContextMenu:(id)arg1 completion:(id /* block */)arg2;
- (void)didTapAddPhoto;
- (void)didTapRatePlace;
- (id)draggableContent;
- (id)enrichmentData;
- (bool)hasContent;
- (id)initWithMapItem:(id)arg1 actionManager:(id)arg2 dataAvailability:(id)arg3 amsResultProvider:(id)arg4 callToActionDelegate:(id)arg5 externalActionHandler:(id)arg6 rapActionHandler:(id)arg7;
- (void)instrumentExternalActionUsingAnalyticsAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 sharedStateButtonList:(id)arg4;
- (bool)isImpressionable;
- (bool)isLoading;
- (bool)isWebContentViewControllerParentPlacecardLoading:(id)arg1;
- (void)placeEnrichmentAPIContollerDidFetchEnrichmentData:(id)arg1 forMapItem:(id)arg2;
- (id)placeEnrichmentDelegate;
- (void)refreshPlaceEnrichment;
- (void)removeWebContentViewController:(id)arg1 arguments:(id)arg2;
- (id)sectionView;
- (id)sectionViewController;
- (void)setActionManager:(id)arg1;
- (void)setContextMenuAction:(id)arg1;
- (void)setContextMenuButton:(id)arg1;
- (void)setContextMenuInteraction:(id)arg1;
- (void)setEnrichmentData:(id)arg1;
- (void)setPlaceEnrichmentDelegate:(id)arg1;
- (void)updateActionsOverWebBridge:(id)arg1;
- (void)webContentViewController:(id)arg1 performHeightChangeWithBlock:(id /* block */)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)webContentViewControllerDidStopLoading:(id)arg1;

@end
