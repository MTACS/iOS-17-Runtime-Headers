
@interface MKImportContext : NSObject {
    unsigned long long  _importCount;
    unsigned long long  _importErrorCount;
    unsigned long long  _size;
}

@property (nonatomic) unsigned long long importCount;
@property (nonatomic) unsigned long long importErrorCount;
@property (nonatomic) unsigned long long size;

- (unsigned long long)importCount;
- (unsigned long long)importErrorCount;
- (void)setImportCount:(unsigned long long)arg1;
- (void)setImportErrorCount:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end
