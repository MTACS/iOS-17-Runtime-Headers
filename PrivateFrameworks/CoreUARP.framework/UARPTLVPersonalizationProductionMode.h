
@interface UARPTLVPersonalizationProductionMode : UARPMetaDataTLV32 {
    unsigned int  _productionMode;
}

@property (readonly) unsigned int productionMode;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (id)generateTLV;
- (id)init;
- (unsigned int)productionMode;
- (void)setProductionMode:(unsigned int)arg1;
- (id)tlvValue;

@end
