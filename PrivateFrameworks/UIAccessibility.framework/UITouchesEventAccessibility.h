
@interface UITouchesEventAccessibility : __UITouchesEventAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (bool)_accessibilityAutomationHitTest;
- (id)_accessibilityHitTestOptions;
- (id)_accessibilityHitTestStartsAtElement;
- (unsigned short)_accessibilityHitTestType;
- (void)_setAccessibilityAutomationHitTest:(bool)arg1;
- (void)_setAccessibilityHitTestOptions:(id)arg1;
- (void)_setAccessibilityHitTestStartsAtElement:(id)arg1;
- (void)_setAccessibilityHitTestType:(unsigned short)arg1;

@end
