
@interface UARPTLVPersonalizationSuperBinaryPayloadIndex : UARPMetaDataTLV32 {
    unsigned int  _payloadIndex;
}

@property (readonly) unsigned int payloadIndex;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (id)generateTLV;
- (id)init;
- (unsigned int)payloadIndex;
- (void)setPayloadIndex:(unsigned int)arg1;
- (id)tlvValue;

@end
