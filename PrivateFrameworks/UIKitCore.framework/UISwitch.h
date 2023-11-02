
@interface UISwitch : UIControl <NSCoding, UISwitchControl, UISwitchVisualElementProvider> {
    bool  _alwaysShowOnOffLabel;
    UIImage * _offImage;
    bool  _on;
    UIImage * _onImage;
    UIColor * _onTintColor;
    long long  _preferredStyle;
    long long  _style;
    long long  _switchStyle;
    UIColor * _thumbTintColor;
    UIColor * _tintColor;
    NSString * _title;
    UISwitchVisualElement * _visualElement;
}

@property (getter=_alwaysShowOnOffLabel, setter=_setAlwaysShowsOnOffLabel:, nonatomic) bool alwaysShowOnOffLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_impactFeedbackGenerator, setter=_setImpactFeedbackGenerator:, nonatomic, retain) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (nonatomic, retain) UIImage *offImage;
@property (getter=isOn, nonatomic) bool on;
@property (nonatomic, retain) UIImage *onImage;
@property (nonatomic, retain) UIColor *onTintColor;
@property (nonatomic) long long preferredStyle;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic) long long switchStyle;
@property (nonatomic, retain) UIColor *thumbTintColor;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UISwitchVisualElement *visualElement;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_allowsUnsupportedMacIdiomBehavior;
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(bool)arg1;
+ (void)setVisualElementProvider:(id)arg1;
+ (id)visualElementForTraitCollection:(id)arg1;
+ (id)visualElementForTraitCollection:(id)arg1 style:(long long)arg2;

- (void).cxx_destruct;
- (void)_UIAppearance_setOnTintColor:(id)arg1;
- (id)__scalarStatisticsForUserValueChangedEvent;
- (bool)_alwaysShowOnOffLabel;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_impactFeedbackGenerator;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_isFixedSize;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_refreshVisualElement;
- (void)_refreshVisualElementForTraitCollection:(id)arg1 populatingAPIProperties:(bool)arg2;
- (void)_setAlwaysShowsOnOffLabel:(bool)arg1;
- (void)_setImpactFeedbackGenerator:(id)arg1;
- (void)_setStyle:(long long)arg1;
- (bool)_shouldShowOnOffLabels;
- (void)_showingOnOffLabelChanged;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)dealloc;
- (unsigned long long)defaultAccessibilityTraits;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElementByDefault;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isOn;
- (id)offImage;
- (id)onImage;
- (id)onTintColor;
- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (long long)preferredStyle;
- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOffImage:(id)arg1;
- (void)setOn:(bool)arg1;
- (void)setOn:(bool)arg1 animated:(bool)arg2;
- (void)setOn:(bool)arg1 animated:(bool)arg2 notifyingVisualElement:(bool)arg3;
- (void)setOnImage:(id)arg1;
- (void)setOnTintColor:(id)arg1;
- (void)setPreferredStyle:(long long)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setSwitchStyle:(long long)arg1;
- (void)setThumbTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVisualElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (long long)switchStyle;
- (id)thumbTintColor;
- (id)tintColor;
- (void)tintColorDidChange;
- (id)title;
- (id)visualElement;
- (void)visualElement:(id)arg1 transitionedToOn:(bool)arg2;
- (void)visualElementHadTouchUpInside:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

- (id)sf_initWithOn:(bool)arg1 valueChangeHandler:(id /* block */)arg2;

@end
