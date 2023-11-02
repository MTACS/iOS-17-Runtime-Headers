
@interface HKInteractiveChartAnnotationView : UIView {
    _HKBodyMarginsLayout * _bodyMarginsLayout;
    _HKAnnotationColumnLayout * _columnLayout;
    long long  _context;
    <HKInteractiveChartAnnotationViewDataSourceProtocol> * _dataSource;
    _HKDateContentLayout * _dateContentLayout;
    NSTimer * _deferredNoDataTimer;
    <HKInteractiveChartAnnotationViewDelegate> * _delegate;
    UIButton * _infoButton;
    NSLayoutConstraint * _leadingMarginConstraint;
    bool  _showsInfoButton;
    NSLayoutConstraint * _trailingMarginConstraint;
}

@property (nonatomic, retain) _HKBodyMarginsLayout *bodyMarginsLayout;
@property (nonatomic, retain) _HKAnnotationColumnLayout *columnLayout;
@property (nonatomic) long long context;
@property (nonatomic) <HKInteractiveChartAnnotationViewDataSourceProtocol> *dataSource;
@property (nonatomic, retain) _HKDateContentLayout *dateContentLayout;
@property (nonatomic) NSTimer *deferredNoDataTimer;
@property (nonatomic) <HKInteractiveChartAnnotationViewDelegate> *delegate;
@property (nonatomic, retain) UIButton *infoButton;
@property (nonatomic, retain) NSLayoutConstraint *leadingMarginConstraint;
@property (nonatomic) bool showsInfoButton;
@property (nonatomic, retain) NSLayoutConstraint *trailingMarginConstraint;

- (void).cxx_destruct;
- (void)_buildStandardAnnotationViews;
- (void)_cancelDeferredDataReload;
- (void)_configureLayout;
- (bool)_dataSourceHasNoData;
- (void)_invalidateLayout;
- (double)_leadingMargin;
- (void)_removeViewsForRebuild;
- (void)_updateAutomationIdentifiers:(id)arg1;
- (void)_updateRightMarginViewWithInfoButton;
- (id)bodyMarginsLayout;
- (id)columnLayout;
- (long long)context;
- (id)dataSource;
- (id)dateContentLayout;
- (id)deferredNoDataTimer;
- (id)delegate;
- (void)handleCurrentTimeGesture:(id)arg1;
- (id)infoButton;
- (void)infoButtonPressed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContext:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)leadingMarginConstraint;
- (void)reloadData;
- (void)scheduleDeferredDataReload;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setBodyMarginsLayout:(id)arg1;
- (void)setColumnLayout:(id)arg1;
- (void)setContext:(long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDateContentLayout:(id)arg1;
- (void)setDeferredNoDataTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInfoButton:(id)arg1;
- (void)setLeadingMarginConstraint:(id)arg1;
- (void)setShowsInfoButton:(bool)arg1;
- (void)setTrailingMarginConstraint:(id)arg1;
- (void)showNoDataStatus;
- (bool)showsInfoButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)trailingMarginConstraint;

@end
