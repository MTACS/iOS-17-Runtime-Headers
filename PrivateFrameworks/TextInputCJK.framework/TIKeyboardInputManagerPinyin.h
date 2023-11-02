
@interface TIKeyboardInputManagerPinyin : TIKeyboardInputManagerChinesePhonetic

- (bool)acceptAutocorrectionCommitsInline;
- (void)adjustPhraseBoundaryInForwardDirection:(bool)arg1 granularity:(int)arg2;
- (bool)currentShuangpinTypeUsesSemicolon;
- (unsigned long long)initialSelectedIndex;
- (bool)isShuangpinSemicolon:(id)arg1;
- (bool)isSpecialInput:(id)arg1;
- (id)keyboardBehaviors;
- (id)remapInput:(id)arg1 isFacemarkInput:(bool*)arg2;
- (bool)shouldSearchCompletionForSubstrings;
- (bool)supportsPairedPunctutationInput;
- (bool)usesAutoDeleteWord;
- (bool)usesGeometryModelData;
- (bool)usesPunctuationKeysForRowNavigation;
- (id)validCharacterSetForAutocorrection;

@end
