
@interface UARPTLVPersonalizationSecurityMode : UARPMetaDataTLV32 {
    unsigned int  _securityMode;
}

@property (readonly) unsigned int securityMode;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (id)generateTLV;
- (id)init;
- (unsigned int)securityMode;
- (void)setSecurityMode:(unsigned int)arg1;
- (id)tlvValue;

@end
