
@interface SBFluidSwitcherItemContainerHeaderView : UIView <PTSettingsKeyObserver> {
    <SBFluidSwitcherItemContainerHeaderViewDelegate> * _delegate;
    NSMutableArray * _iconImageViewReusePool;
    double  _iconSideLength;
    NSMutableDictionary * _itemsToIconImageViews;
    NSMutableDictionary * _itemsToMultiWindowIndicatorViews;
    NSMutableDictionary * _itemsToSubtitleLabelViews;
    NSMutableDictionary * _itemsToTitleLabels;
    NSMutableArray * _multiWindowIndicatorViewReusePool;
    double  _multipleWindowsIndicatorSideLength;
    double  _spacingBetweenBoundsCenterAndSecondIcon;
    double  _spacingBetweenIconAndLabel;
    double  _spacingBetweenLabelAndMultipleWindowsIndicator;
    double  _spacingBetweenLabelAndSecondIcon;
    double  _spacingBetweenLeadingEdgeAndIcon;
    double  _spacingBetweenSnapshotAndDescriptionLabelBaseline;
    double  _spacingBetweenSnapshotAndIcon;
    double  _spacingBetweenTitleAndSubtitleBaseline;
    double  _spacingBetweenTrailingEdgeAndLabels;
    NSMutableArray * _subtitleLabelReusePool;
    MTVisualStyling * _subtitleVisualStyling;
    long long  _subtitleVisualStylingInterfaceStyle;
    UITapGestureRecognizer * _tapGestureRecognizer;
    double  _textAlpha;
    NSArray * _titleItems;
    NSMutableArray * _titleLabelReusePool;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <SBFluidSwitcherItemContainerHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double preferredHeaderHeight;
@property (readonly) Class superclass;
@property (nonatomic) double textAlpha;
@property (nonatomic, copy) NSArray *titleItems;

+ (double)distanceFromBoundingLeadingEdgeToIconTrailingEdge;

- (void).cxx_destruct;
- (void)_applyPrototypeSettings;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (id)_makeMultipleWindowsIndicatorView;
- (id)_multiWindowIndicatorAccessibilityIdentifierForDisplayItem:(id)arg1;
- (id)_subtitleLabelFont;
- (id)_titleLabelFont;
- (void)_updateTitleAlpha;
- (void)_updateVisualStylingWithTitleItems:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (double)preferredHeaderHeight;
- (void)setTextAlpha:(double)arg1;
- (void)setTitleItems:(id)arg1;
- (void)setTitleItems:(id)arg1 animated:(bool)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (double)textAlpha;
- (id)titleItems;

@end
