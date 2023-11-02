
@interface TITypingEffortAnalyzer : NSObject <TITypingSessionAnalyzing> {
    TITypingSessionAligned * _alignedSession;
    bool  _emojiPlaneActive;
    bool  _emojiSearchActive;
    bool  _hasCursorMovement;
    bool  _hasEmojiInput;
    TITypingSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCursorMovement;
@property (nonatomic, readonly) bool hasEmojiInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addActionsForArrowKey:(id)arg1 toActionSummary:(id)arg2 emojiSearchMode:(bool)arg3;
- (void)addActionsForCursorEvent:(id)arg1 lastAction:(id)arg2 nextAction:(id)arg3 toActionSummary:(id)arg4 emojiSearchMode:(bool)arg5;
- (void)addActionsForCut:(id)arg1 toActionSummary:(id)arg2 emojiSearchMode:(bool)arg3;
- (void)addActionsForDeleteWord:(id)arg1 toActionSummary:(id)arg2 emojiSearchMode:(bool)arg3;
- (void)addActionsForDocumentStateChange:(id)arg1 toActionSummary:(id)arg2 emojiSearchMode:(bool)arg3;
- (void)addActionsForPaste:(id)arg1 toActionSummary:(id)arg2 emojiSearchMode:(bool)arg3;
- (void)addActionsForWordEntry:(id)arg1 toActionSummary:(id)arg2 emojiSearchMode:(bool)arg3;
- (void)addCountsForAlignedEntry:(id)arg1 toOutputSummary:(id)arg2;
- (void)addCountsForEmojiInputs:(id)arg1 toOutputSummary:(id)arg2;
- (void)addCountsForPropertyWithName:(id)arg1 andEmojiSearchPropertyName:(id)arg2 contributesToTotal:(bool)arg3 toActionSummary:(id)arg4 emojiSearchMode:(bool)arg5;
- (void)addCountsForWord:(id)arg1 toOutputSummary:(id)arg2;
- (void)addKeyboardInputActionsForKeyboardInputs:(id)arg1 inputMode:(id)arg2 toActionSummary:(id)arg3 andKeyboardInputTouches:(id)arg4 emojiSearchMode:(bool)arg5;
- (void)addPathAndCandidateBarActionsForWordEntry:(id)arg1 toActionSummary:(id)arg2 andPathTouches:(id)arg3 emojiSearchMode:(bool)arg4;
- (void)addPathWeightActionsForTouches:(id)arg1 withLayout:(id)arg2 forWord:(id)arg3 toActionSummary:(id)arg4 emojiSearchMode:(bool)arg5;
- (void)addSpecialKeyActionsForFirstTouch:(id)arg1 andLastTouch:(id)arg2 fromLayout:(id)arg3 toActionSummary:(id)arg4 emojiSearchMode:(bool)arg5;
- (void)addTouchRelatedActionsForTouches:(id)arg1 layouts:(id)arg2 acceptedCandidate:(id)arg3 toActionSummary:(id)arg4 keyboardInputTouches:(id)arg5 pathTouches:(id)arg6 emojiSearchMode:(bool)arg7;
- (bool)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3;
- (id)countActions;
- (int)countComposedCharactersInText:(id)arg1;
- (id)countOutput;
- (void)dispatchEventWithActionSummary:(id)arg1 outputSummary:(id)arg2;
- (unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2;
- (bool)hasCursorMovement;
- (bool)hasEmojiInKeyboardInputs:(id)arg1;
- (bool)hasEmojiInput;
- (id)init;
- (bool)isEmojiSearchCandidateSelection:(id)arg1;
- (bool)isFlickInput:(id)arg1;
- (bool)isPopupVariantInput:(id)arg1 inputMode:(id)arg2;
- (bool)isTenKeyInputMode:(id)arg1;
- (id)keyStringWithCode:(long long)arg1 fromLayout:(id)arg2;
- (void)registerEventSpec;

@end
