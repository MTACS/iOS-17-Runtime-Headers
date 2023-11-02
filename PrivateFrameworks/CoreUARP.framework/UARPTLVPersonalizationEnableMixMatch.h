
@interface UARPTLVPersonalizationEnableMixMatch : UARPMetaDataTLV8 {
    unsigned char  _enableMixMatch;
}

@property (readonly) unsigned char enableMixMatch;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (unsigned char)enableMixMatch;
- (id)generateTLV;
- (id)init;
- (void)setEnableMixMatch:(unsigned char)arg1;
- (id)tlvValue;

@end
