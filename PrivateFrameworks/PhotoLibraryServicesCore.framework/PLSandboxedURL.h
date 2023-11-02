
@interface PLSandboxedURL : NSURL {
    long long  _sandboxExtensionHandle;
    NSString * _sandboxExtensionToken;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonPLSandboxedURLInitialize;
- (void)_initSandboxExtensionToken:(id)arg1 consume:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initFileURLWithPath:(id)arg1 sandboxExtensionToken:(id)arg2 consume:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 sandboxExtensionToken:(id)arg2 consume:(bool)arg3;

@end
