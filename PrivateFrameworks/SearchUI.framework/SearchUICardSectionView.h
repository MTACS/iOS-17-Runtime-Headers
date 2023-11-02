
@interface SearchUICardSectionView : NUIContainerStackView <NUIContainerViewDelegate, SearchUIHighlightTarget> {
    UIView * _chevronView;
    UIView * _contentView;
    UIViewController * _embeddedViewController;
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    bool  _isCompactWidth;
    UIView * _leadingTextView;
    UIView * _leadingView;
    SearchUICardSectionRowModel * _rowModel;
    UIMenu * _userReportMenu;
    UIView * _viewForForcedFocus;
}

@property (nonatomic, retain) UIView *chevronView;
@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) UIViewController *embeddedViewController;
@property (nonatomic) <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } highlightFrame;
@property (nonatomic, readonly) bool highlightFrameMatchesHighlightView;
@property (nonatomic, readonly) UIView *highlightReferenceView;
@property bool isCompactWidth;
@property (nonatomic, readonly) UIView *leadingTextView;
@property (nonatomic, readonly) UIView *leadingView;
@property (nonatomic, retain) SearchUICardSectionRowModel *rowModel;
@property (nonatomic, readonly) SFCardSection *section;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIMenu *userReportMenu;
@property (nonatomic, readonly) UIView *viewForForcedFocus;
@property (nonatomic, readonly) UIView *viewForQuickLookZoomTransitionSource;

+ (int)defaultSeparatorStyleForRowModel:(id)arg1;
+ (id)dragSubtitleForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (bool)fillsBackgroundWithContentForRowModel:(id)arg1;
+ (bool)hasLeadingImageForCardSection:(id)arg1;
+ (bool)prefersNoSeparatorAboveRowModel:(id)arg1;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInsetsForStyle:(int)arg1 cellView:(id)arg2 leadingView:(id)arg3 leadingTextView:(id)arg4;
+ (bool)supportsCustomUserReportRequestAfforance;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)chevronView;
- (bool)configureUserReportButton:(id)arg1;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (id)contentView;
- (id)description;
- (void)didInvalidateSizeAnimate:(bool)arg1;
- (id)embeddedViewController;
- (id)feedbackDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })highlightFrame;
- (bool)highlightFrameMatchesHighlightView;
- (id)highlightReferenceView;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (bool)isCompactWidth;
- (id)leadingTextView;
- (id)leadingView;
- (bool)needsInternalFocus;
- (void)openPunchout:(id)arg1 triggerEvent:(unsigned long long)arg2;
- (void)removeManualFocus;
- (void)requestRemovalFromEnclosingView;
- (void)returnKeyPressed;
- (id)rowModel;
- (id)section;
- (void)setChevronView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setIsCompactWidth:(bool)arg1;
- (void)setRowModel:(id)arg1;
- (void)setUserReportMenu:(id)arg1;
- (id)setupContentView;
- (bool)setupManualFocus;
- (void)tabKeyPressed;
- (double)trailingMarginForAccessory:(id)arg1;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;
- (void)updateWithRowModel:(id)arg1;
- (id)userReportMenu;
- (id)viewForForcedFocus;
- (id)viewForQuickLookZoomTransitionSource;

@end
