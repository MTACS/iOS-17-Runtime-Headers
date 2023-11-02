
@interface SearchUIStocksCardSectionView : SearchUICardSectionView <ChartUpdaterDelegate, NUIContainerViewDelegate> {
    NSMutableArray * _axisViews;
    StockChartData * _chartData;
    ChartUpdater * _chartUpdater;
    StockChartDisplayMode * _displayMode;
    int  _graphColor;
    TLKLabel * _highLabel;
    TLKLabel * _lowLabel;
    SearchUIDashedLineView * _previousCloseLine;
    NUIContainerStackView * _stackView;
    StockGraphView * _stockGraphView;
    UIView * _xAxisKeyline;
    NSMutableArray * _xLabelViews;
}

@property (retain) NSMutableArray *axisViews;
@property (retain) StockChartData *chartData;
@property (retain) ChartUpdater *chartUpdater;
@property (retain) NUIContainerBoxView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) StockChartDisplayMode *displayMode;
@property (nonatomic) int graphColor;
@property (readonly) unsigned long long hash;
@property (retain) TLKLabel *highLabel;
@property (retain) TLKLabel *lowLabel;
@property (retain) SearchUIDashedLineView *previousCloseLine;
@property (retain) SearchUIStockGraphSectionRowModel *rowModel;
@property (retain) NUIContainerStackView *stackView;
@property (retain) StockGraphView *stockGraphView;
@property (readonly) Class superclass;
@property (retain) UIView *xAxisKeyline;
@property (retain) NSMutableArray *xLabelViews;

- (void).cxx_destruct;
- (id)axisViews;
- (id)chartData;
- (id)chartUpdater;
- (void)chartUpdater:(id)arg1 didFailWithError:(id)arg2;
- (void)chartUpdater:(id)arg1 didReceiveStockChartData:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (void)didMoveToWindow;
- (id)displayMode;
- (int)graphColor;
- (id)highLabel;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (void)layoutAxesAndXLabels;
- (void)layoutPriceLabels;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lineGraphFrame;
- (id)lowLabel;
- (id)previousCloseLine;
- (void)setAxisViews:(id)arg1;
- (void)setChartData:(id)arg1;
- (void)setChartUpdater:(id)arg1;
- (void)setDisplayMode:(id)arg1;
- (void)setGraphColor:(int)arg1;
- (void)setHighLabel:(id)arg1;
- (void)setHourLabels;
- (void)setLowLabel:(id)arg1;
- (void)setPreviousCloseLine:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setStockGraphView:(id)arg1;
- (void)setXAxisKeyline:(id)arg1;
- (void)setXLabelViews:(id)arg1;
- (id)setupContentView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stackView;
- (id)stockGraphView;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)xAxisKeyline;
- (id)xLabelViews;

@end
