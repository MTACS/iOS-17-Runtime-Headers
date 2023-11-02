
@interface PLPillContentWrapperView : UIView <PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    long long  _appearState;
    NSLayoutConstraint * _bottomConstraint;
    PLPillContentItem * _contentItem;
    UIView * _contentView;
    NSString * _preferredContentSizeCategory;
    NSLayoutConstraint * _topConstraint;
    bool  _topConstraintBreakable;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, readonly) long long appearState;
@property (nonatomic, retain) PLPillContentItem *contentItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (getter=isTopConstraintBreakable, nonatomic) bool topConstraintBreakable;

- (void).cxx_destruct;
- (id)_contentLabel;
- (void)_makeBottomConstraintBreakable;
- (void)_makeTopConstraintBreakable;
- (void)_setContentView:(id)arg1 transitionCoordinator:(id)arg2;
- (void)_updateConstraintsPriority;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (long long)appearState;
- (void)beginAppearanceTransition:(bool)arg1;
- (id)contentItem;
- (void)endAppearanceTransition:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isTopConstraintBreakable;
- (id)preferredContentSizeCategory;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setContentItem:(id)arg1;
- (void)setContentItem:(id)arg1 transitionCoordinator:(id)arg2;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setTopConstraintBreakable:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateWithContentItem:(id)arg1;

@end
