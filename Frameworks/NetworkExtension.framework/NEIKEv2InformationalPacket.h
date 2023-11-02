
@interface NEIKEv2InformationalPacket : NEIKEv2Packet {
    NEIKEv2ConfigPayload * _config;
    NSArray * _deletes;
}

+ (id)copyTypeDescription;
+ (unsigned long long)exchangeType;

- (void).cxx_destruct;
- (void)filloutPayloads;
- (void)gatherPayloads;

@end
