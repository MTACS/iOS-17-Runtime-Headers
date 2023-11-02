
@interface NEIKEv2NoncePayload : NEIKEv2Payload {
    NSData * _nonce;
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
