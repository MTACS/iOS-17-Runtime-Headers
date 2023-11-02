
@interface REHTTPFileCache : NSObject {
    NSCache * _cache;
    NSString * _directory;
}

- (void).cxx_destruct;
- (id)initWithRootDirectory:(id)arg1;
- (id)loadFileAtPath:(id)arg1;

@end
