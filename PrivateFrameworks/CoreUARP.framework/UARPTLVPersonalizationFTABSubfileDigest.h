
@interface UARPTLVPersonalizationFTABSubfileDigest : UARPMetaDataTLVData {
    NSData * _digest;
}

@property (readonly) NSData *digest;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)digest;
- (id)generateTLV;
- (id)init;
- (void)setDigest:(id)arg1;
- (id)tlvValue;

@end
