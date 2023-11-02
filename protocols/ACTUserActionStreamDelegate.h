
@protocol ACTUserActionStreamDelegate <NSObject>

@required

- (TIKeyboardCandidate *)autocorrection;
- (TIKeyboardCandidateResultSet *)candidateResultSet;
- (NSString *)document;
- (NSString *)externalStringToInternal:(NSString *)arg1;
- (NSArray *)inlineCompletionCandidates;
- (NSArray *)inputSegmentsForContinuousPathString:(NSString *)arg1;
- (NSArray *)inputSegmentsForString:(NSString *)arg1;
- (NSString *)internalStringToExternal:(NSString *)arg1;
- (UIKBTree *)keyContainingPoint:(struct CGPoint { double x1; double x2; })arg1 inKeyplane:(UIKBTree *)arg2;
- (UIKBTree *)keyToAccessKeyplaneCloserToKeyString:(NSString *)arg1;
- (UIKBTree *)keyboard;
- (ACTKeyboardController *)keyboardController;
- (UIKBTree *)keyplane;
- (NSLocale *)locale;
- (UIKBTree *)mapShiftedKeyToUnShiftedKeyExcludeCapitalization:(NSString *)arg1;
- (NSString *)mergeHyphenatedWord:(NSMutableArray *)arg1 string:(NSString *)arg2;
- (struct CGPoint { double x1; double x2; })pointForAttemptedTapOnKey:(UIKBTree *)arg1 withError:(TIPointError *)arg2;
- (bool)postTokenisString:(NSArray *)arg1 i:(unsigned long long)arg2;
- (NSArray *)predictionBarCandidates;
- (bool)priorTokenisString:(NSArray *)arg1 i:(unsigned long long)arg2;
- (UIKBTree *)shiftKeyToAccessKeyplaneCloserToKeyString:(NSString *)arg1;
- (NSString *)splitDigraphsInString:(NSString *)arg1;

@end
