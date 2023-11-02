
@interface TIKeyboardInputManagerTransliteration : TIKeyboardInputManagerTransliterationBase {
    NSMutableArray * _committedCandidates;
    NSArray * _currentCandidates;
    bool  _hasCandidates;
    bool  _prioritizeLatinCandidates;
    TLTransliterator * _transliterator;
    NSMapTable * _transliteratorCandidateByMecabraCandidatePointerValue;
}

@property (nonatomic, retain) NSMutableArray *committedCandidates;
@property (nonatomic, retain) NSArray *currentCandidates;
@property (nonatomic) bool hasCandidates;
@property (nonatomic) bool prioritizeLatinCandidates;
@property (nonatomic, retain) TLTransliterator *transliterator;
@property (nonatomic, retain) NSMapTable *transliteratorCandidateByMecabraCandidatePointerValue;

- (void).cxx_destruct;
- (id)autocorrectionCandidateStrings;
- (id)candidateContextByVerifyingAgainstDocumentState;
- (id)candidates;
- (id)candidatesForInputString:(id)arg1;
- (id)candidatesWithTypedString:(id)arg1 autocorrectedString:(id)arg2;
- (id)committedCandidates;
- (id)currentCandidates;
- (id)defaultCandidate;
- (void)deleteFromInputWithContext:(id)arg1;
- (id)dictionaryInputMode;
- (id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (bool)hasCandidates;
- (void*)initImplementation;
- (id)initWithConfig:(id)arg1 keyboardState:(id)arg2;
- (id)keyEventMap;
- (Class)keyEventMapClass;
- (id)keyboardBehaviors;
- (id)keyboardConfiguration;
- (void)loadFavoniusTypingModel;
- (id)mecabraCandidatePointerValueWithCandidate:(id)arg1;
- (bool)prioritizeLatinCandidates;
- (void)setCommittedCandidates:(id)arg1;
- (void)setCurrentCandidates:(id)arg1;
- (void)setHasCandidates:(bool)arg1;
- (void)setPrioritizeLatinCandidates:(bool)arg1;
- (void)setTransliterator:(id)arg1;
- (void)setTransliteratorCandidateByMecabraCandidatePointerValue:(id)arg1;
- (id)sortingMethods;
- (bool)supportsNumberKeySelection;
- (void)suspend;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(bool)arg3;
- (id)titleForSortingMethod:(id)arg1;
- (id)transliterator;
- (id)transliteratorCandidateByMecabraCandidatePointerValue;
- (bool)usesCandidateSelection;
- (id)wordCharacters;

@end
