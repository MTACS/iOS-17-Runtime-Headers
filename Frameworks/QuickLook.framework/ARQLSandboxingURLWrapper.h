
@interface ARQLSandboxingURLWrapper : NSObject <NSSecureCoding> {
    NSData * _promiseScope;
    NSURL * _promiseURL;
    NSData * _scope;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSURL *url;

+ (void)assembleURL:(id)arg1 sandbox:(id)arg2 physicalURL:(id)arg3 physicalSandbox:(id)arg4;
+ (bool)supportsSecureCoding;
+ (id)wrapperWithURL:(id)arg1 extensionClass:(const char *)arg2 error:(id*)arg3;
+ (id)wrapperWithURL:(id)arg1 extensionClass:(const char *)arg2 report:(bool)arg3 error:(id*)arg4;
+ (id)wrapperWithURL:(id)arg1 readonly:(bool)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 extensionClass:(const char *)arg2 report:(bool)arg3 error:(id*)arg4;
- (id)issueSandboxExtensionForURL:(id)arg1 extensionClass:(const char *)arg2 report:(bool)arg3 error:(id*)arg4;
- (id)url;

@end
