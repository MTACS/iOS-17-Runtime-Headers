
@interface HMIDataReader : NSObject {
    NSData * _data;
    unsigned long long  _position;
}

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (unsigned long long)length;
- (unsigned long long)position;
- (id)readData:(unsigned long long)arg1;
- (unsigned int)readUInt32;
- (unsigned long long)readUInt64;
- (void)seek:(unsigned long long)arg1;

@end
