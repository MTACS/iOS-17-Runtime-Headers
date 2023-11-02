
@interface HMDHAPAccessoryRemoteOperationTask : HMDHAPAccessoryTask {
    HMDDevice * _delegateDevice;
    bool  _finished;
    NSDictionary * _logEvents;
    NSString * _remoteMessageName;
    double  _remoteMessageTimeout;
}

@property (readonly) HMDDevice *delegateDevice;
@property (getter=isFinished, nonatomic) bool finished;
@property (readonly) NSDictionary *logEvents;
@property (readonly) NSString *remoteMessageName;
@property (nonatomic, readonly) double remoteMessageTimeout;

- (void).cxx_destruct;
- (bool)_appendServiceListWithRequest:(id)arg1 serviceList:(id)arg2;
- (bool)_buildMessageAccessoryListFromAccessoryRequestMap:(id)arg1 accessoryList:(id)arg2;
- (bool)_buildMessageAccessoryListFromRequests:(id)arg1 accessoryList:(id)arg2;
- (void)_receivedRemotelyChangedCharacteristicResponses:(id)arg1 message:(id)arg2;
- (id)_remoteMessageFromAccessoryRequestMap:(id)arg1;
- (id)_responseForLocalUpdateFromRemoteResponse:(id)arg1;
- (id)activityRequestEventName;
- (id)delegateDevice;
- (void)execute;
- (id)initWithContext:(id)arg1 remoteMessageName:(id)arg2 requests:(id)arg3 delegateDevice:(id)arg4 timeout:(double)arg5 completion:(id /* block */)arg6;
- (bool)isFinished;
- (id)logEvents;
- (id)remoteMessageName;
- (double)remoteMessageTimeout;
- (void)setFinished:(bool)arg1;

@end
