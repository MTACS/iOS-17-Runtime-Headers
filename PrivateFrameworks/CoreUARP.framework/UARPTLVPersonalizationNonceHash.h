
@interface UARPTLVPersonalizationNonceHash : UARPMetaDataTLVData {
    NSData * _nonceHash;
}

@property (readonly) NSData *nonceHash;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)generateTLV;
- (id)init;
- (id)nonceHash;
- (void)setNonceHash:(id)arg1;
- (id)tlvValue;

@end
