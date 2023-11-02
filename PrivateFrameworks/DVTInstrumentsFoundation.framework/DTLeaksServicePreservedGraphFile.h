
@interface DTLeaksServicePreservedGraphFile : NSObject {
    int  _fd;
    NSDictionary * _metaDict;
    unsigned long long  _size;
    unsigned long long  _token;
}

@property (nonatomic) int fd;
@property (nonatomic, copy) NSDictionary *metaDict;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long token;

- (void).cxx_destruct;
- (void)dealloc;
- (int)fd;
- (id)metaDict;
- (void)setFd:(int)arg1;
- (void)setMetaDict:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setToken:(unsigned long long)arg1;
- (unsigned long long)size;
- (unsigned long long)token;

@end
