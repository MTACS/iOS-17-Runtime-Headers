
@interface AKCAPiggybackReporter : AKCAReporter

- (void)didCancelRequesting;
- (void)didCircleTimeout;
- (void)didEscapeRequesting;
- (void)didFinishAccepting;
- (id)initWithRequestID:(id)arg1;
- (id)piggybackResultString:(unsigned long long)arg1;

@end
