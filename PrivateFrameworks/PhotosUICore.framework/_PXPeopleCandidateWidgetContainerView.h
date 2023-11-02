
@interface _PXPeopleCandidateWidgetContainerView : UIView {
    UIView * _containedView;
    bool  _isDisappearing;
}

@property (nonatomic, retain) UIView *containedView;
@property (nonatomic) bool isDisappearing;

- (void).cxx_destruct;
- (id)containedView;
- (bool)isDisappearing;
- (void)layoutSubviews;
- (void)setContainedView:(id)arg1;
- (void)setIsDisappearing:(bool)arg1;

@end
