
@interface DESizeWriter : NSObject <DEWriter> {
    unsigned long long  _size;
}

@property (nonatomic) unsigned long long size;

- (void)close;
- (id)init;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;
- (void)writeData:(id)arg1;

@end
