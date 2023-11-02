
@interface PAAccessReaderSandboxExtension : NSObject {
    long long  _handle;
    NSString * _path;
}

@property (nonatomic, readonly) NSString *path;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHandle:(long long)arg1 forRootDirectory:(id)arg2;
- (id)initWithToken:(id)arg1 forPath:(id)arg2 error:(id*)arg3;
- (id)path;

@end
