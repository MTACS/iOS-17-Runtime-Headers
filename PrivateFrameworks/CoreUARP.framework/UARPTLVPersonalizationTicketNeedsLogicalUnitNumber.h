
@interface UARPTLVPersonalizationTicketNeedsLogicalUnitNumber : UARPMetaDataTLV8 {
    unsigned char  _ticketNeedsLogicalUnitNumber;
}

@property (readonly) unsigned char ticketNeedsLogicalUnitNumber;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (id)description;
- (id)generateTLV;
- (id)init;
- (void)setTicketNeedsLogicalUnitNumber:(unsigned char)arg1;
- (unsigned char)ticketNeedsLogicalUnitNumber;
- (id)tlvValue;

@end
