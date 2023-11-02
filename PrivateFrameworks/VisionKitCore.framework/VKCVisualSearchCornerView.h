
@interface VKCVisualSearchCornerView : VKCTappableView <VKCCornerLookupButtonDelegate> {
    NSString * __customAnalyticsIdentifier;
    VKCImageAnalysis * _analysis;
    NSMutableArray * _cornerButtons;
    NSArray * _cornerResultItems;
    <VKCVisualSearchCornerViewDelegate> * _delegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedVisibleRect;
}

@property (nonatomic, copy) NSString *_customAnalyticsIdentifier;
@property (nonatomic, retain) VKCImageAnalysis *analysis;
@property (nonatomic, readonly) double buttonSpacing;
@property (nonatomic, retain) NSMutableArray *cornerButtons;
@property (nonatomic, retain) NSArray *cornerResultItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKCVisualSearchCornerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedVisibleRect;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double windowScale;

- (void).cxx_destruct;
- (void)_contentSizeChanged:(id)arg1;
- (id)_customAnalyticsIdentifier;
- (bool)_itemObscuredByViewport:(id)arg1;
- (id)_resultItems;
- (void)_showCornerLookupButtonsForResults:(id)arg1;
- (void)_updateButtonFramesWithScale:(double)arg1;
- (void)addMetadataToVSFeedbackItem:(id)arg1;
- (id)analysis;
- (void)automaticallyShowVisualSearchResultsIfApplicable;
- (double)buttonSpacing;
- (id)cornerButtons;
- (id)cornerResultItems;
- (id)delegate;
- (void)generateVisualSearchResultForItems:(id)arg1 queryID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateButtonsForResults;
- (void)lookupButton:(id)arg1 didProcessResultWithDuration:(double)arg2;
- (void)lookupButton:(id)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)lookupButtonDidDismissController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedVisibleRect;
- (void)sendDismissedAnalyticsEventEventWithItem:(id)arg1;
- (void)sendProcessingAnalyticsEventEventWithItem:(id)arg1 duration:(double)arg2;
- (void)setAnalysis:(id)arg1;
- (void)setCornerButtons:(id)arg1;
- (void)setCornerResultItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNormalizedVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_customAnalyticsIdentifier:(id)arg1;
- (void)showVisualSearchResultView;
- (void)submitVisualSearchUserFeedbackForReportIdentifier:(id)arg1 userFeedbackPayload:(id)arg2 sfReportData:(id)arg3;
- (double)windowScale;

@end
