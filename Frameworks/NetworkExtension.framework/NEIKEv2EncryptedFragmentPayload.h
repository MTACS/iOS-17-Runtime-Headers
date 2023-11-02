
@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload {
    NSData * _fragmentData;
    unsigned int  _fragmentNumber;
    unsigned long long  _nextPayload;
    unsigned int  _totalFragments;
}

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (bool)hasRequiredFields;
- (bool)parsePayloadData;
- (unsigned long long)type;

@end
