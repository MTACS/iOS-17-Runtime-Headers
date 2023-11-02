
@interface NEIKEv2KeyExchangePayload : NEIKEv2Payload {
    NEIKEv2DHProtocol * _dh;
    NSData * _dhPublicKey;
}

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)generatePayloadData;
- (bool)hasRequiredFields;
- (bool)parsePayloadData;
- (unsigned long long)type;

@end
