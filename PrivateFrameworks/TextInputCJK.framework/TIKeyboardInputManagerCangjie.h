
@interface TIKeyboardInputManagerCangjie : TIKeyboardInputManagerShapeBased {
    bool  _suchengEnabled;
    bool  _supportsEnglish;
}

@property (nonatomic) bool suchengEnabled;
@property (nonatomic) bool supportsEnglish;

+ (Class)wordSearchClass;

- (void)addInput:(id)arg1 withContext:(id)arg2;
- (id)cangjieAlphabetSet;
- (unsigned long long)cangjieInputType:(id)arg1 fromPopupVariant:(bool)arg2;
- (id)cangjieSet;
- (id)deleteFromInput:(unsigned long long*)arg1;
- (bool)firstCandidateIsEnglish;
- (id)formattedSearchString;
- (bool)isPunctuationInput;
- (id)keyboardBehaviors;
- (id)nonstopPunctuationCharacters;
- (void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2;
- (bool)selectedCandidateIsEnglish;
- (void)setSuchengEnabled:(bool)arg1;
- (void)setSupportsEnglish:(bool)arg1;
- (id)sortingMethods;
- (bool)suchengEnabled;
- (bool)supportsEnglish;
- (bool)supportsNumberKeySelection;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(bool)arg3;
- (void)syncToLayoutState:(id)arg1;
- (void)syncWordSearch;
- (bool)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(bool)arg2;
- (void)updateMarkedText;

@end
