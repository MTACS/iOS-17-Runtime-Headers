
@interface JFXPassThroughContainerView : UIView {
    <JFXPassThroughContainerViewDelegate> * _delegate;
    bool  _shouldDelegatePointInside;
}

@property (nonatomic) <JFXPassThroughContainerViewDelegate> *delegate;
@property (nonatomic) bool shouldDelegatePointInside;

- (void).cxx_destruct;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setShouldDelegatePointInside:(bool)arg1;
- (bool)shouldDelegatePointInside;

@end
