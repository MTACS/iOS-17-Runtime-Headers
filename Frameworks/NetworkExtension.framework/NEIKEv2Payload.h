
@interface NEIKEv2Payload : NSObject <NEPrettyDescription> {
    bool  _isInbound;
    NSData * _payloadData;
}

@property (readonly) bool hasRequiredFields;
@property (readonly) unsigned long long type;

+ (id)copyTypeDescription;

- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)generatePayloadData;
- (bool)hasRequiredFields;
- (id)init;
- (bool)parsePayloadData;
- (unsigned long long)type;

@end
