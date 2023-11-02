
@interface SearchUIHorizontallyScrollingContainerView : NUIContentScrollView <NUIContainerViewDelegate, UIScrollViewDelegate> {
    NSArray * _buttonControllers;
    NSMapTable * _buttonControllersForViews;
    double  _defaultArrangedSubviewWidth;
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    UIViewController * _presentedViewController;
    NSArray * _scrollableCardSectionRowModels;
    SearchUIHorizontallyScrollingMoreResultsButtonController * _seeMoreButtonController;
    NUIContainerStackView * _stackViewToScroll;
    NSMutableSet * _visibleResultsAlreadySentBack;
}

@property (nonatomic, retain) NSArray *buttonControllers;
@property (nonatomic, retain) NSMapTable *buttonControllersForViews;
@property (readonly, copy) NSString *debugDescription;
@property double defaultArrangedSubviewWidth;
@property (readonly, copy) NSString *description;
@property (nonatomic) <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *presentedViewController;
@property (nonatomic, copy) NSArray *scrollableCardSectionRowModels;
@property (nonatomic, retain) SearchUIHorizontallyScrollingMoreResultsButtonController *seeMoreButtonController;
@property (nonatomic, retain) NUIContainerStackView *stackViewToScroll;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *visibleResultsAlreadySentBack;

- (void).cxx_destruct;
- (id)buttonControllers;
- (id)buttonControllersForViews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (double)defaultArrangedSubviewWidth;
- (id)feedbackDelegate;
- (id)init;
- (void)modalViewControllerClosed;
- (id)presentedViewController;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)scrollableCardSectionRowModels;
- (void)scrollingButtonPressed:(id)arg1;
- (id)seeMoreButtonController;
- (void)sendVisibleFeedback;
- (void)setButtonControllers:(id)arg1;
- (void)setButtonControllersForViews:(id)arg1;
- (void)setDefaultArrangedSubviewWidth:(double)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setPresentedViewController:(id)arg1;
- (void)setScrollableCardSectionRowModels:(id)arg1;
- (void)setSeeMoreButtonController:(id)arg1;
- (void)setStackViewToScroll:(id)arg1;
- (void)setVisibleResultsAlreadySentBack:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stackViewToScroll;
- (id)visibleResultsAlreadySentBack;
- (double)widthForArrangedSubview:(id)arg1;

@end
