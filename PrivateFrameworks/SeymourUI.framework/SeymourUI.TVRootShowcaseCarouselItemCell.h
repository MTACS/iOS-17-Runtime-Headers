
@interface SeymourUI.TVRootShowcaseCarouselItemCell : SeymourUI.TVFocusableCollectionViewCell {
    void artworkView;
    void avPlayer;
    void avPlayerLayer;
    void blurView;
    void buttonActions;
    void buttonStackView;
    void buttonWidthConstraint;
    void buttons;
    void captionLabel;
    void carouselItemDelegate;
    void delegate;
    void focusContainerGuide;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void layout;
    void subtitleLabel;
    void textStackView;
    void titleLabel;
}

@property (nonatomic, readonly) UILabel *accessibilityCaptionLabel;
@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)accessibilityCaptionLabel;
- (id)accessibilitySubtitleLabel;
- (id)accessibilityTitleLabel;
- (bool)canBecomeFocused;
- (void)didMoveToWindow;
- (void)handleTappedButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)prepareForReuse;
- (void)restartVideo;

@end
