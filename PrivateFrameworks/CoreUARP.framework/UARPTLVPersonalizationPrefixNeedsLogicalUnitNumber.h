
@interface UARPTLVPersonalizationPrefixNeedsLogicalUnitNumber : UARPMetaDataTLV8 {
    unsigned char  _prefixNeedsLogicalUnitNumber;
}

@property (readonly) unsigned char prefixNeedsLogicalUnitNumber;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)generateTLV;
- (id)init;
- (unsigned char)prefixNeedsLogicalUnitNumber;
- (void)setPrefixNeedsLogicalUnitNumber:(unsigned char)arg1;
- (id)tlvValue;

@end
