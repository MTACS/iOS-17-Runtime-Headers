
@interface BYAnalyticsEventAppleIDSignIn : NSObject {
    NSDate * _authenticationStartDate;
    NSDate * _completionDate;
    unsigned long long  _context;
    NSDate * _signInStartDate;
}

@property (nonatomic) NSDate *authenticationStartDate;
@property (nonatomic) NSDate *completionDate;
@property (nonatomic) unsigned long long context;
@property (nonatomic) NSDate *signInStartDate;

- (id)_eventPayload;
- (id)authenticationStartDate;
- (id)completionDate;
- (unsigned long long)context;
- (id)initWithAnalyticsManager:(id)arg1 context:(unsigned long long)arg2;
- (void)markSignInCompleted;
- (void)markSignInStartedAfterAuthenticationCompleted;
- (void)setAuthenticationStartDate:(id)arg1;
- (void)setCompletionDate:(id)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setSignInStartDate:(id)arg1;
- (id)signInStartDate;

@end
