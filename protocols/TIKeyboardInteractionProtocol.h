
@protocol TIKeyboardInteractionProtocol <NSObject>

@required

- (void)acceptingCandidateWithTrigger:(NSString *)arg1;
- (void)addDrawInputWithSyllableCount:(unsigned long long)arg1 keyboardState:(TIKeyboardState *)arg2;
- (void)addKeyInput:(TIKeyboardInput *)arg1 keyboardState:(TIKeyboardState *)arg2;
- (void)addTouchEvent:(TIKeyboardTouchEvent *)arg1;
- (void)candidateAccepted:(TIKeyboardCandidate *)arg1 withInput:(TIKeyboardInput *)arg2 documentState:(TIDocumentState *)arg3 inputContext:(NSString *)arg4 inputStem:(NSString *)arg5 predictionBarHit:(bool)arg6 useCandidateSelection:(bool)arg7 candidateIndex:(long long)arg8 keyboardState:(TIKeyboardState *)arg9;
- (void)candidatesOffered:(TIAutocorrectionList *)arg1 keyboardState:(TIKeyboardState *)arg2;
- (void)changingContextWithTrigger:(NSString *)arg1;
- (void)contextDidChange:(TIDocumentState *)arg1 wordDelete:(bool)arg2 cursorMoved:(bool)arg3 extendsPriorWord:(bool)arg4 inWord:(NSString *)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 selectionLocation:(unsigned long long)arg7 keyboardState:(TIKeyboardState *)arg8;
- (void)layoutDidChange:(TIKeyboardLayout *)arg1 keyboardState:(TIKeyboardState *)arg2;
- (void)setClientID:(NSString *)arg1 keyboardState:(TIKeyboardState *)arg2;

@end
