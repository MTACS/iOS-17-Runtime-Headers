
@protocol TIKeyboardInputManager <NSObject>

@required

- (void)acceptingCandidateWithTrigger:(NSString *)arg1;
- (void)addSupplementalLexicon:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: TISupplementalLexicon *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)adjustPhraseBoundaryInForwardDirection:(void *)arg1 granularity:(void *)arg2 keyboardState:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: bool, int, TIKeyboardState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIKeyboardConfiguration *, void*
- (void)adjustPhraseBoundaryInForwardDirection:(void *)arg1 keyboardState:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: bool, TIKeyboardState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIKeyboardConfiguration *, void*
- (void)candidateRejected:(TIKeyboardCandidate *)arg1;
- (void)changingContextWithTrigger:(NSString *)arg1;
- (void)generateAutocorrectionsWithKeyboardState:(void *)arg1 candidateRange:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: TIKeyboardState *, struct _NSRange { unsigned long long x1; unsigned long long x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIAutocorrectionList *, void*
- (void)generateAutocorrectionsWithKeyboardState:(void *)arg1 candidateRange:(void *)arg2 requestToken:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: TIKeyboardState *, struct _NSRange { unsigned long long x1; unsigned long long x2; }, TICandidateRequestToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIAutocorrectionList *, void*
- (void)generateAutocorrectionsWithKeyboardState:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: TIKeyboardState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIAutocorrectionList *, void*
- (void)generateCandidatesWithKeyboardState:(void *)arg1 candidateRange:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: TIKeyboardState *, struct _NSRange { unsigned long long x1; unsigned long long x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIKeyboardCandidateResultSet *, void*
- (void)generateCandidatesWithKeyboardState:(void *)arg1 candidateRange:(void *)arg2 requestToken:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: TIKeyboardState *, struct _NSRange { unsigned long long x1; unsigned long long x2; }, TICandidateRequestToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIKeyboardCandidateResultSet *, void*
- (NSString *)generateInlineCompletions:(NSString *)arg1 withPrefix:(NSString *)arg2;
- (void)generateRefinementsForCandidate:(void *)arg1 keyboardState:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: TIKeyboardCandidate *, TIKeyboardState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIAutocorrectionList *, void*
- (void)generateReplacementsForString:(void *)arg1 keyLayout:(void *)arg2 continuation:(void *)arg3; // needs 3 arg types, found 8: NSString *, TIKeyboardLayout *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)handleAcceptedCandidate:(void *)arg1 keyboardState:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: TIKeyboardCandidate *, TIKeyboardState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIKeyboardConfiguration *, TIKeyboardOutput *, void*
- (void)handleKeyboardInput:(void *)arg1 keyboardState:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: TIKeyboardInput *, TIKeyboardState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIKeyboardOutput *, TIKeyboardConfiguration *, void*
- (void)lastAcceptedCandidateCorrected;
- (void)logDiscoverabilityEvent:(int)arg1 userInfo:(NSDictionary *)arg2;
- (void)performHitTestForTouchEvent:(void *)arg1 keyboardState:(void *)arg2 continuation:(void *)arg3; // needs 3 arg types, found 8: TIKeyboardTouchEvent *, TIKeyboardState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)performHitTestForTouchEvents:(void *)arg1 keyboardState:(void *)arg2 continuation:(void *)arg3; // needs 3 arg types, found 8: NSArray *, TIKeyboardState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)registerLearning:(TIKeyboardCandidate *)arg1 fullCandidate:(TIKeyboardCandidate *)arg2 keyboardState:(TIKeyboardState *)arg3 mode:(NSString *)arg4;
- (void)registerLearningForCompletion:(NSString *)arg1 fullCompletion:(NSString *)arg2 context:(NSString *)arg3 prefix:(NSString *)arg4 mode:(NSString *)arg5;
- (void)removeSupplementalLexiconWithIdentifier:(unsigned long long)arg1;
- (void)setOriginalInput:(NSString *)arg1;
- (void)skipHitTestForTouchEvent:(TIKeyboardTouchEvent *)arg1 keyboardState:(TIKeyboardState *)arg2;
- (void)skipHitTestForTouchEvents:(NSArray *)arg1 keyboardState:(TIKeyboardState *)arg2;
- (void)smartSelectionForTextInDocument:(void *)arg1 inRange:(void *)arg2 language:(void *)arg3 tokenizedRanges:(void *)arg4 options:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: NSString *, struct _NSRange { unsigned long long x1; unsigned long long x2; }, NSString *, NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct _NSRange { unsigned long long x1; unsigned long long x2; }, void*
- (void)stickerWithIdentifier:(void *)arg1 stickerRoles:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TISticker *, void*
- (void)syncToKeyboardState:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: TIKeyboardState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIKeyboardConfiguration *, void*
- (void)textAccepted:(TIKeyboardCandidate *)arg1;
- (void)textAccepted:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: TIKeyboardCandidate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIKeyboardConfiguration *, void*
- (void)writeTypologyLogWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, void*

@end
