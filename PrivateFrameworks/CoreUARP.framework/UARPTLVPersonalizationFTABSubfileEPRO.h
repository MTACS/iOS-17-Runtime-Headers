
@interface UARPTLVPersonalizationFTABSubfileEPRO : UARPMetaDataTLV16 {
    unsigned short  _epro;
}

@property (readonly) unsigned short epro;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (unsigned short)epro;
- (id)generateTLV;
- (id)init;
- (void)setEpro:(unsigned short)arg1;
- (id)tlvValue;

@end
