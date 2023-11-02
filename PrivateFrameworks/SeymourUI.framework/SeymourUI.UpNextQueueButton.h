
@interface SeymourUI.UpNextQueueButton : UIButton {
    void behaviors;
    void isBeyondScrollBoundary;
    void prefersVisible;
    void presenter;
    void queueCount;
    void styleProvider;
    void visualEffectView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)primaryActionTriggered:(id)arg1;

@end
