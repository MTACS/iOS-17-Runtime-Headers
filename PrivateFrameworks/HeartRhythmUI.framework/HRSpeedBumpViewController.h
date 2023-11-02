
@interface HRSpeedBumpViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate, UIScrollViewDelegate> {
    UILabel * _bodyLabel;
    NSArray * _bubbleViews;
    NSLayoutConstraint * _contentViewBottomConstraint;
    double  _initialContentOffset;
    HRSpeedBumpItem * _item;
    UIView * _latestVisibleBubbleView;
    HRStackedButtonView * _stackedButtonView;
    bool  _stateAnimating;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) NSArray *bubbleViews;
@property (nonatomic, retain) NSLayoutConstraint *contentViewBottomConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initialContentOffset;
@property (nonatomic, retain) HRSpeedBumpItem *item;
@property (nonatomic) UIView *latestVisibleBubbleView;
@property (nonatomic, retain) HRStackedButtonView *stackedButtonView;
@property (nonatomic) bool stateAnimating;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_bodyFont;
- (void)_scrollBubbleViewToVisible:(id)arg1;
- (void)_setStackedButtonViewAsFooterView;
- (void)_setUpBodyConstraints;
- (void)_setUpBodyLabel;
- (void)_setUpBubbleViewConstraints;
- (void)_setUpBubbleViews;
- (void)_setUpStackedButtonView;
- (void)_setUpTitleConstraints;
- (void)_setUpTitleLabel;
- (double)_titleLastBaselineToBodyTop;
- (void)_updateContentViewBottomConstraintWithAnchor:(id)arg1 constant:(double)arg2;
- (void)_updateUIWithLatestVisibleBubbleView:(id)arg1 animated:(bool)arg2;
- (id)bodyLabel;
- (id)bubbleViews;
- (id)contentViewBottomConstraint;
- (id)identifierBundle;
- (id)initWithSpeedBumpItem:(id)arg1 onboarding:(bool)arg2 upgradingFromAlgorithmVersion:(long long)arg3;
- (double)initialContentOffset;
- (id)item;
- (id)latestVisibleBubbleView;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setBodyLabel:(id)arg1;
- (void)setBubbleViews:(id)arg1;
- (void)setContentViewBottomConstraint:(id)arg1;
- (void)setInitialContentOffset:(double)arg1;
- (void)setItem:(id)arg1;
- (void)setLatestVisibleBubbleView:(id)arg1;
- (void)setStackedButtonView:(id)arg1;
- (void)setStateAnimating:(bool)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpConstraints;
- (void)setUpUI;
- (id)stackedButtonView;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (bool)stateAnimating;
- (id)titleLabel;
- (void)viewDidLoad;

@end
