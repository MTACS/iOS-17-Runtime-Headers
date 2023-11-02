
@interface HMMRTCSession : HMMNullRTCSession {
    <HMMRTCBackendSession> * _backend;
    NSDictionary * _commonFields;
}

@property (nonatomic, readonly) <HMMRTCBackendSession> *backend;
@property (nonatomic, readonly) NSDictionary *commonFields;

- (void).cxx_destruct;
- (id)backend;
- (id)commonFields;
- (id)initWithUUID:(id)arg1 serviceName:(id)arg2 commonFields:(id)arg3 backend:(id)arg4;
- (void)submitEventWithName:(id)arg1 payload:(id)arg2;

@end
