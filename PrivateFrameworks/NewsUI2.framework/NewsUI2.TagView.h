
@interface NewsUI2.TagView : UIView <TSAXCustomReorderMessaging> {
    void _dislikeButton;
    void _likeButton;
    void _notificationSwitch;
    void _shortcutButton;
    void accessoryView;
    void badgeView;
    void contentAccessibilityElement;
    void countLabel;
    void editingSubtitleFrame;
    void editingTitleFrame;
    void imageBorder;
    void imageView;
    void isEditing;
    void isHighlightable;
    void isHighlighted;
    void isSelectable;
    void isSelected;
    void keyCommandBlocks;
    void subtitleFrame;
    void subtitleLabel;
    void titleFrame;
    void titleLabel;
    void tsaxAccessibilityLabelForReordering;
}

@property (nonatomic, copy) NSArray *accessibilityCustomActions;
@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessibilityFrame;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, copy) NSString *tsaxAccessibilityLabelForReordering;

- (void).cxx_destruct;
- (bool)accessibilityActivate;
- (id)accessibilityCustomActions;
- (id)accessibilityElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityUserInputLabels;
- (id)accessibilityValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityCustomActions:(id)arg1;
- (void)setAccessibilityElements:(id)arg1;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityUserInputLabels:(id)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setTsaxAccessibilityLabelForReordering:(id)arg1;
- (id)title;
- (id)tsaxAccessibilityLabelForReordering;

@end
