
@interface SeymourUI.TVFilterResultDetailHeaderCell : UICollectionViewCell {
    void actionLabel;
    void artworkView;
    void buttonStackView;
    void delegate;
    void floatingView;
    void focusGuide;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void labelStackView;
    void labelStackViewTrailingConstraint;
    void layout;
    void subtitleLabel;
    void titleLabel;
}

@property (nonatomic, readonly) UILabel *accessibilityActionLabel;
@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (id)accessibilityActionLabel;
- (id)accessibilitySubtitleLabel;
- (id)accessibilityTitleLabel;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredFocusEnvironments;
- (void)prepareForReuse;
- (void)primaryActionButtonPressed:(id)arg1;
- (void)secondaryActionButtonPressed:(id)arg1;

@end
