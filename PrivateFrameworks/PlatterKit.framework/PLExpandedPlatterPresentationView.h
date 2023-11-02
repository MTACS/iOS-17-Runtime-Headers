
@interface PLExpandedPlatterPresentationView : UIView <PLContentSizeManaging, UIScrollViewDelegate> {
    <PLExpandedPlatterPresentationViewDelegate> * _delegate;
    UIView<PLExpandedPlatter><PLContentSizeCategoryAdjusting> * _expandedPlatterView;
    UIViewController<PLClickPresentationInteractionPresentable> * _presentableViewController;
    UIScrollView * _scrollView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PLExpandedPlatterPresentationViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView<PLExpandedPlatter><PLContentSizeCategoryAdjusting> *expandedPlatterView;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController<PLClickPresentationInteractionPresentable> *presentableViewController;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureExpandedPlatterViewIfNecessary;
- (void)_configureScrollViewIfNecessary;
- (void)_dismissExpandedPlatterWithTrigger:(long long)arg1;
- (void)_handleDismissButton:(id)arg1;
- (double)_translationWithVelocity:(double)arg1 acceleration:(double)arg2;
- (struct CGSize { double x1; double x2; })contentSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)delegate;
- (id)expandedPlatterView;
- (void)forwardInvocation:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)presentableViewController;
- (bool)respondsToSelector:(SEL)arg1;
- (id)scrollView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentableViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentWithSize:(struct CGSize { double x1; double x2; })arg1;

@end
