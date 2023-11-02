
@interface UARPTLVPersonalizationFTABSubfileESEC : UARPMetaDataTLV16 {
    unsigned short  _esec;
}

@property (readonly) unsigned short esec;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (unsigned short)esec;
- (id)generateTLV;
- (id)init;
- (void)setEsec:(unsigned short)arg1;
- (id)tlvValue;

@end
