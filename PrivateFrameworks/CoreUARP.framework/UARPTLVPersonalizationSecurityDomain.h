
@interface UARPTLVPersonalizationSecurityDomain : UARPMetaDataTLV32 {
    unsigned int  _securityDomain;
}

@property (readonly) unsigned int securityDomain;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (id)generateTLV;
- (id)init;
- (unsigned int)securityDomain;
- (void)setSecurityDomain:(unsigned int)arg1;
- (id)tlvValue;

@end
