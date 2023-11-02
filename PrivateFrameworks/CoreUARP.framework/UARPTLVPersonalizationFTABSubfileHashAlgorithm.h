
@interface UARPTLVPersonalizationFTABSubfileHashAlgorithm : UARPMetaDataTLV16 {
    unsigned short  _hashAlgorithm;
}

@property (readonly) unsigned short hashAlgorithm;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (id)generateTLV;
- (unsigned short)hashAlgorithm;
- (id)init;
- (void)setHashAlgorithm:(unsigned short)arg1;
- (id)tlvValue;

@end
