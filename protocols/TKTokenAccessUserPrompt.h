
@protocol TKTokenAccessUserPrompt <NSObject>

@required

- (long long)preflightStatus;
- (long long)promptUserToEvaluateRequest:(TKTokenAccessRequest *)arg1 error:(id*)arg2;

@end
