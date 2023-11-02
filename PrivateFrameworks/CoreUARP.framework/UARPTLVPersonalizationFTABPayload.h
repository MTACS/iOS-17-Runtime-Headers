
@interface UARPTLVPersonalizationFTABPayload : UARPMetaDataTLV {
    NSMutableArray * _tlvs;
}

@property (readonly) NSArray *tlvs;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)generateTLV;
- (id)init;
- (void)setTLVs:(id)arg1;
- (id)tlvValue;
- (id)tlvs;

@end
