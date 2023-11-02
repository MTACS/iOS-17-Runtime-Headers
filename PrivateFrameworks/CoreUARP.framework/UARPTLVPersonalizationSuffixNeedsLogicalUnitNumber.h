
@interface UARPTLVPersonalizationSuffixNeedsLogicalUnitNumber : UARPMetaDataTLV8 {
    unsigned char  _suffixNeedsLogicalUnitNumber;
}

@property (readonly) unsigned char suffixNeedsLogicalUnitNumber;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (id)generateTLV;
- (id)init;
- (void)setSuffixNeedsLogicalUnitNumber:(unsigned char)arg1;
- (unsigned char)suffixNeedsLogicalUnitNumber;
- (id)tlvValue;

@end
