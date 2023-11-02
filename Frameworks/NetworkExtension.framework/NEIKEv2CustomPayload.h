
@interface NEIKEv2CustomPayload : NEIKEv2Payload {
    NSData * _customData;
    unsigned long long  _customType;
}

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)generatePayloadData;
- (bool)hasRequiredFields;
- (bool)parsePayloadData;
- (unsigned long long)type;

@end
