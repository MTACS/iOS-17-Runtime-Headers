
@interface TIKeyboardInputManagerShapeBased : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion> {
    bool  _keepRemainingInput;
    bool  _previousActionWasAutoConfirmation;
    NSString * _remainingInput;
    NSMutableString * _searchString;
}

@property (nonatomic) bool previousActionWasAutoConfirmation;
@property (nonatomic, retain) NSString *remainingInput;
@property (nonatomic, readonly) NSMutableString *searchString;

- (void).cxx_destruct;
- (void)acceptInput;
- (bool)acceptInputString:(id)arg1;
- (void)cancelCandidatesThread;
- (id)candidateResultSet;
- (void)clearInput;
- (id)deleteFromInput:(unsigned long long*)arg1;
- (id)didAcceptCandidate:(id)arg1;
- (id)formattedSearchString;
- (bool)hasCandidates;
- (unsigned long long)initialSelectedIndex;
- (unsigned int)inputCount;
- (unsigned int)inputIndex;
- (void)inputLocationChanged;
- (bool)isHardwareKeyboardAutocorrectionEnabled;
- (id)keyboardBehaviors;
- (id)keyboardConfigurationLayoutTag;
- (void)loadDictionaries;
- (id)markedTextWithAutoconvertedCandidates;
- (void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2;
- (bool)previousActionWasAutoConfirmation;
- (id)rawInputString;
- (id)remainingInput;
- (id)searchString;
- (id)searchStringForMarkedText;
- (void)setInputIndex:(unsigned int)arg1;
- (void)setPreviousActionWasAutoConfirmation:(bool)arg1;
- (void)setRemainingInput:(id)arg1;
- (bool)shouldExtendPriorWord;
- (bool)shouldLookForCompletionCandidates;
- (id)sortingMethods;
- (bool)suppliesCompletions;
- (bool)supportsLearning;
- (bool)supportsReversionUI;
- (bool)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(bool)arg2;
- (bool)usesAutoDeleteWord;
- (bool)usesCandidateSelection;

@end
