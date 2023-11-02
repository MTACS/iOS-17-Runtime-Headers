
@interface TIKeyboardInputManagerBase : NSObject {
    bool  _hasHandledInput;
    <TIKeyboardInputManagerLogging> * _inputManagerLogger;
    TIInputMode * _inputMode;
    <TITypologyPreferences> * _typologyPreferences;
}

@property (nonatomic, readonly) NSString *currentInputModeIdentifier;
@property (nonatomic, readonly) bool hasHandledInput;
@property (nonatomic, retain) <TIKeyboardInputManagerLogging> *inputManagerLogger;
@property (nonatomic, readonly) TIInputMode *inputMode;
@property (nonatomic, retain) <TITypologyPreferences> *typologyPreferences;

- (void).cxx_destruct;
- (void)acceptingCandidateWithTrigger:(id)arg1;
- (void)addSynthesizedTouchToInput:(id)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(bool)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(bool)arg1 granularity:(int)arg2;
- (bool)advancedModelsLoaded;
- (void)candidateRejected:(id)arg1;
- (void)candidatesOfferedFeedback:(id)arg1 keyboardState:(id)arg2;
- (void)changingContextWithTrigger:(id)arg1;
- (void)clearHumanReadableTrace;
- (id)configurationPropertyList;
- (id)currentInputModeIdentifier;
- (long long)deletionCountForString:(id)arg1;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 candidateHandler:(id)arg3;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 candidateHandler:(id)arg3;
- (id)generateInlineCompletions:(id)arg1 withPrefix:(id)arg2;
- (id)generateRefinementsForCandidate:(id)arg1;
- (id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (id)handleKeyboardInput:(id)arg1;
- (bool)hasHandledInput;
- (id)humanReadableTrace;
- (id)init;
- (id)initWithInputMode:(id)arg1 keyboardState:(id)arg2;
- (id)inputManagerLogger;
- (id)inputMode;
- (bool)isHardwareKeyboardAutocorrectionEnabled;
- (id)keyboardConfiguration;
- (void)lastAcceptedCandidateCorrected;
- (void)logDiscoverabilityEvent:(int)arg1 userInfo:(id)arg2;
- (long long)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)prepareForKeyboardActivity;
- (void)prepareForKeyboardInactivity:(int)arg1;
- (void)registerLearning:(id)arg1 fullCandidate:(id)arg2 keyboardState:(id)arg3 mode:(id)arg4;
- (void)registerLearningForCompletion:(id)arg1 fullCompletion:(id)arg2 context:(id)arg3 prefix:(id)arg4 mode:(id)arg5;
- (id)resourceInputModes;
- (void)resume;
- (void)runMaintenanceTask;
- (void)setInputManagerLogger:(id)arg1;
- (void)setOriginalInput:(id)arg1;
- (void)setTypologyPreferences:(id)arg1;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })smartSelectionRangeForTextInDocument:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (void)suspend;
- (void)syncToKeyboardState:(id)arg1;
- (bool)syncToKeyboardState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)textAccepted:(id)arg1 fromPredictiveInputBar:(bool)arg2 withInput:(id)arg3;
- (id)typologyPreferences;

@end
