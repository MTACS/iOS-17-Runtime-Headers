
@interface UARPTLVPersonalizationSoCLiveNonce : UARPMetaDataTLV8 {
    unsigned char  _liveNonce;
}

@property (readonly) unsigned char liveNonce;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (id)generateTLV;
- (id)init;
- (unsigned char)liveNonce;
- (void)setLiveNonce:(unsigned char)arg1;
- (id)tlvValue;

@end
