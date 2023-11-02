
@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {
    bool  _compositionDisabled;
    bool  _isSuspended;
}

@property (nonatomic) bool compositionDisabled;
@property (nonatomic, readonly) bool shouldDynamicallySwitchComposedTextBetweenInternalAndExternal;

- (void)clearInput;
- (bool)compositionDisabled;
- (bool)containsActiveLanguage:(id)arg1 language:(id)arg2;
- (void)didUpdateInputModeProbabilities:(id)arg1;
- (void)didUpdateInputModes:(id)arg1;
- (void)enumerateInputModesWithBlock:(id /* block */)arg1;
- (unsigned int)externalIndexToInternal:(unsigned int)arg1;
- (id)externalStringToInternal:(id)arg1;
- (id)handleKeyboardInput:(id)arg1;
- (unsigned int)internalIndexToExternal:(unsigned int)arg1;
- (id)internalStringToExternal:(id)arg1;
- (bool)isUsingMultilingual;
- (id)keyboardConfiguration;
- (void*)languageModelContainer;
- (unsigned int)lexiconIDForInputMode:(id)arg1;
- (struct { struct String { unsigned short x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned char x_1_1_4; char *x_1_1_5; BOOL x_1_1_6[16]; } x1; struct String { unsigned short x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; unsigned char x_2_1_4; char *x_2_1_5; BOOL x_2_1_6[16]; } x2; struct String { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned char x_3_1_4; char *x_3_1_5; BOOL x_3_1_6[16]; } x3; struct String { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned char x_4_1_4; char *x_4_1_5; BOOL x_4_1_6[16]; } x4; struct String { unsigned short x_5_1_1; unsigned short x_5_1_2; unsigned short x_5_1_3; unsigned char x_5_1_4; char *x_5_1_5; BOOL x_5_1_6[16]; } x5; unsigned int x6; float x7; })lexiconInfoForInputMode:(id)arg1;
- (struct vector<KB::LexiconInfo, std::allocator<KB::LexiconInfo>> { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<KB::LexiconInfo *, std::allocator<KB::LexiconInfo>> { struct { /* ? */ } *x_3_1_1; } x3; })lexiconInformationVector;
- (id)lexiconLocaleOfString:(id)arg1 inputMode:(id)arg2;
- (void)loadDictionaries;
- (id)resourceInputModes;
- (void)resume;
- (void)setCompositionDisabled:(bool)arg1;
- (bool)shouldDynamicallySwitchComposedTextBetweenInternalAndExternal;
- (bool)shouldUpdateDictionary;
- (void)suspend;
- (bool)updateLanguageModelForKeyboardState;
- (void)updateLanguagePriors;
- (bool)validEnglishTransformerMultilingualConfig;
- (float)weightForInputMode:(id)arg1;

@end
