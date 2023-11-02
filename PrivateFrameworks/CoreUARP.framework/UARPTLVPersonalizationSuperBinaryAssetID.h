
@interface UARPTLVPersonalizationSuperBinaryAssetID : UARPMetaDataTLV16 {
    unsigned short  _assetID;
}

@property (readonly) unsigned short assetID;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (unsigned short)assetID;
- (id)description;
- (id)generateTLV;
- (id)init;
- (void)setAssetID:(unsigned short)arg1;
- (id)tlvValue;

@end
