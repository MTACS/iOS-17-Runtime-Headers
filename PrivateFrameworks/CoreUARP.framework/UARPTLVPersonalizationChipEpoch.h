
@interface UARPTLVPersonalizationChipEpoch : UARPMetaDataTLV32 {
    unsigned int  _chipEpoch;
}

@property (readonly) unsigned int chipEpoch;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (unsigned int)chipEpoch;
- (id)description;
- (id)generateTLV;
- (id)init;
- (void)setChipEpoch:(unsigned int)arg1;
- (id)tlvValue;

@end
