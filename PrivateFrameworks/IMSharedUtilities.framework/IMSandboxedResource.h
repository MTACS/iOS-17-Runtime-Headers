
@interface IMSandboxedResource : NSObject <NSSecureCoding> {
    id  _resource;
    NSString * _sandboxExtension;
    long long  _sandboxExtensionHandle;
}

@property (nonatomic, retain) id resource;
@property (nonatomic, retain) NSString *sandboxExtension;
@property (nonatomic) long long sandboxExtensionHandle;

+ (Class)resourceClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (char *)_sandboxExtensionForPID:(int)arg1;
- (bool)accessResourceByConsumingSandboxExtensionWithBlock:(id /* block */)arg1;
- (void)authorizeForPID:(int)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)resource;
- (id)sandboxExtension;
- (long long)sandboxExtensionHandle;
- (void)setResource:(id)arg1;
- (void)setSandboxExtension:(id)arg1;
- (void)setSandboxExtensionHandle:(long long)arg1;

@end
