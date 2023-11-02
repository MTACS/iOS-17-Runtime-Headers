
@interface CDPDAnalyticsTransport : NSObject <AAFAnalyticsTransport> {
    NSString * _clientBundleId;
    NSString * _clientName;
    NSNumber * _clientType;
    bool  _shouldSendAnalyticsData;
    AAFAnalyticsTransportInProcessRTC * _transport;
}

@property (nonatomic, copy) NSString *clientBundleId;
@property (nonatomic, copy) NSString *clientName;
@property (nonatomic, copy) NSNumber *clientType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldSendAnalyticsData;
@property (readonly) Class superclass;
@property (nonatomic, retain) AAFAnalyticsTransportInProcessRTC *transport;

+ (id)defaultTransport;
+ (void)flushCaches;
+ (id)getAllowedCfuType;
+ (id)getAllowedErrorDomain;
+ (id)getAllowedEscapeOffer;
+ (id)getAllowedEvents;
+ (id)getAllowedLocalSecretType;
+ (id)getAllowedStringsForTelemetry;
+ (id)transportForClientType:(id)arg1 clientBundleId:(id)arg2 clientName:(id)arg3;
+ (id)transportForEvent:(id)arg1;

- (void).cxx_destruct;
- (id)clientBundleId;
- (id)clientName;
- (id)clientType;
- (id)debugDescription;
- (void)enforcePrivacyComplianceOnEvent:(id)arg1 key:(id)arg2 value:(id)arg3;
- (id)initWithClientType:(id)arg1 clientBundleId:(id)arg2 clientName:(id)arg3;
- (oneway void)sendEvent:(id)arg1;
- (void)setClientBundleId:(id)arg1;
- (void)setClientName:(id)arg1;
- (void)setClientType:(id)arg1;
- (void)setShouldSendAnalyticsData:(bool)arg1;
- (void)setTransport:(id)arg1;
- (bool)shouldEnforcePrivacyComplianceForEvent:(id)arg1;
- (bool)shouldSendAnalyticsData;
- (id)transport;

@end
