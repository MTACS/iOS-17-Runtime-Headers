
@interface AFSiriHomeAutomationBackgroundRequest : NSObject <AFSiriExternalRequest> {
    AFInstanceContext * _instanceContext;
    AFSiriHomeAutomationRequestInfo * _requestInfo;
}

- (void).cxx_destruct;
- (id)initWithRequestInfo:(id)arg1;
- (id)initWithRequestInfo:(id)arg1 instanceContext:(id)arg2;
- (void)performRequestWithCompletion:(id /* block */)arg1;

@end
