
@interface IXOwnedDataPromiseSeed : IXDataPromiseSeed <NSCopying, NSSecureCoding> {
    NSString * _sandboxExtensionToken;
    NSURL * _stagingBaseDir;
}

@property (nonatomic, copy) NSString *sandboxExtensionToken;
@property (nonatomic, retain) NSURL *stagingBaseDir;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)clientPromiseClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sandboxExtensionToken;
- (void)setSandboxExtensionToken:(id)arg1;
- (void)setStagingBaseDir:(id)arg1;
- (id)stagingBaseDir;

@end
