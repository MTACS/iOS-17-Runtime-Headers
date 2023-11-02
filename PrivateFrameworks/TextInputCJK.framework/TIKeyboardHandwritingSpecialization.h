
@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (bool)canHandleKeyHitTest;
- (id)keyboardBehaviors;
- (id)nonstopPunctuationCharacters;
- (id)replacementForDoubleSpace;
- (bool)shouldExtendPriorWord;
- (bool)supportsLearning;
- (bool)supportsReversionUI;
- (id)wordSeparator;

@end
