
@interface _LTDSELFLoggingManager : NSObject {
    _LTDSELFLoggingSessionIdProvider * _sessionIdProvider;
}

@property (nonatomic, readonly, retain) _LTDSELFLoggingSessionIdProvider *sessionIdProvider;

+ (void)initialize;

- (void).cxx_destruct;
- (id)init;
- (void)invocationAppBackgroundedWithInvocationId:(id)arg1 payload:(id)arg2 localePair:(id)arg3;
- (void)invocationCancelWithInvocationId:(id)arg1 reason:(id)arg2 qssSessionId:(id)arg3;
- (void)invocationEndSuccessfullyWithInvocationId:(id)arg1 qssSessionId:(id)arg2;
- (void)invocationEndWithInvocationId:(id)arg1 error:(id)arg2 qssSessionId:(id)arg3;
- (void)invocationStartWithInvocationId:(id)arg1 task:(long long)arg2 inputMode:(long long)arg3 invocationType:(long long)arg4 translateAppContext:(id)arg5;
- (void)invocationUserEndedTypingEndedReasonTimeoutWithInvocationId:(id)arg1 payload:(id)arg2 localePair:(id)arg3;
- (void)invocationUserEndedTypingReasonNextButtonPressedWithInvocationId:(id)arg1 payload:(id)arg2 localePair:(id)arg3;
- (void)invocationUserEndedTypingReasonTextBoxDismissedWithInvocationId:(id)arg1 payload:(id)arg2 localePair:(id)arg3;
- (void)selfLoggingEventWithData:(id)arg1;
- (id)sendFrameworkRequestWithInvocationId:(id)arg1 qssSessionId:(id)arg2 requestType:(long long)arg3 requestRoute:(long long)arg4 requestSize:(unsigned long long)arg5;
- (id)sessionIdProvider;

@end
