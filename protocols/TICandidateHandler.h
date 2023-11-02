
@protocol TICandidateHandler

@required

- (bool)asynchronous;
- (void)close;
- (void)open;
- (void)pushCandidateResultSet:(TIKeyboardCandidateResultSet *)arg1;
- (void)pushCandidates:(TIAutocorrectionList *)arg1;
- (TICandidateRequestToken *)requestToken;

@end
