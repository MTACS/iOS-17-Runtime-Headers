
@interface NSObject_QSSupport : __NSObject_QSSupport_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (bool)_accessibilityIsTextInput;
- (bool)_accessibilityIsTextInteraction;
- (id)_accessibilityQuickSpeakContent;
- (id)_accessibilityQuickSpeakEnclosingSentence:(id*)arg1;
- (id)_accessibilityQuickSpeakTokenizer;
- (id)_accessibilitySentenceRectsForRange:(id)arg1;
- (id)_accessibilityTextRectsForRange:(id)arg1 singleTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (id)_accessibilityUITextInput;

@end
