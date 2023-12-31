
@interface TSUZipWriterEntry : NSObject {
    unsigned int  _CRC;
    NSString * _name;
    unsigned long long  _offset;
    unsigned long long  _size;
}

@property (nonatomic) unsigned int CRC;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long size;

- (void).cxx_destruct;
- (unsigned int)CRC;
- (id)name;
- (unsigned long long)offset;
- (void)setCRC:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end
