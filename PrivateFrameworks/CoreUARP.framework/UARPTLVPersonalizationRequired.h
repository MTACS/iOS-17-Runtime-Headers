
@interface UARPTLVPersonalizationRequired : UARPMetaDataTLV32 {
    unsigned int  _isRequired;
}

@property (readonly) unsigned int isRequired;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (id)generateTLV;
- (id)init;
- (unsigned int)isRequired;
- (void)setIsRequired:(unsigned int)arg1;
- (id)tlvValue;

@end
