
@interface UARPMetaDataTLV : NSObject {
    unsigned int  _tlvLength;
    unsigned int  _tlvType;
    NSData * _tlvValue;
}

@property (readonly) unsigned int tlvLength;
@property (readonly) unsigned int tlvType;

+ (id)metaDataTable;
+ (id)metaDataTableEntry;
+ (id)tlvFromKey:(id)arg1 value:(id)arg2;
+ (id)tlvFromPropertyListValue:(id)arg1;
+ (id)tlvFromType:(unsigned int)arg1 length:(unsigned int)arg2 value:(void*)arg3;
+ (id)tlvTypeName:(unsigned int)arg1;
+ (id)tlvWithLength:(unsigned long long)arg1 value:(void*)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)generateTLV;
- (id)init;
- (id)initWithType:(unsigned int)arg1 length:(unsigned int)arg2 value:(void*)arg3;
- (unsigned int)tlvLength;
- (unsigned int)tlvType;
- (id)tlvValue;

@end
