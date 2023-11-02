
@interface WFInspectorPaneSegmentedControlHostingView : UIView {
    void delegate;
    void segmentedControl;
    void selectedPane;
    void showsDetailsButton;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1 showsDetailsButton:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
