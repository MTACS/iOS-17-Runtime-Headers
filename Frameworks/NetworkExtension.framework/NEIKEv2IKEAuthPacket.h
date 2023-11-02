
@interface NEIKEv2IKEAuthPacket : NEIKEv2Packet {
    NEIKEv2AuthPayload * _auth;
    NSArray * _certificateRequests;
    NSArray * _certificates;
    NEIKEv2ConfigPayload * _config;
    NEIKEv2EAPPayload * _eap;
    NEIKEv2InitiatorIdentifierPayload * _idi;
    NEIKEv2ResponderIdentifierPayload * _idr;
    NEIKEv2ChildSAPayload * _sa;
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
