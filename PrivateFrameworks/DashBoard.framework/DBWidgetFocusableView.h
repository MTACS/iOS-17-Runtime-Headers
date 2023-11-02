
@interface DBWidgetFocusableView : UIView {
    <DBWidgetFocusableViewDelegate> * _delegate;
    CRSDashboardFocusableItem * _focusableItem;
}

@property (nonatomic) <DBWidgetFocusableViewDelegate> *delegate;
@property (nonatomic, retain) CRSDashboardFocusableItem *focusableItem;

- (void).cxx_destruct;
- (void)_selected;
- (bool)canBecomeFocused;
- (id)delegate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusableItem;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isUserInteractionEnabled;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFocusableItem:(id)arg1;

@end
