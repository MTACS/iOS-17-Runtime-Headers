
@interface UARPTLVPersonalizationBoardID : UARPMetaDataTLV32 {
    unsigned int  _boardID;
}

@property (readonly) unsigned int boardID;

+ (id)metaDataTableEntry;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (unsigned int)tlvType;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (unsigned int)boardID;
- (id)description;
- (id)generateTLV;
- (id)init;
- (void)setBoardID:(unsigned int)arg1;
- (id)tlvValue;

@end
