
@interface _UICalendarViewPlatformMetrics : NSObject <_UIVisualStyleProviding> {
    id /* block */  _dateCellBackgroundColorProvider;
    id /* block */  _dateCellFontProvider;
    id /* block */  _dateCellForegroundColorProvider;
    UIColor * _expandedMonthYearChevronColor;
    UIColor * _expandedMonthYearLabelColor;
    UIButtonConfiguration * _headerViewDefaultButtonConfiguration;
    id /* block */  _headerViewInsetsForLayoutMargins;
    double  _headerViewInterMonthButtonSpacing;
    id /* block */  _headerViewIntrinsicLayoutMarginsForProposedLayoutMargins;
    id /* block */  _headerViewLayoutMarginsForProposedLayoutMargins;
    id /* block */  _maximumContentWidthForLayoutMargins;
    double  _minimumContentWidth;
    double  _minimumLayoutWidth;
    UIColor * _monthYearChevronColor;
    id /* block */  _monthYearChevronSymbolConfiguration;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _monthYearContainerEdgeInsets;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _monthYearContainerOffset;
    id /* block */  _monthYearContainerViewProvider;
    UIColor * _monthYearLabelColor;
    id /* block */  _monthYearLabelFontProvider;
    id /* block */  _nextPreviousMonthButtonConfiguration;
    UIColor * _weekdayLabelTextColor;
}

@property (nonatomic, copy) id /* block */ dateCellBackgroundColorProvider;
@property (nonatomic, copy) id /* block */ dateCellFontProvider;
@property (nonatomic, copy) id /* block */ dateCellForegroundColorProvider;
@property (nonatomic, copy) UIColor *expandedMonthYearChevronColor;
@property (nonatomic, copy) UIColor *expandedMonthYearLabelColor;
@property (nonatomic, copy) UIButtonConfiguration *headerViewDefaultButtonConfiguration;
@property (nonatomic, copy) id /* block */ headerViewInsetsForLayoutMargins;
@property (nonatomic) double headerViewInterMonthButtonSpacing;
@property (nonatomic, copy) id /* block */ headerViewIntrinsicLayoutMarginsForProposedLayoutMargins;
@property (nonatomic, copy) id /* block */ headerViewLayoutMarginsForProposedLayoutMargins;
@property (nonatomic, copy) id /* block */ maximumContentWidthForLayoutMargins;
@property (nonatomic) double minimumContentWidth;
@property (nonatomic) double minimumLayoutWidth;
@property (nonatomic, copy) UIColor *monthYearChevronColor;
@property (nonatomic, copy) id /* block */ monthYearChevronSymbolConfiguration;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } monthYearContainerEdgeInsets;
@property (nonatomic) struct UIOffset { double x1; double x2; } monthYearContainerOffset;
@property (nonatomic, copy) id /* block */ monthYearContainerViewProvider;
@property (nonatomic, copy) UIColor *monthYearLabelColor;
@property (nonatomic, copy) id /* block */ monthYearLabelFontProvider;
@property (nonatomic, copy) id /* block */ nextPreviousMonthButtonConfiguration;
@property (nonatomic, copy) UIColor *weekdayLabelTextColor;

+ (id)_headerViewDefaultButtonConfiguration;

- (void).cxx_destruct;
- (id /* block */)dateCellBackgroundColorProvider;
- (id /* block */)dateCellFontProvider;
- (id /* block */)dateCellForegroundColorProvider;
- (id)expandedMonthYearChevronColor;
- (id)expandedMonthYearLabelColor;
- (id)headerViewDefaultButtonConfiguration;
- (id /* block */)headerViewInsetsForLayoutMargins;
- (double)headerViewInterMonthButtonSpacing;
- (id /* block */)headerViewIntrinsicLayoutMarginsForProposedLayoutMargins;
- (id /* block */)headerViewLayoutMarginsForProposedLayoutMargins;
- (id)init;
- (id /* block */)maximumContentWidthForLayoutMargins;
- (double)minimumContentWidth;
- (double)minimumLayoutWidth;
- (id)monthYearChevronColor;
- (id /* block */)monthYearChevronSymbolConfiguration;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })monthYearContainerEdgeInsets;
- (struct UIOffset { double x1; double x2; })monthYearContainerOffset;
- (id /* block */)monthYearContainerViewProvider;
- (id)monthYearLabelColor;
- (id /* block */)monthYearLabelFontProvider;
- (id /* block */)nextPreviousMonthButtonConfiguration;
- (void)setDateCellBackgroundColorProvider:(id /* block */)arg1;
- (void)setDateCellFontProvider:(id /* block */)arg1;
- (void)setDateCellForegroundColorProvider:(id /* block */)arg1;
- (void)setExpandedMonthYearChevronColor:(id)arg1;
- (void)setExpandedMonthYearLabelColor:(id)arg1;
- (void)setHeaderViewDefaultButtonConfiguration:(id)arg1;
- (void)setHeaderViewInsetsForLayoutMargins:(id /* block */)arg1;
- (void)setHeaderViewInterMonthButtonSpacing:(double)arg1;
- (void)setHeaderViewIntrinsicLayoutMarginsForProposedLayoutMargins:(id /* block */)arg1;
- (void)setHeaderViewLayoutMarginsForProposedLayoutMargins:(id /* block */)arg1;
- (void)setMaximumContentWidthForLayoutMargins:(id /* block */)arg1;
- (void)setMinimumContentWidth:(double)arg1;
- (void)setMinimumLayoutWidth:(double)arg1;
- (void)setMonthYearChevronColor:(id)arg1;
- (void)setMonthYearChevronSymbolConfiguration:(id /* block */)arg1;
- (void)setMonthYearContainerEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMonthYearContainerOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setMonthYearContainerViewProvider:(id /* block */)arg1;
- (void)setMonthYearLabelColor:(id)arg1;
- (void)setMonthYearLabelFontProvider:(id /* block */)arg1;
- (void)setNextPreviousMonthButtonConfiguration:(id /* block */)arg1;
- (void)setWeekdayLabelTextColor:(id)arg1;
- (id)weekdayLabelTextColor;

@end
