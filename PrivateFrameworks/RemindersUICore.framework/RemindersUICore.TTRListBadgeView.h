
@interface RemindersUICore.TTRListBadgeView : UIView <UIPointerInteractionDelegate> {
    void accessibilityDelegate;
    void backgroundLayer;
    void backgroundParams;
    void contentInset;
    void customSmartListActionViews;
    void emoji;
    void emojiBackgroundLayerGradientSettings;
    void emojiFontSize;
    void emojiView;
    void imageParams;
    void imageView;
    void isContextMenuTarget;
    void layerColorsDirty;
    void listColorInfo;
    void nonEmojiBackgroundLayerGradientSettings;
    void selected;
    void selectedLayer;
    void selectionParams;
    void shadowLayer;
    void shadowParams;
    void ttrAccessibilityName;
    void ttrAccessibilityShouldIgnoreAccessibilityName;
    void ttrAccessibilityShouldIgnoreTintColorValue;
}

@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic) bool isAccessibilityElement;
@property (nonatomic) bool ttrAccessibilityShouldIgnoreAccessibilityName;
@property (nonatomic) bool ttrAccessibilityShouldIgnoreTintColorValue;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (bool)accessibilityActivate;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityUserInputLabels;
- (id)accessibilityValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityUserInputLabels:(id)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;
- (void)setTtrAccessibilityShouldIgnoreAccessibilityName:(bool)arg1;
- (void)setTtrAccessibilityShouldIgnoreTintColorValue:(bool)arg1;
- (void)tintColorDidChange;
- (bool)ttrAccessibilityShouldIgnoreAccessibilityName;
- (bool)ttrAccessibilityShouldIgnoreTintColorValue;

@end
