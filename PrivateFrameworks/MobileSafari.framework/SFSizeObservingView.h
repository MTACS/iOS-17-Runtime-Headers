
@interface SFSizeObservingView : UIView {
    NSLayoutConstraint * _heightConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastLayoutSize;
    NSLayoutDimension * _observedHeightDimension;
    id /* block */  _sizeChangeCallback;
}

@property (nonatomic, retain) NSLayoutDimension *observedHeightDimension;
@property (nonatomic, copy) id /* block */ sizeChangeCallback;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)observedHeightDimension;
- (void)setObservedHeightDimension:(id)arg1;
- (void)setSizeChangeCallback:(id /* block */)arg1;
- (id /* block */)sizeChangeCallback;

@end
