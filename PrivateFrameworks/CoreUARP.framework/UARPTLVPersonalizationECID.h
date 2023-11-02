
@interface UARPTLVPersonalizationECID : UARPMetaDataTLV64 {
    unsigned long long  _ecID;
}

@property (readonly) unsigned long long ecID;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (unsigned long long)ecID;
- (id)generateTLV;
- (id)init;
- (void)setEcID:(unsigned long long)arg1;
- (id)tlvValue;

@end
