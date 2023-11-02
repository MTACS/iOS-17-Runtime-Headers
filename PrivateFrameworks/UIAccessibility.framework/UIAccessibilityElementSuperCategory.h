
@interface UIAccessibilityElementSuperCategory : __UIAccessibilityElementSuperCategory_super

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (bool)_isSerializableAccessibilityElement;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (float)_accessibilityActivationDelay;
- (id)_accessibilityAutomaticIdentifier;
- (bool)_accessibilityIsFKARunningForFocusItem;
- (bool)_accessibilityProvidesOwnFrame;
- (bool)_accessibilitySetNativeFocus;
- (void)_accessibilitySetValue:(id)arg1;
- (bool)_accessibilitySupportsActivateAction;
- (bool)_accessibilitySupportsHandwriting;
- (id)_accessibilityUserTestingVisibleAncestor;
- (bool)_accessibilityUsesFrameInContainerSpace;
- (bool)_accessibilityViewHierarchyHasNativeFocus;
- (bool)accessibilityActivate;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (void)accessibilityDecrement;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (id)accessibilityPath;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)accessibilityZoomInAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)accessibilityZoomOutAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (id)description;
- (id)focusGroupIdentifier;
- (id)init;
- (id)initWithAccessibilityContainer:(id)arg1;
- (bool)isAccessibilityElement;

@end
