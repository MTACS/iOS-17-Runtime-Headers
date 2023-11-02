
@interface NEIKEv2RequestContext : NSObject {
    SWPreventSystemSleepAssertion * _powerAssertion;
    bool  _preventSleepUntilFinished;
    bool  _requestInitiator;
    int  _requestType;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithRequestType:(int)arg1;
- (void)sendCallbackSuccess:(bool)arg1 session:(id)arg2;

@end
