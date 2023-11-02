
@interface UARPTLVPersonalizationFTABSubfileLongname : UARPMetaDataTLVString {
    NSString * _longname;
}

@property (readonly) NSString *longname;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)generateTLV;
- (id)init;
- (id)longname;
- (void)setLongname:(id)arg1;
- (id)tlvValue;

@end
