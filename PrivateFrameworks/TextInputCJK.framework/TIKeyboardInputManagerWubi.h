
@interface TIKeyboardInputManagerWubi : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion> {
    TIKeyboardCandidate * _autoConfirmationCandidate;
}

@property (nonatomic, retain) TIKeyboardCandidate *autoConfirmationCandidate;

+ (Class)wordSearchClass;

- (void).cxx_destruct;
- (bool)acceptInputString:(id)arg1;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (id)autoConfirmationCandidate;
- (void)checkAutocorrectionDictionaries;
- (id)deleteFromInput:(unsigned long long*)arg1;
- (id)formattedSearchString;
- (int)inputMethodType;
- (id)inputsToReject;
- (bool)isWubi:(id)arg1;
- (void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2;
- (void)openCandidateGenerationContextWithCandidateHandler:(id)arg1;
- (void)pushCandidateGenerationContextWithResults:(id)arg1;
- (void)setAutoConfirmationCandidate:(id)arg1;
- (void)setInSplitKeyboardMode:(bool)arg1;
- (bool)shouldAddModifierSymbolsToWordCharacters;
- (bool)supportsPairedPunctutationInput;
- (bool)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(bool)arg2;

@end
