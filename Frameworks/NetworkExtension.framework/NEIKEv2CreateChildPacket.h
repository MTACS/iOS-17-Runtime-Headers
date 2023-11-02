
@interface NEIKEv2CreateChildPacket : NEIKEv2Packet {
    NEIKEv2ChildSAPayload * _childSA;
    NEIKEv2ConfigPayload * _config;
    NEIKEv2IKESAPayload * _ikeSA;
    NEIKEv2KeyExchangePayload * _ke;
    NEIKEv2NoncePayload * _nonce;
    NEIKEv2InitiatorTrafficSelectorPayload * _tsi;
    NEIKEv2ResponderTrafficSelectorPayload * _tsr;
    NSArray * _vendorIDs;
}

+ (id)copyTypeDescription;
+ (unsigned long long)exchangeType;

- (void).cxx_destruct;
- (void)filloutPayloads;
- (void)gatherPayloads;

@end
