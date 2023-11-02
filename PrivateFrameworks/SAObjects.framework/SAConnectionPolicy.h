
@interface SAConnectionPolicy : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *disableMPTCP;
@property (nonatomic, copy) NSNumber *enableOptimisticDNS;
@property (nonatomic, copy) NSNumber *enableTLS13;
@property (nonatomic, copy) NSNumber *enableTLS13ZeroRTT;
@property (nonatomic, copy) NSNumber *enableTcpFastOpen;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSNumber *globalTimeout;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *mptcpFallbackPort;
@property (nonatomic, copy) NSString *policyId;
@property (nonatomic, copy) NSArray *routes;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *timeToLive;

+ (id)connectionPolicy;
+ (id)connectionPolicyWithDictionary:(id)arg1 context:(id)arg2;

- (id)disableMPTCP;
- (id)enableOptimisticDNS;
- (id)enableTLS13;
- (id)enableTLS13ZeroRTT;
- (id)enableTcpFastOpen;
- (bool)enabled;
- (id)encodedClassName;
- (id)globalTimeout;
- (id)groupIdentifier;
- (id)mptcpFallbackPort;
- (id)policyId;
- (id)routes;
- (void)setDisableMPTCP:(id)arg1;
- (void)setEnableOptimisticDNS:(id)arg1;
- (void)setEnableTLS13:(id)arg1;
- (void)setEnableTLS13ZeroRTT:(id)arg1;
- (void)setEnableTcpFastOpen:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGlobalTimeout:(id)arg1;
- (void)setMptcpFallbackPort:(id)arg1;
- (void)setPolicyId:(id)arg1;
- (void)setRoutes:(id)arg1;
- (void)setTimeToLive:(id)arg1;
- (id)timeToLive;

@end
