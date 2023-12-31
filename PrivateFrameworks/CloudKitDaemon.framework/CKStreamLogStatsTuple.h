
@interface CKStreamLogStatsTuple : NSObject {
    unsigned long long  _count;
    NSString * _fileAndLine;
    unsigned long long  _size;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic, retain) NSString *fileAndLine;
@property (nonatomic) unsigned long long size;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)fileAndLine;
- (void)setCount:(unsigned long long)arg1;
- (void)setFileAndLine:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end
