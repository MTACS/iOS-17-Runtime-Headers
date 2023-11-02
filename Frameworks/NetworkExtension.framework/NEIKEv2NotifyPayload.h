
@interface NEIKEv2NotifyPayload : NEIKEv2Payload {
    NSData * _data;
    unsigned long long  _notifyType;
    NEIKEv2SPI * _spi;
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
