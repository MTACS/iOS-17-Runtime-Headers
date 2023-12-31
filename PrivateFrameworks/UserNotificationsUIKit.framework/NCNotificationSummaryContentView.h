
@interface NCNotificationSummaryContentView : UIView <BSUIDateLabelDelegate, NCNotificationSummaryContentDisplaying> {
    bool  _adjustsFontForContentSizeCategory;
    NSStringDrawingContext * _drawingContext;
    double  _horizontalLeadingMargin;
    double  _horizontalTrailingMargin;
    bool  _iconViewLeading;
    NSArray * _iconViews;
    NSString * _preferredContentSizeCategory;
    MTVisualStylingProvider * _strokeVisualStylingProvider;
    NSDate * _summaryDate;
    UILabel<BSUIDateLabel> * _summaryDateLabel;
    UIView * _summaryIconSymbolBackgroundView;
    UIImageView * _summaryIconSymbolImageView;
    NSString * _summaryIconSymbolName;
    UIView * _summaryIconsContainerView;
    UILabel * _summaryLabel;
    bool  _summaryLabelMaterialSecondary;
    NSString * _summaryTitleFontName;
    UILabel * _summaryTitleLabel;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalLeadingMargin;
@property (nonatomic) double horizontalTrailingMargin;
@property (getter=isIconViewLeading, nonatomic) bool iconViewLeading;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSDate *summaryDate;
@property (nonatomic, copy) NSString *summaryIconSymbolName;
@property (nonatomic, retain) NSArray *summaryIconViews;
@property (getter=isSummaryLabelMaterialSecondary, nonatomic) bool summaryLabelMaterialSecondary;
@property (nonatomic, copy) NSString *summaryTitle;
@property (nonatomic, copy) NSString *summaryTitleFontName;
@property (readonly) Class superclass;

+ (id)_preferredFont:(bool)arg1 textStyle:(id)arg2 weight:(double)arg3 additionalTraits:(unsigned int)arg4;

- (void).cxx_destruct;
- (void)_addShadowForIconView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedRectForLabelLayoutFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)_dateFormatStyleForDate:(id)arg1;
- (id)_dateLabelFont;
- (id)_dateLabelPreferredFont;
- (void)_layoutSummaryDateLabel;
- (void)_layoutSummaryIconsView;
- (void)_layoutSummaryLabel;
- (void)_layoutSummaryTitleLabel;
- (unsigned long long)_maximumNumberOfLinesForSummaryText;
- (unsigned long long)_maximumNumberOfLinesForSummaryTitleText;
- (unsigned long long)_numberOfLinesForSummaryTextInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)_numberOfLinesForSummaryTitleTextInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_recycleDateLabel;
- (void)_tearDownDateLabelIfNecessary;
- (void)_updateTextAttributes;
- (void)_updateTextAttributesForDateLabel;
- (void)_updateTextAttributesForSummaryLabel;
- (void)_updateTextAttributesForSummaryTitleLabel;
- (void)_updateVisualStylingOfView:(id)arg1 style:(long long)arg2 visualStylingProvider:(id)arg3 outgoingProvider:(id)arg4;
- (void)_updateVisualStylingProvidersForIconViewIfNecessary:(id)arg1;
- (void)_updateVisualStylingProvidersForIconViewsIfNecessary;
- (void)_visualStylingProviderDidChange:(id)arg1 forCategory:(long long)arg2 outgoingProvider:(id)arg3;
- (double)_widthForIconsContainerView;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (void)dateLabelDidChange:(id)arg1;
- (void)didMoveToWindow;
- (double)horizontalLeadingMargin;
- (double)horizontalTrailingMargin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isIconViewLeading;
- (bool)isSummaryLabelMaterialSecondary;
- (void)layoutSubviews;
- (id)preferredContentSizeCategory;
- (id)requiredVisualStyleCategories;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setHorizontalLeadingMargin:(double)arg1;
- (void)setHorizontalTrailingMargin:(double)arg1;
- (void)setIconViewLeading:(bool)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setSummaryDate:(id)arg1;
- (void)setSummaryIconSymbolName:(id)arg1;
- (void)setSummaryIconViews:(id)arg1;
- (void)setSummaryLabelMaterialSecondary:(bool)arg1;
- (void)setSummaryTitle:(id)arg1;
- (void)setSummaryTitleFontName:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)summary;
- (id)summaryDate;
- (id)summaryIconSymbolName;
- (id)summaryIconViews;
- (id)summaryTitle;
- (id)summaryTitleFontName;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
