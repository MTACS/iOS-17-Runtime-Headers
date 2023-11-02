
@interface PHSandboxExtensionWrapper : NSObject {
    long long  _handle;
    NSString * _token;
}

+ (id)wrapperWithToken:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;

@end
