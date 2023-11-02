
@interface MTLBinaryArchiveDescriptor : NSObject <NSCopying> {
    unsigned long long  _options;
    NSURL * _url;
}

@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic) unsigned long long writingOptions;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (void)setWritingOptions:(unsigned long long)arg1;
- (id)url;
- (unsigned long long)writingOptions;

@end
