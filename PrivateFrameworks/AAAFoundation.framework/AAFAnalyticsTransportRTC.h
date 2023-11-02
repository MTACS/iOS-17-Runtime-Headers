
@interface AAFAnalyticsTransportRTC : NSObject <AAFAnalyticsTransport, AAFXPCSessionDelegate> {
    NSString * _clientBundleId;
    NSString * _clientName;
    NSNumber * _clientType;
    AAFXPCSession * _remoteService;
}

@property (nonatomic, readonly, copy) NSString *clientBundleId;
@property (nonatomic, readonly, copy) NSString *clientName;
@property (nonatomic, readonly, copy) NSNumber *clientType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AAFXPCSession *remoteService;
@property (readonly) Class superclass;

+ (id)analyticsTransportRTCWithClientType:(id)arg1 clientBundleId:(id)arg2 clientName:(id)arg3;

- (void).cxx_destruct;
- (id)clientBundleId;
- (id)clientName;
- (id)clientType;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithClientType:(id)arg1 clientBundleId:(id)arg2 clientName:(id)arg3;
- (id)remoteService;
- (oneway void)sendEvent:(id)arg1;
- (void)setRemoteService:(id)arg1;

@end
