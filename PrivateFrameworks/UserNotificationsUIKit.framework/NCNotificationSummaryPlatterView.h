
@interface NCNotificationSummaryPlatterView : PLPlatterView <NCNotificationListDimmable, NCNotificationSummaryContentDisplaying> {
    UIView * _stackDimmingView;
    NCNotificationSummaryContentView * _summaryContentView;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isIconViewLeading, nonatomic) bool iconViewLeading;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, copy) NSDate *summaryDate;
@property (nonatomic, copy) NSString *summaryIconSymbolName;
@property (nonatomic, retain) NSArray *summaryIconViews;
@property (nonatomic, copy) NSString *summaryTitle;
@property (nonatomic, copy) NSString *summaryTitleFontName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureSummaryContentViewIfNecessary;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateStackDimmingVisualStyling;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (void)configureStackDimmingForTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)didMoveToSuperview;
- (id)initWithRecipe:(long long)arg1;
- (bool)isIconViewLeading;
- (void)layoutSubviews;
- (id)requiredVisualStyleCategories;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setIconViewLeading:(bool)arg1;
- (void)setSummary:(id)arg1;
- (void)setSummaryDate:(id)arg1;
- (void)setSummaryIconSymbolName:(id)arg1;
- (void)setSummaryIconViews:(id)arg1;
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

@end
