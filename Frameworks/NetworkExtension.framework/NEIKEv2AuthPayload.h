
@interface NEIKEv2AuthPayload : NEIKEv2Payload {
    NEIKEv2AuthenticationProtocol * _authProtocol;
    NSData * _authenticationData;
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
