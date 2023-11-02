
@interface UARPTLVPersonalizationChipRevision : UARPMetaDataTLV32 {
    unsigned int  _chipRevision;
}

@property (readonly) unsigned int chipRevision;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (unsigned int)chipRevision;
- (id)description;
- (id)generateTLV;
- (id)init;
- (void)setChipRevision:(unsigned int)arg1;
- (id)tlvValue;

@end
