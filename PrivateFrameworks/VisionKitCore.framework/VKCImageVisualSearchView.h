
@interface VKCImageVisualSearchView : VKCImageBaseOverlayView <VKCVisualSearchResultItemViewDelegate> {
    NSMutableSet * _cachedResultItemsWithFocalDot;
    <VKCImageVisualSearchViewDelegate> * _delegate;
    bool  _didAddVisualSearchCornerView;
    NSMutableArray * _resultViews;
    bool  _shouldAutomaticallyShowVisualSearchResult;
    VKCVisualSearchResult * _visualSearchResult;
}

@property (nonatomic, retain) NSMutableSet *cachedResultItemsWithFocalDot;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKCImageVisualSearchViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didAddVisualSearchCornerView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *resultViews;
@property (nonatomic) bool shouldAutomaticallyShowVisualSearchResult;
@property (readonly) Class superclass;
@property (nonatomic, retain) VKCVisualSearchResult *visualSearchResult;

- (void).cxx_destruct;
- (void)_layoutResultViews;
- (bool)_shouldShowPulsingDot:(id)arg1;
- (void)addMetadataToVSFeedbackItem:(id)arg1;
- (void)animateDotsIn;
- (void)automaticallyShowVisualSearchResults;
- (id)cachedResultItemsWithFocalDot;
- (bool)containsVisualSearchItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)delegate;
- (bool)didAddVisualSearchCornerView;
- (void)generateVisualSearchResultForItems:(id)arg1 queryID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)hideDots;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (void)layoutSubviews;
- (void)presentVisualSearchForItem:(id)arg1;
- (id)resultViews;
- (void)sendDismissedAnalyticsEventEventWithItem:(id)arg1;
- (void)sendProcessingAnalyticsEventEventWithItem:(id)arg1 duration:(double)arg2;
- (void)setCachedResultItemsWithFocalDot:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidAddVisualSearchCornerView:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setNormalizedVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setResultViews:(id)arg1;
- (void)setShouldAutomaticallyShowVisualSearchResult:(bool)arg1;
- (void)setVisualSearchResult:(id)arg1;
- (bool)shouldAutomaticallyShowVisualSearchResult;
- (void)showTopVisualSearchResult;
- (void)submitVisualSearchUserFeedbackForReportIdentifier:(id)arg1 userFeedbackPayload:(id)arg2 sfReportData:(id)arg3;
- (id)topResultView;
- (void)triggerTapToRadar;
- (void)updateUIForVisualSearchResultsClearExistingResults:(bool)arg1;
- (void)updateVisibleItems;
- (id)visualSearchItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)visualSearchItemView:(id)arg1 didProcessResultsWithDuration:(double)arg2;
- (void)visualSearchItemView:(id)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)visualSearchItemView:(id)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)visualSearchItemViewDidActivateVSItem:(id)arg1;
- (void)visualSearchItemViewDidDismissController:(id)arg1;
- (id)visualSearchResult;

@end
