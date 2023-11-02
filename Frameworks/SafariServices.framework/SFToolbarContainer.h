
@interface SFToolbarContainer : UIView {
    double  _minimumWidth;
    UIToolbar * _toolbar;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _toolbarInsets;
}

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviews;

@end
