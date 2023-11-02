
@interface _LTSELFLoggingInvocation : NSObject {
    bool  _endSent;
    NSUUID * _invocationId;
}

@property (nonatomic) bool endSent;
@property (nonatomic, readonly) NSUUID *invocationId;

+ (void)userEndedTypingWithInvocationId:(id)arg1 payload:(id)arg2 localePair:(id)arg3 reason:(long long)arg4;

- (void).cxx_destruct;
- (void)appBackgroundedWithPayload:(id)arg1 localePair:(id)arg2;
- (void)cancelWithReason:(id)arg1 qssSessionId:(id)arg2;
- (bool)endSent;
- (void)endSuccessfullyWithQSSSessionId:(id)arg1;
- (void)endWithError:(id)arg1 qssSessionId:(id)arg2;
- (id)initWithInvocationId:(id)arg1;
- (id)invocationId;
- (void)sendEventWithPayload:(id)arg1 localePair:(id)arg2 type:(long long)arg3;
- (void)sendUserEndedTypingEventWithPayload:(id)arg1 localePair:(id)arg2 type:(long long)arg3;
- (void)setEndSent:(bool)arg1;
- (void)userEndedTypingWithPayload:(id)arg1 localePair:(id)arg2 reason:(long long)arg3;

@end
