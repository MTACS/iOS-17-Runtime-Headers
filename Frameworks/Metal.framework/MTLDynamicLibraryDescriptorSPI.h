
@interface MTLDynamicLibraryDescriptorSPI : NSObject <NSCopying> {
    <MTLLibrary> * _library;
    unsigned long long  _options;
    NSURL * _url;
}

@property (nonatomic, retain) <MTLLibrary> *library;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) NSURL *url;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)library;
- (unsigned long long)options;
- (void)setLibrary:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
