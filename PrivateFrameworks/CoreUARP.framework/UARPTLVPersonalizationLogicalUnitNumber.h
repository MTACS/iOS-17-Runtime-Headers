
@interface UARPTLVPersonalizationLogicalUnitNumber : UARPMetaDataTLV32 {
    unsigned int  _logicalUnitNumber;
}

@property (readonly) unsigned int logicalUnitNumber;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (id)generateTLV;
- (id)init;
- (unsigned int)logicalUnitNumber;
- (void)setLogicalUnitNumber:(unsigned int)arg1;
- (id)tlvValue;

@end
