
@interface WFRemoteExecutionSession : NSObject {
    <WFRemoteExecutionSessionDelegate> * _delegate;
    NSString * _idsIdentifier;
    WFRemoteExecutionRequest * _request;
    IDSService * _service;
    unsigned long long  _state;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (nonatomic) <WFRemoteExecutionSessionDelegate> *delegate;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic, retain) WFRemoteExecutionRequest *request;
@property (nonatomic, readonly) IDSService *service;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutTimer;

- (void).cxx_destruct;
- (void)cancelTimeout;
- (id)delegate;
- (void)finish;
- (void)finishWithError:(id)arg1;
- (void)handleIncomingProtobuf:(id)arg1;
- (void)handleTimeout;
- (id)idsIdentifier;
- (id)initWithService:(id)arg1;
- (id)invalidAceCommandError;
- (id)request;
- (void)restartTimeout;
- (void)sendToDestinations:(id)arg1 options:(id)arg2;
- (id)service;
- (id)sessionTimedOutError;
- (void)setDelegate:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (unsigned long long)state;
- (double)timeoutLimitInSeconds;
- (id)timeoutTimer;

@end
