
@interface PKDashboardViewControllerFooterContainer : UIView <PKHorizontalScrollingFooterViewProtocol> {
    long long  _backdropStyle;
    _UIBackdropView * _backdropView;
    UIView<PKHorizontalScrollingFooterViewComparator> * _currentFooter;
    UIView<PKHorizontalScrollingFooterViewComparator> * _nextFooter;
    UIView * _topSeparatorView;
}

@property (nonatomic, retain) UIView<PKHorizontalScrollingFooterViewComparator> *currentFooter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView<PKHorizontalScrollingFooterViewComparator> *nextFooter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)currentFooter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)nextFooter;
- (long long)preferredBackdropStyle;
- (void)setCurrentFooter:(id)arg1;
- (void)setNextFooter:(id)arg1;
- (void)setTransitionProgress:(double)arg1;

@end
