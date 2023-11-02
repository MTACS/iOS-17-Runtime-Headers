
@interface WFSSHKeyDecoder : NSObject {
    NSData * _data;
    unsigned long long  _length;
    unsigned long long  _offset;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long offset;

- (void).cxx_destruct;
- (void)advanceBy:(unsigned long long)arg1;
- (const char *)currentPointer;
- (id)data;
- (id)decodeDataWithLength:(unsigned long long)arg1;
- (id)decodeDataWithPrecedingLength;
- (unsigned int)decodeInteger;
- (id)decodeStringWithLength:(unsigned long long)arg1;
- (id)decodeStringWithPrecedingLength;
- (id)initWithData:(id)arg1;
- (unsigned long long)length;
- (unsigned long long)offset;
- (void)setLength:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;

@end
