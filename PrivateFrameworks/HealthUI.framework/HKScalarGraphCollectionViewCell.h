
@interface HKScalarGraphCollectionViewCell : UICollectionViewCell <HKGraphViewDelegate> {
    NSArray * _graphSeries;
    HKScalarGraphViewController * _graphViewController;
    UIView * _header;
    HKLollipopController * _lollipopController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *graphSeries;
@property (nonatomic) HKScalarGraphViewController *graphViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIView *header;
@property (nonatomic) HKLollipopController *lollipopController;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)graphSeries;
- (void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;
- (void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4;
- (void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2;
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(bool)arg3 changeContext:(long long)arg4;
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;
- (void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (id)graphViewController;
- (void)graphViewDidBeginSelection:(id)arg1;
- (void)graphViewDidEndSelection:(id)arg1;
- (void)graphViewDidTapYAxis:(id)arg1;
- (void)graphViewExternalSelectionEnd:(id)arg1;
- (bool)graphViewPointSelectionDifferentiatesSeriesGroups:(id)arg1;
- (void)graphViewRenderedView:(id)arg1;
- (void)graphViewSizeChanged:(id)arg1;
- (id)header;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)lollipopController;
- (void)prepareForReuse;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (void)setGraphSeries:(id)arg1;
- (void)setGraphViewController:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setLollipopController:(id)arg1;
- (long long)stackCountForGraphView:(id)arg1;

@end
