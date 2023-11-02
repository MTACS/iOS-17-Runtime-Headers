
@interface UARPTLVPersonalizationManifestPrefix : UARPMetaDataTLVString {
    NSString * _ticketPrefix;
}

@property (readonly) NSString *ticketPrefix;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)generateTLV;
- (id)init;
- (void)setTicketPrefix:(id)arg1;
- (id)ticketPrefix;
- (id)tlvValue;

@end
