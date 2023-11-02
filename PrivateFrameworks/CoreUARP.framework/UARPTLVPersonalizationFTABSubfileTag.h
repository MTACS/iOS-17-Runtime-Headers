
@interface UARPTLVPersonalizationFTABSubfileTag : UARPMetaDataTLV {
    UARPAssetTag * _tag;
}

@property (readonly) UARPAssetTag *tag;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)generateTLV;
- (id)init;
- (void)setTag:(id)arg1;
- (id)tag;
- (id)tlvValue;

@end
