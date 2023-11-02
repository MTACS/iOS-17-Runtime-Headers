
@interface PKSpendingSummaryChartView : UIView {
    unsigned long long  _axisCount;
    NSMutableArray * _bars;
    bool  _blurDisabled;
    double  _chartMaxAmount;
    NSCalendar * _currentCalendar;
    UIFont * _fontForLabels;
    UIFont * _fontForValues;
    double  _groupsMaxAmount;
    NSMutableArray * _horizontalAxis;
    bool  _isCompactUI;
    NSMutableArray * _legendLabels;
    unsigned long long  _presentationStyle;
    bool  _prioritizeLegendPlacement;
    bool  _showLegendGraph;
    bool  _showLegendLabels;
    bool  _showPlaceholders;
    PKSpendingSummary * _summary;
    NSMutableArray * _valueLabels;
    bool  _visible;
}

@property (getter=isBlurDisabled, nonatomic) bool blurDisabled;
@property (nonatomic) bool prioritizeLegendPlacement;
@property (nonatomic) bool showLegendGraph;
@property (nonatomic) bool showLegendLabels;
@property (nonatomic) bool showPlaceholders;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_configureBarView:(id)arg1 smallContext:(bool)arg2;
- (void)configureWithSummary:(id)arg1 presentationStyle:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBlurDisabled;
- (bool)isVisible;
- (void)layoutSubviews;
- (bool)prioritizeLegendPlacement;
- (void)setBlurDisabled:(bool)arg1;
- (void)setPrioritizeLegendPlacement:(bool)arg1;
- (void)setPrioritizeLegendPlacementUI:(bool)arg1;
- (void)setShowLegendGraph:(bool)arg1;
- (void)setShowLegendLabels:(bool)arg1;
- (void)setShowPlaceholders:(bool)arg1;
- (void)setVisible:(bool)arg1;
- (bool)showLegendGraph;
- (bool)showLegendLabels;
- (bool)showPlaceholders;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
