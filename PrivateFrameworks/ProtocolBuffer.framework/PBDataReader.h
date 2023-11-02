
@interface PBDataReader : NSObject {
    const char * _bytes;
    NSData * _data;
    bool  _error;
    unsigned long long  _length;
    unsigned long long  _pos;
}

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long position;

- (void).cxx_destruct;
- (id)data;
- (bool)hasError;
- (bool)hasMoreData;
- (id)initWithData:(id)arg1;
- (bool)isAtEnd;
- (unsigned long long)length;
- (bool)mark:(struct { unsigned long long x1; unsigned long long x2; }*)arg1;
- (unsigned long long)offset;
- (unsigned long long)position;
- (bool)readBOOL;
- (unsigned short)readBigEndianFixed16;
- (unsigned int)readBigEndianFixed32;
- (unsigned long long)readBigEndianFixed64;
- (id)readBigEndianShortThenString;
- (id)readBytes:(unsigned int)arg1;
- (id)readData;
- (double)readDouble;
- (unsigned int)readFixed32;
- (unsigned long long)readFixed64;
- (float)readFloat;
- (int)readInt32;
- (long long)readInt64;
- (BOOL)readInt8;
- (id)readProtoBuffer;
- (int)readSfixed32;
- (long long)readSfixed64;
- (int)readSint32;
- (long long)readSint64;
- (id)readString;
- (void)readTag:(unsigned short*)arg1 andType:(char *)arg2;
- (void)readTag:(unsigned int*)arg1 type:(char *)arg2;
- (unsigned int)readUint32;
- (unsigned long long)readUint64;
- (long long)readVarInt;
- (void)recall:(const struct { unsigned long long x1; unsigned long long x2; }*)arg1;
- (bool)seekToOffset:(unsigned long long)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setPosition:(unsigned long long)arg1;
- (bool)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2;
- (bool)skipValueWithTag:(unsigned int)arg1 type:(unsigned char)arg2;
- (void)updateData:(id)arg1;

@end