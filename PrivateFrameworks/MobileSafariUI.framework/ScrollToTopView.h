
@interface ScrollToTopView : UIView {
    id /* block */  _showBarsBlock;
    id /* block */  _targetBlock;
}

@property (nonatomic, readonly) double defaultHeight;
@property (nonatomic, copy) id /* block */ showBarsBlock;
@property (nonatomic, copy) id /* block */ targetBlock;

- (void).cxx_destruct;
- (void)_showBars;
- (void)_tappedScrollToTopView:(id)arg1;
- (id)_targetScrollView;
- (double)defaultHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTargetBlock:(id /* block */)arg1;
- (void)setShowBarsBlock:(id /* block */)arg1;
- (void)setTargetBlock:(id /* block */)arg1;
- (id /* block */)showBarsBlock;
- (id /* block */)targetBlock;

@end
