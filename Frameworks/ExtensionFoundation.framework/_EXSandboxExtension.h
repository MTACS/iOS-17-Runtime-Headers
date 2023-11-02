
@interface _EXSandboxExtension : NSObject <NSSecureCoding> {
    unsigned long long  _consumedSandboxExtension;
    NSString * _sandboxExtensionToken;
}

@property unsigned long long consumedSandboxExtension;
@property (retain) NSString *sandboxExtensionToken;

+ (bool)sandboxed;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)consume;
- (unsigned long long)consumedSandboxExtension;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionClass:(id)arg1 machServiceName:(id)arg2 process:(struct { unsigned int x1[8]; })arg3;
- (id)initWithURL:(id)arg1 readonly:(bool)arg2;
- (id)sandboxExtensionToken;
- (void)setConsumedSandboxExtension:(unsigned long long)arg1;
- (void)setSandboxExtensionToken:(id)arg1;

@end
