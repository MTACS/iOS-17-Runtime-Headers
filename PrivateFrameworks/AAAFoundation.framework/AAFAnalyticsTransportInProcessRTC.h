
@interface AAFAnalyticsTransportInProcessRTC : NSObject <AAFAnalyticsTransport> {
    NSString * _clientBundleId;
    NSString * _clientName;
    NSNumber * _clientType;
    NSDictionary * _sessionInfo;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly, copy) NSString *clientBundleId;
@property (nonatomic, readonly, copy) NSString *clientName;
@property (nonatomic, readonly, copy) NSNumber *clientType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *sessionInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

+ (id)analyticsTransportRTCWithClientType:(id)arg1 clientBundleId:(id)arg2 clientName:(id)arg3;

- (void).cxx_destruct;
- (id)_createPayloadWith:(id)arg1;
- (bool)_sendOneMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 category:(id)arg3 payload:(id)arg4 error:(id*)arg5;
- (id)clientBundleId;
- (id)clientName;
- (id)clientType;
- (id)debugDescription;
- (id)initWithClientType:(id)arg1 clientBundleId:(id)arg2 clientName:(id)arg3;
- (oneway void)sendEvent:(id)arg1;
- (id)sessionInfo;
- (id)userInfo;

@end
