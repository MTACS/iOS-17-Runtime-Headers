
@interface UARPTLVHostPersonalizationRequired : UARPMetaDataTLV8 {
    unsigned char  _isRequired;
}

@property (readonly) unsigned char isRequired;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (id)generateTLV;
- (id)init;
- (unsigned char)isRequired;
- (void)setIsRequired:(unsigned char)arg1;
- (id)tlvValue;

@end
