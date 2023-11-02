
@interface WFRemoteExecutionOutgoingRunRequestResponseSession : WFRemoteExecutionSession {
    NSData * _responseData;
}

@property (nonatomic, readonly) NSData *responseData;

- (void).cxx_destruct;
- (void)handleTimeout;
- (id)initWithService:(id)arg1 responseData:(id)arg2;
- (id)responseData;
- (void)sendToDestinations:(id)arg1 options:(id)arg2;
- (double)timeoutLimitInSeconds;

@end
