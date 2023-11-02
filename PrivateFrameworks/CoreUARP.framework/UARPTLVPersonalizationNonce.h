
@interface UARPTLVPersonalizationNonce : UARPMetaDataTLVData {
    NSData * _nonce;
}

@property (readonly) NSData *nonce;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)generateTLV;
- (id)init;
- (id)nonce;
- (void)setNonce:(id)arg1;
- (id)tlvValue;

@end
