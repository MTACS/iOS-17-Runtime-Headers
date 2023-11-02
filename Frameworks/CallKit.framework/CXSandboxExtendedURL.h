
@interface CXSandboxExtendedURL : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    long long  _sandboxExtensionHandle;
    NSString * _sandboxExtensionToken;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic) long long sandboxExtensionHandle;
@property (nonatomic, copy) NSString *sandboxExtensionToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSandboxExtendedURL:(id)arg1;
- (long long)sandboxExtensionHandle;
- (id)sandboxExtensionToken;
- (void)setSandboxExtensionHandle:(long long)arg1;
- (void)setSandboxExtensionToken:(id)arg1;
- (void)setURL:(id)arg1;

@end
