
@interface UITextCheckingController : NSObject {
    <UITextCheckingClient> * _client;
    double  _lastPauseTimer;
    NSTimer * _pauseTimer;
    long long  _prechangeCheckingSequenceNumber;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _previousCheckedSelectedRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _previousCheckedSentenceRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectedRangeFromPreviousUnchecked;
    struct __tccClientFlags { 
        unsigned int respondsToAutocorrectionType : 1; 
        unsigned int respondsToSpellCheckingType : 1; 
        unsigned int respondsToSmartQuotesType : 1; 
        unsigned int respondsToSmartDashesType : 1; 
        unsigned int respondsToSmartInsertDeleteType : 1; 
        unsigned int respondsToContinuousSpellCheckingEnabled : 1; 
    }  _tccClientFlags;
    UITextChecker * _textChecker;
}

@property (readonly) <UITextCheckingClient> *client;

- (void).cxx_destruct;
- (void)_addCorrectionUnderlinesForCandidates:(id)arg1 ranges:(id)arg2 inSentenceRange:(id)arg3;
- (void)_addGrammarAttributesForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 details:(id)arg2 inAnnotatedString:(id)arg3;
- (void)_handleGrammarCheckingResults:(id)arg1 sequenceNumber:(long long)arg2 forSentenceRange:(id)arg3 autocorrectionCount:(unsigned long long*)arg4;
- (void)_pauseTimer:(id)arg1;
- (id)annotatedStringWithValidAnnotationsForAnnotatedString:(id)arg1;
- (id)annotatedSubstringForRange:(id)arg1;
- (void)applyGrammarCheckingIndication;
- (void)checkGrammarForSentenceInRange:(id)arg1 onPause:(bool)arg2;
- (void)checkSpellingForSelectionChangeFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)checkSpellingForWordInRange:(id)arg1;
- (id)client;
- (void)considerTextCheckingForRange:(id)arg1;
- (bool)continuousSpellCheckingEnabled;
- (void)dealloc;
- (void)didChangeSelectionFromRange:(id)arg1;
- (void)didChangeTextInRange:(id)arg1;
- (void)feedbackForGrammarMarkersFromWordsInRange:(id)arg1 replacementText:(id)arg2;
- (bool)foundApostropheAfterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithClient:(id)arg1;
- (void)insertedTextInRange:(id)arg1;
- (void)invalidate;
- (void)invalidateTimers;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nsRangeForTextRange:(id)arg1;
- (bool)performFinalGrammarChecking;
- (bool)performFinalGrammarCheckingWithAutocorrection:(bool)arg1;
- (void)preheatTextChecker;
- (bool)rangeIsSuitableForGrammarAutocorrections:(id)arg1;
- (void)removeGrammarAnnotationFromWordAtPosition:(id)arg1;
- (void)removeGrammarMarkersFromWordsInRange:(id)arg1;
- (void)removeSpellingMarkersFromWordInRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })terminatedSentenceRangeInTextRange:(id)arg1;
- (id)textChecker;
- (id)validAnnotations;
- (void)willReplaceTextInRange:(id)arg1 withText:(id)arg2;

@end
