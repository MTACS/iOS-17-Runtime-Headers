
@interface ICCollaboratorStatusView : UIView {
    void avatarView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  collaboratorStatus;
    void hasDisplayedInWindow;
    void isRemovingFromSuperview;
    void selectionViews;
    void textView;
}

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
