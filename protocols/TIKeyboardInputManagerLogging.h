
@protocol TIKeyboardInputManagerLogging <NSObject>

@required

- (void)logAutocorrections:(TIAutocorrectionList *)arg1 trace:(NSString *)arg2 forKeyboardState:(TIKeyboardState *)arg3 requestToken:(TICandidateRequestToken *)arg4;
- (void)logCandidateResultSet:(TIKeyboardCandidateResultSet *)arg1 trace:(NSString *)arg2 forKeyboardState:(TIKeyboardState *)arg3 requestToken:(TICandidateRequestToken *)arg4;
- (void)logHitKeyCode:(long long)arg1 forTouchEvent:(TIKeyboardTouchEvent *)arg2 keyboardState:(TIKeyboardState *)arg3;
- (void)logKeyboardConfig:(TIKeyboardConfiguration *)arg1 forAdjustedPhraseBoundaryInForwardDirection:(bool)arg2 granularity:(int)arg3 keyboardState:(TIKeyboardState *)arg4;
- (void)logKeyboardConfig:(TIKeyboardConfiguration *)arg1 forSyncToKeyboardState:(TIKeyboardState *)arg2;
- (void)logKeyboardConfig:(TIKeyboardConfiguration *)arg1 textToCommit:(NSString *)arg2 forAcceptedCandidate:(TIKeyboardCandidate *)arg3 keyboardState:(TIKeyboardState *)arg4;
- (void)logKeyboardOutput:(TIKeyboardOutput *)arg1 keyboardConfiguration:(TIKeyboardConfiguration *)arg2 trace:(NSString *)arg3 forKeyboardInput:(TIKeyboardInput *)arg4 keyboardState:(TIKeyboardState *)arg5;
- (void)logReceivedCandidateRejected:(TIKeyboardCandidate *)arg1;
- (void)logReceivedLastAcceptedCandidateCorrected;
- (void)logReceivedSetOriginalInput:(NSString *)arg1;
- (void)logReceivedSkipHitTestForTouchEvent:(TIKeyboardTouchEvent *)arg1 forKeyboardState:(TIKeyboardState *)arg2;
- (void)logReceivedTextAccepted:(TIKeyboardCandidate *)arg1;
- (void)logRefinements:(TIAutocorrectionList *)arg1 forCandidate:(TIKeyboardCandidate *)arg2 keyboardState:(TIKeyboardState *)arg3;
- (void)logReplacements:(NSArray *)arg1 forString:(NSString *)arg2 keyLayout:(TIKeyboardLayout *)arg3;
- (void)setConfig:(NSDictionary *)arg1;
- (NSURL *)writeToFile;

@end
