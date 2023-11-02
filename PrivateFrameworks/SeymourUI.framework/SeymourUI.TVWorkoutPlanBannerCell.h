
@interface SeymourUI.TVWorkoutPlanBannerCell : UICollectionViewCell {
    void actions;
    void artworkView;
    void buttonStackView;
    void buttons;
    void containerView;
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void layout;
    void messageLabel;
    void textStackView;
    void titleLabel;
}

@property (nonatomic, readonly) bool canBecomeFocused;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (void)handleTappedButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;

@end
