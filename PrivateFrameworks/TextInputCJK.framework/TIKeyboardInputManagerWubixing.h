
@interface TIKeyboardInputManagerWubixing : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion> {
    TIKeyboardCandidate * _autoConfirmationCandidate;
}

@property (nonatomic, retain) TIKeyboardCandidate *autoConfirmationCandidate;

+ (Class)wordSearchClass;

- (void).cxx_destruct;
- (bool)acceptAutocorrectionCommitsInline;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (id)autoConfirmationCandidate;
- (unsigned long long)initialSelectedIndex;
- (unsigned int)inputIndex;
- (int)inputMethodType;
- (bool)isValidWubiInput:(id)arg1;
- (id)keyboardBehaviors;
- (void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2;
- (void)setAutoConfirmationCandidate:(id)arg1;
- (id)sortingMethods;
- (bool)supportsNumberKeySelection;
- (void)updateMarkedText;
- (bool)usesPunctuationKeysForRowNavigation;

@end
