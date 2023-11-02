
@interface UARPTLVPersonalizationFTABSubfileTrusted : UARPMetaDataTLV16 {
    unsigned short  _trusted;
}

@property (readonly) unsigned short trusted;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (id)generateTLV;
- (id)init;
- (void)setTrusted:(unsigned short)arg1;
- (id)tlvValue;
- (unsigned short)trusted;

@end
