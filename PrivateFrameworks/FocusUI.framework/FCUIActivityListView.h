
@interface FCUIActivityListView : UIScrollView <FCUIContentSizeCategoryAdjusting> {
    bool  _contentSizeValid;
    FCUIActivityListContentView * _contentView;
    bool  _footerPinnedToBottom;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialContentOffset;
    UIView<FCUIActivityDisplaying><FCUIExpandingContracting> * _isolatedActivityView;
}

@property (nonatomic, copy) NSArray *activityViews;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFooterPinnedToBottom, nonatomic) bool footerPinnedToBottom;
@property (nonatomic, retain) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activityViewForRepresentedActivity:(id)arg1;
- (void)_configureContentViewIfNecessary;
- (struct CGSize { double x1; double x2; })_contentSizeForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentViewFrameForContentSize:(struct CGSize { double x1; double x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_invalidateContentSize;
- (id)_orderedSubviewsIncludingHeader:(bool)arg1 andFooter:(bool)arg2;
- (void)_recalculateContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_setContractedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 viaResizeWithRepresentedActivity:(id)arg2 transitionCoordinator:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_setContractedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 viaScaleWithRepresentedActivity:(id)arg2 transitionCoordinator:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_setExpandedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 initialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 representedActivity:(id)arg3 anchorActivityView:(id)arg4 collapsedSizeBlock:(id /* block */)arg5 preludeBlock:(id /* block */)arg6 activityViewAnimationBlock:(id /* block */)arg7 transitionCoordinator:(id)arg8;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_setExpandedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 initialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 viaResizeWithRepresentedActivity:(id)arg3 transitionCoordinator:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_setExpandedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 initialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 viaScaleWithRepresentedActivity:(id)arg3 transitionCoordinator:(id)arg4;
- (id)activityViews;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (void)endIsolation;
- (id)footerView;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isFooterPinnedToBottom;
- (void)isolateActivityView:(id)arg1 withInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)layoutSubviews;
- (void)setActivityViews:(id)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })setContractedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 representedActivity:(id)arg2 presentationStyle:(long long)arg3 transitionCoordinator:(id)arg4;
- (void)setExpandedActivityView:(id)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })setExpandedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 initialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 representedActivity:(id)arg3 presentationStyle:(long long)arg4 transitionCoordinator:(id)arg5;
- (void)setFooterPinnedToBottom:(bool)arg1;
- (void)setFooterView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHeaderView:(id)arg1;
- (void)setNeedsLayout;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)touchesShouldCancelInContentView:(id)arg1;

@end
