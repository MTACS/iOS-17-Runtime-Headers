
@interface NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewControllerView : UIView <UIGestureRecognizerDelegate> {
    bool  _containsUnmanagedContent;
    <NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewControllerViewDelegate> * _delegate;
    UILabel * _overflowingLabel;
    UITapGestureRecognizer * _tapGestureRecongizer;
    UISegmentedControl * _unmanagedSegmentControl;
    UILabel * _unmanagedTitleLabel;
    UIView * _unmanagedView;
}

@property (nonatomic) bool containsUnmanagedContent;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCSupplementaryViewPrototypeRecipeContentUnmanagedContentViewControllerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_unmanagedViewTapped;
- (bool)containsUnmanagedContent;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (void)setContainsUnmanagedContent:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
