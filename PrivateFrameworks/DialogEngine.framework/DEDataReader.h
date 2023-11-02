
@interface DEDataReader : NSObject <DEReader> {
    NSData * _data;
    unsigned long long  _dataOffset;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic) unsigned long long dataOffset;

- (void).cxx_destruct;
- (void)close;
- (id)data;
- (unsigned long long)dataOffset;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)readData;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)setData:(id)arg1;
- (void)setDataOffset:(unsigned long long)arg1;

@end
