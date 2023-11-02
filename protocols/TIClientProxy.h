
@protocol TIClientProxy <NSObject>

@required

- (void)closeRequestToken:(TICandidateRequestToken *)arg1;
- (void)pushCandidateResultSet:(TIKeyboardCandidateResultSet *)arg1 requestToken:(TICandidateRequestToken *)arg2;
- (void)pushCandidates:(TIAutocorrectionList *)arg1 requestToken:(TICandidateRequestToken *)arg2;

@end
