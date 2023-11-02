
@interface OITSUTemporaryDirectory : NSObject {
    bool  _leak;
    NSString * _path;
}

- (void).cxx_destruct;
- (id)URL;
- (bool)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)init;
- (id)initForWritingToURL:(id)arg1 error:(id*)arg2;
- (id)initWithError:(id*)arg1;
- (id)initWithSignature:(id)arg1 error:(id*)arg2;
- (id)initWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id*)arg3;
- (void)leakTemporaryDirectory;
- (id)path;

@end
