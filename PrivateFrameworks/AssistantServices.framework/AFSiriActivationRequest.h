
@interface AFSiriActivationRequest : NSObject <AFSiriExternalRequest> {
    AFSiriActivationContext * _context;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (void)performRequestWithCompletion:(id /* block */)arg1;
- (void)performRequestWithResultHandler:(id /* block */)arg1;

@end
