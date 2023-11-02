
@interface SeymourUI.TVSessionInstructionsView : UIView {
    void gymKitConnectedView;
    void gymKitConnectingView;
    void gymKitLabel;
    void imageView;
    void presenter;
    void stackView;
    void startWorkoutView;
    void topOffest;
    void workoutDetailLabel;
    void workoutTitleLabel;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredFocusEnvironments;
- (void)startButtonTapped;

@end
