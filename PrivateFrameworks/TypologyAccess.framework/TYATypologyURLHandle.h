
@interface TYATypologyURLHandle : NSObject {
    long long  _handle;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)dealloc;
- (id)filename;
- (id)initWithURL:(id)arg1 sandboxExtensionToken:(id)arg2;
- (id)url;
- (bool)valid;

@end
