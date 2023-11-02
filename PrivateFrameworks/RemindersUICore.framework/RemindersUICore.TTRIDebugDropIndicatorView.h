
@interface RemindersUICore.TTRIDebugDropIndicatorView : UIView {
    void activeDropTargetView;
    void constraintsForActiveDropTargetView;
    void constraintsForInfoContainerAboveLine;
    void constraintsForInfoContainerBelowLine;
    void currentDropContext;
    void info;
    void infoContainer;
    void line;
    void lineYPositionInTargetViewConstraint;
    void shouldPositionInfoContainerAboveLine;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)updateConstraints;

@end
