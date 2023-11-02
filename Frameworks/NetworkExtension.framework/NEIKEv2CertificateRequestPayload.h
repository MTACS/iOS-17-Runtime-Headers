
@interface NEIKEv2CertificateRequestPayload : NEIKEv2Payload {
    NSData * _certificateData;
    unsigned long long  _encoding;
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
