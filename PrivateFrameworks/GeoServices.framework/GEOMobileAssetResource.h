
@interface GEOMobileAssetResource : NSObject {
    NSURL * _fileURL;
    long long  _sandboxExtension;
}

@property (nonatomic, readonly) NSURL *fileURL;

- (void).cxx_destruct;
- (void)dealloc;
- (id)fileURL;
- (id)initWithURL:(id)arg1 sandboxExtensionData:(id)arg2;

@end
