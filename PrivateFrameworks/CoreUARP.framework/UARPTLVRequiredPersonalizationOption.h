
@interface UARPTLVRequiredPersonalizationOption : UARPMetaDataTLV32 {
    unsigned int  _tssOption;
}

@property (readonly) unsigned int tssOption;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (id)generateTLV;
- (id)init;
- (void)setTssOption:(unsigned int)arg1;
- (id)tlvValue;
- (unsigned int)tssOption;

@end
