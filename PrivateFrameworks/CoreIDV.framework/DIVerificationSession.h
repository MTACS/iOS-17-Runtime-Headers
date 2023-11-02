
@interface DIVerificationSession : NSObject {
    DIVClient * _client;
    NSError * _configureError;
    DIVerificationSessionContext * _context;
}

@property (nonatomic, readonly) DIVerificationSessionContext *context;

+ (void)concludeVerification:(id)arg1;

- (void).cxx_destruct;
- (void)concludeVerification;
- (void)confirmVerificationCompletedWithFeedback:(id)arg1;
- (id)context;
- (void)getVerificationResultWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithContext:(id)arg1;
- (void)invalidate;
- (void)performVerificationWithAttributes:(id)arg1 completion:(id /* block */)arg2;
- (void)shareVerificationResultWithOptions:(id)arg1 completion:(id /* block */)arg2;

@end
