
@interface UIKBAnalyticsDispatcher : NSObject {
    bool  _analyticsSkipDidKeyPress;
    NSString * _nextCandidateReplacementInsertedText;
    NSString * _nextCandidateReplacementPostCandidateInsertedText;
    NSString * _nextCandidateReplacementRemovedText;
    unsigned long long  _nextCandidateReplacementSource;
}

@property (nonatomic) bool analyticsSkipDidKeyPress;
@property (nonatomic, copy) NSString *nextCandidateReplacementInsertedText;
@property (nonatomic, copy) NSString *nextCandidateReplacementPostCandidateInsertedText;
@property (nonatomic, copy) NSString *nextCandidateReplacementRemovedText;
@property (nonatomic) unsigned long long nextCandidateReplacementSource;

+ (id)allowedValuesForTextEditingPreferredFieldName:(id)arg1;
+ (id)allowedValuesForType:(id)arg1;
+ (void)analyticsDispatchEventTextEditingOperation:(id)arg1 trigger:(id)arg2;
+ (void)candidateViewExtended:(id)arg1 direction:(id)arg2;
+ (id)currentInputMode;
+ (void)decrementAllowCursorMovementCount;
+ (void)deleteKeySelected:(int)arg1;
+ (void)didCandidateReplacement;
+ (void)didCandidateReplacementWithRemovedText:(id)arg1 insertedText:(id)arg2;
+ (void)didDeleteBackwardText:(id)arg1;
+ (void)didInsertText:(id)arg1 relativeRangeBefore:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 selectedTextBefore:(id)arg3 withLanguage:(id)arg4;
+ (void)didRevisionBubbleTap;
+ (void)dispatchFloatingKeyboardEventOfType:(id)arg1 trigger:(id)arg2 pinnedToEdge:(id)arg3 position:(struct CGPoint { double x1; double x2; })arg4 touchUpPosition:(struct CGPoint { double x1; double x2; })arg5;
+ (void)editingSessionEnded:(unsigned long long)arg1;
+ (void)emojiInsertedByMethod:(id)arg1 inputType:(id)arg2;
+ (void)emojiPopoverSummoned:(id)arg1 appendsEmoji:(bool)arg2;
+ (void)floatingKeyboardMoved:(id)arg1 toPosition:(struct CGPoint { double x1; double x2; })arg2 touchPosition:(struct CGPoint { double x1; double x2; })arg3;
+ (void)floatingKeyboardSummonedEvent:(id)arg1 trigger:(id)arg2 finalPosition:(struct CGPoint { double x1; double x2; })arg3;
+ (void)globeKeyEducationShown:(double)arg1;
+ (void)globeKeyLongPress;
+ (void)globeKeySelected;
+ (void)handwritingResized:(id)arg1;
+ (void)hapticEventEngineDuration:(double)arg1 startCount:(unsigned long long)arg2 actionCount:(unsigned long long)arg3;
+ (void)incrementAllowCursorMovementCount;
+ (void)keyboardAnalyticsDispatchWithSelector:(SEL)arg1 withTrigger:(id)arg2;
+ (void)keyboardCameraSessionEndedForTextContentType:(id)arg1 didFindText:(bool)arg2 didInsertText:(bool)arg3 sender:(id)arg4;
+ (void)keyboardShortcutInvokedWithKeyCommand:(id)arg1 keyEvent:(id)arg2 keyboardProperties:(id)arg3;
+ (void)keyplaneSwitched:(int)arg1;
+ (id)preferredEventName:(id)arg1;
+ (void)sessionActionAnalyticsEnded:(id)arg1;
+ (void)sessionAnalyticsEnded:(id)arg1;
+ (void)setKeyboardTrialParameters:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)analyticsSkipDidKeyPress;
- (id)init;
- (id)nextCandidateReplacementInsertedText;
- (id)nextCandidateReplacementPostCandidateInsertedText;
- (id)nextCandidateReplacementRemovedText;
- (unsigned long long)nextCandidateReplacementSource;
- (void)resetCandidateReplacementVariables;
- (void)setAnalyticsSkipDidKeyPress:(bool)arg1;
- (void)setNextCandidateReplacementInsertedText:(id)arg1;
- (void)setNextCandidateReplacementPostCandidateInsertedText:(id)arg1;
- (void)setNextCandidateReplacementRemovedText:(id)arg1;
- (void)setNextCandidateReplacementSource:(unsigned long long)arg1;

@end
