
@interface INSecurityScopedURL : NSObject {
    long long  _accessCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (bool)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;
- (id)url;

@end
