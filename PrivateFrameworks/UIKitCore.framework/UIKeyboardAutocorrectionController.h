
@interface UIKeyboardAutocorrectionController : NSObject {
    TIAutocorrectionList * _autocorrectionList;
    NSHashTable * _autocorrectionObservers;
    bool  _hasPendingAutocorrection;
    unsigned long long  _maximumNumberOfCandidates;
    bool  _needsAutocorrection;
    NSMutableDictionary * _recentCandidates;
    bool  _requestedAutocorrection;
    unsigned long long  _signpostToken;
    TIAutocorrectionList * _textSuggestionList;
}

@property (nonatomic, readonly) TIKeyboardCandidate *autocorrection;
@property (nonatomic, retain) TIAutocorrectionList *autocorrectionList;
@property (nonatomic, readonly) bool hasActiveObservers;
@property (nonatomic) unsigned long long maximumNumberOfCandidates;
@property (nonatomic, readonly) bool requestedAutocorrection;
@property (nonatomic, readonly) NSArray *textCompletions;
@property (nonatomic, retain) TIAutocorrectionList *textSuggestionList;

- (void).cxx_destruct;
- (void)addAutocorrectionObserver:(id)arg1;
- (id)autocorrection;
- (id)autocorrectionList;
- (void)clearAutocorrection;
- (void)clearAutocorrectionAndNotifyObservers:(bool)arg1;
- (void)clearAutofillAndTextSuggestions;
- (bool)hasActiveObservers;
- (bool)hasAutocorrection;
- (bool)hasAutofillCandidates;
- (bool)hasContinuousPathConversions;
- (bool)hasProactiveCandidates;
- (bool)hasTextSuggestionCandidates;
- (id)init;
- (unsigned long long)maximumNumberOfCandidates;
- (void)removeAutocorrectionObserver:(id)arg1;
- (void)requestAutocorrectionWithExecutionContext:(id)arg1;
- (bool)requestedAutocorrection;
- (void)setAutocorrectionList:(id)arg1;
- (void)setMaximumNumberOfCandidates:(unsigned long long)arg1;
- (void)setNeedsAutocorrection;
- (void)setTextSuggestionList:(id)arg1;
- (id)storedListForCandidate:(id)arg1;
- (id)textCompletions;
- (id)textSuggestionList;
- (void)updateAfterShiftStateChange;

@end
