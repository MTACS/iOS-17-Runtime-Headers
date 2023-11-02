
@interface IDSAPSUserPayload : NSObject {
    NSMutableDictionary * _payload;
}

@property (nonatomic, retain) NSMutableDictionary *payload;

- (void).cxx_destruct;
- (id)extractCommandResponseFrom:(id)arg1;
- (id)extractCommandWebTunnelResponseFrom:(id)arg1;
- (id)extractMadridDeliveryContextFrom:(id)arg1;
- (id)extractMadridHttpHeadersFrom:(id)arg1;
- (id)extractMadridProtocolPayloadFrom:(id)arg1;
- (id)extractQuickRelayAllocationStatusFrom:(id)arg1;
- (id)extractQuickRelaySelfAllocTokenFrom:(id)arg1;
- (id)initWithBlastDoorObject:(id)arg1;
- (void)logDiffBetween:(id)arg1 andTarget:(id)arg2 withKeyPath:(id)arg3;
- (void)logHeaderDiffAgainstSource:(id)arg1;
- (id)payload;
- (void)setPayload:(id)arg1;

@end
