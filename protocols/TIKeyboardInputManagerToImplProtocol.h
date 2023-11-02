
@protocol TIKeyboardInputManagerToImplProtocol <NSObject>

@required

- (void)processPayloadInfo:(NSDictionary *)arg1;
- (void)pushAutocorrections:(TIAutocorrectionList *)arg1 requestToken:(TICandidateRequestToken *)arg2;
- (void)pushCandidateResultSet:(TIKeyboardCandidateResultSet *)arg1 requestToken:(TICandidateRequestToken *)arg2;

@end
