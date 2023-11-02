
@interface SearchUIAppIconsRowView : UIView <NUIArrangementContainer, NUIGridArrangementDataSource, SearchUIHomeScreenEngagementDelegate> {
    NUIGridArrangement * _arrangment;
    <SearchUIFeedbackDelegate> * _delegate;
    NSMutableArray * _endsSpacingHelpers;
    NSMutableArray * _iconViews;
    NSMutableArray * _itemAtIndex;
    NSMutableArray * _spacerDebuggerViews;
    NSMutableArray * _spacingHelpers;
}

@property (nonatomic, retain) NUIGridArrangement *arrangment;
@property (readonly, copy) NSString *debugDescription;
@property <SearchUIFeedbackDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *endsSpacingHelpers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *iconViews;
@property (nonatomic, retain) NSMutableArray *itemAtIndex;
@property (nonatomic, retain) NSMutableArray *spacerDebuggerViews;
@property (nonatomic, retain) NSMutableArray *spacingHelpers;
@property (readonly) Class superclass;

+ (double)numberOfIcons;

- (void).cxx_destruct;
- (id)arrangment;
- (struct CGSize { double x1; double x2; })contentLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forArrangedSubview:(id)arg2;
- (id)delegate;
- (void)didUpdateKeyboardFocusToResult:(id)arg1 cardSection:(id)arg2;
- (id)endsSpacingHelpers;
- (id)gridArrangement:(id)arg1 itemAtIndex:(long long)arg2 columns:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 rows:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 horizontalAlignment:(long long*)arg5 verticalAlignment:(long long*)arg6;
- (id)iconViews;
- (id)init;
- (id)itemAtIndex;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)layoutSubviews;
- (long long)numberOfItemsInGridArrangement:(id)arg1;
- (void)setArrangment:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndsSpacingHelpers:(id)arg1;
- (void)setIconViews:(id)arg1;
- (void)setItemAtIndex:(id)arg1;
- (void)setSpacerDebuggerViews:(id)arg1;
- (void)setSpacingHelpers:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)spacerDebuggerViews;
- (id)spacingHelpers;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateWithResultsForRow:(id)arg1;

@end
