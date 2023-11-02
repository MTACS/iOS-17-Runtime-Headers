
@interface _CDSerializableKeyedData : NSObject <NSCopying> {
    NSData * _data;
    unsigned char  _dataChecksum;
    bool  _dataChecksumNeedsUpdate;
    NSData * _encodedKey;
    NSString * _key;
    unsigned char  _keyChecksum;
}

+ (unsigned char)byteChecksumOfData:(id)arg1;
+ (id)dataDeseralizedFrom:(void*)arg1 maxSize:(unsigned long long)arg2 checksum:(char *)arg3 bytesRead:(unsigned long long*)arg4;
+ (id)errorForInvalidKeyEncoding;
+ (id)log;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)serializeData:(id)arg1 withChecksum:(unsigned char)arg2 to:(void*)arg3;

@end
