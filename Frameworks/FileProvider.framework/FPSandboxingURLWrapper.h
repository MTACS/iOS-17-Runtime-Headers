
@interface FPSandboxingURLWrapper : NSObject <NSSecureCoding> {
    FPSandboxingURLWrapper * _originalDocumentURLWrapper;
    NSData * _promiseScope;
    NSURL * _promiseURL;
    NSData * _scope;
    NSURL * _url;
}

@property (retain) FPSandboxingURLWrapper *originalDocumentURLWrapper;
@property (retain) NSData *promiseScope;
@property (retain) NSURL *promiseURL;
@property (retain) NSData *scope;
@property (nonatomic, copy) NSURL *url;

+ (void)assembleURL:(id)arg1 sandbox:(id)arg2 physicalURL:(id)arg3 physicalSandbox:(id)arg4;
+ (bool)supportsSecureCoding;
+ (id)wrapperWithSecurityScopedURL:(id)arg1;
+ (id)wrapperWithURL:(id)arg1;
+ (id)wrapperWithURL:(id)arg1 extensionClass:(const char *)arg2 error:(id*)arg3;
+ (id)wrapperWithURL:(id)arg1 extensionClass:(const char *)arg2 report:(bool)arg3 error:(id*)arg4;
+ (id)wrapperWithURL:(id)arg1 readonly:(bool)arg2;
+ (id)wrapperWithURL:(id)arg1 readonly:(bool)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 extensionClass:(const char *)arg2 report:(bool)arg3 error:(id*)arg4;
- (id)originalDocumentURLWrapper;
- (id)promiseScope;
- (id)promiseURL;
- (id)scope;
- (void)setOriginalDocumentURLWrapper:(id)arg1;
- (void)setPromiseScope:(id)arg1;
- (void)setPromiseURL:(id)arg1;
- (void)setScope:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
