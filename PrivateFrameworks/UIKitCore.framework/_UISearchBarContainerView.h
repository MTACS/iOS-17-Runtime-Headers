
@interface _UISearchBarContainerView : UIView {
    int  _resizingMask;
    bool  _shouldSendContainerSafeAreaInsetsDidChange;
    UIView * _subview;
}

- (void).cxx_destruct;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)_didRemoveSubview:(id)arg1;
- (void)_uncontainerSubview:(id)arg1;
- (void)enforceSubviewAtBottomIfNecessary;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)willRemoveSubview:(id)arg1;

@end
