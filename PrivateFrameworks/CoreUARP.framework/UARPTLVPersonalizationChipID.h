
@interface UARPTLVPersonalizationChipID : UARPMetaDataTLV32 {
    unsigned int  _chipID;
}

@property (readonly) unsigned int chipID;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (unsigned int)chipID;
- (id)description;
- (id)generateTLV;
- (id)init;
- (void)setChipID:(unsigned int)arg1;
- (id)tlvValue;

@end
