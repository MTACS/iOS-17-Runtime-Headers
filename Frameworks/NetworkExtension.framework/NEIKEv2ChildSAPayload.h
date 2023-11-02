
@interface NEIKEv2ChildSAPayload : NEIKEv2Payload {
    bool  _includeDHGroup;
    NSArray * _proposals;
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
