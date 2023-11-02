
@interface SearchUIDetailedView : NUIContainerStackView <NUIContainerViewDelegate, SearchUIAccessoryViewDelegate, TLKDetailsViewDelegate> {
    NSMutableArray * _accessoryViewControllers;
    TLKStackView * _buttonAndDetailViewStackView;
    <SearchUIDetailedViewDelegate> * _buttonDelegate;
    SearchUIButtonItemProvider * _buttonItemProvider;
    TLKStackView * _buttonItemStackView;
    SearchUIAccessoryViewController * _currentAccessoryViewController;
    SearchUILeadingViewController * _currentLeadingViewController;
    TLKDetailsView * _detailsView;
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    TLKStackView * _innerContainer;
    bool  _isCompactWidth;
    bool  _isVerticalAlignment;
    NSMutableArray * _leadingViewControllers;
    SearchUIDetailedRowModel * _rowModel;
}

@property (nonatomic, retain) NSMutableArray *accessoryViewControllers;
@property (nonatomic, retain) TLKStackView *buttonAndDetailViewStackView;
@property (nonatomic) <SearchUIDetailedViewDelegate> *buttonDelegate;
@property (nonatomic, retain) SearchUIButtonItemProvider *buttonItemProvider;
@property (nonatomic, retain) TLKStackView *buttonItemStackView;
@property (nonatomic, retain) SearchUIAccessoryViewController *currentAccessoryViewController;
@property (nonatomic, retain) SearchUILeadingViewController *currentLeadingViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TLKDetailsView *detailsView;
@property (nonatomic) <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKStackView *innerContainer;
@property bool isCompactWidth;
@property (nonatomic) bool isVerticalAlignment;
@property (nonatomic, readonly) UIView *leadingTextView;
@property (nonatomic, readonly) UIView *leadingView;
@property (nonatomic, retain) NSMutableArray *leadingViewControllers;
@property (nonatomic, retain) SearchUIDetailedRowModel *rowModel;
@property (readonly) Class superclass;

+ (void)addViewIfNecessary:(id)arg1 toStackView:(id)arg2 removeFromStackViews:(id)arg3;
+ (id)bannerBadgeForRowModel:(id)arg1;

- (void).cxx_destruct;
- (id)accessoryViewControllers;
- (bool)arrangedViewMustCenter:(id)arg1;
- (id)buttonAndDetailViewStackView;
- (id)buttonDelegate;
- (id)buttonItemProvider;
- (id)buttonItemStackView;
- (bool)configureMenuForFootnoteButton:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (id)currentAccessoryViewController;
- (id)currentLeadingViewController;
- (id)detailsView;
- (void)didMoveToWindow;
- (id)feedbackDelegate;
- (void)footnoteButtonPressed;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFeedbackDelegate:(id)arg1;
- (id)innerContainer;
- (bool)isCompactWidth;
- (bool)isVerticalAlignment;
- (void)layoutSubviews;
- (id)leadingTextView;
- (id)leadingView;
- (id)leadingViewControllers;
- (id)rowModel;
- (void)setAccessoryViewControllers:(id)arg1;
- (void)setButtonAndDetailViewStackView:(id)arg1;
- (void)setButtonDelegate:(id)arg1;
- (void)setButtonItemProvider:(id)arg1;
- (void)setButtonItemStackView:(id)arg1;
- (void)setCurrentAccessoryViewController:(id)arg1;
- (void)setCurrentLeadingViewController:(id)arg1;
- (void)setDetailsView:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setInnerContainer:(id)arg1;
- (void)setIsCompactWidth:(bool)arg1;
- (void)setIsVerticalAlignment:(bool)arg1;
- (void)setLeadingViewControllers:(id)arg1;
- (void)setRowModel:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (double)trailingMarginForAccessoryViewController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLayoutMargins;
- (void)updateWithRowModel:(id)arg1;

@end
