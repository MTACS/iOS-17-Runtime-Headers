
@interface AFSiriAnnounceIncomingCallRequest : NSObject <AFSiriExternalRequest> {
    AFSiriIncomingCall * _call;
}

- (void).cxx_destruct;
- (id)initWithIncomingCall:(id)arg1;
- (void)performRequestWithCompletion:(id /* block */)arg1;

@end
