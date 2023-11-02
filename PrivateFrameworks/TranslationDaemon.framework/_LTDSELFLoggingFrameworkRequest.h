
@interface _LTDSELFLoggingFrameworkRequest : NSObject <_LTDSELFLoggingFrameworkRequestProtocol> {
    NSArray * _endpoints;
    SISchemaUUID * _frameworkRequestId;
    SISchemaUUID * _mtId;
    long long  _requestRoute;
    _LTDSELFLoggingSessionIdProvider * _sessionIdProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *endpoints;
@property (nonatomic, retain) SISchemaUUID *frameworkRequestId;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SISchemaUUID *mtId;
@property (nonatomic) long long requestRoute;
@property (nonatomic, retain) _LTDSELFLoggingSessionIdProvider *sessionIdProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)endpoints;
- (id)frameworkRequestId;
- (id)initWithInvocationId:(id)arg1 endpoints:(id)arg2 sessionIdProvider:(id)arg3 qssSessionId:(id)arg4 requestType:(long long)arg5 requestRoute:(long long)arg6 requestSize:(unsigned long long)arg7;
- (id)mtId;
- (long long)requestRoute;
- (void)responseReceived;
- (id)sessionIdProvider;
- (void)setEndpoints:(id)arg1;
- (void)setFrameworkRequestId:(id)arg1;
- (void)setMtId:(id)arg1;
- (void)setRequestRoute:(long long)arg1;
- (void)setSessionIdProvider:(id)arg1;

@end
