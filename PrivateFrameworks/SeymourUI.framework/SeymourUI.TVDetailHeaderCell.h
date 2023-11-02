
@interface SeymourUI.TVDetailHeaderCell : UICollectionViewCell {
    void accessibilityMediaTags;
    void buttonActions;
    void buttonStackView;
    void buttons;
    void captionTagsLabel;
    void delegate;
    void descriptionStack;
    void descriptionTextView;
    void focusContainerGuide;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void layout;
    void onElementAppearance;
    void onElementDisappearance;
    void onImpressionableBoundsChange;
    void onVisibleBoundsChange;
    void traitsTextView;
    void traitsWidthConstraint;
}

@property (nonatomic, readonly) UILabel *accessibilityCaptionTagsLabel;
@property (nonatomic, readonly) UITextView *accessibilityDescriptionLabel;
@property (nonatomic, copy) NSArray *accessibilityMediaTags;
@property (nonatomic, readonly) UITextView *accessibilityTraitsLabel;
@property (nonatomic, readonly) bool canBecomeFocused;

- (void).cxx_destruct;
- (id)accessibilityCaptionTagsLabel;
- (id)accessibilityDescriptionLabel;
- (id)accessibilityMediaTags;
- (id)accessibilityTraitsLabel;
- (bool)canBecomeFocused;
- (void)handleTappedButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAccessibilityMediaTags:(id)arg1;

@end
