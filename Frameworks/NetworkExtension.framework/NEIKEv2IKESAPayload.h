
@interface NEIKEv2IKESAPayload : NEIKEv2Payload {
    NSArray * _proposals;
    NEIKEv2IKESPI * _rekeyIKESPI;
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
