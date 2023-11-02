
@interface SKPartition : NSObject {
    SKFilesystem * _fs;
    NSString * _name;
    unsigned long long  _size;
}

@property (nonatomic, retain) SKFilesystem *fs;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long size;

- (void).cxx_destruct;
- (id)buildWithScheme:(int)arg1 sectorSize:(unsigned long long)arg2;
- (id)fs;
- (id)name;
- (void)setFs:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end
