
@interface SLSecurityScopedURL : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    NSURL * _URL;
    bool  _readonly;
    NSString * _sandboxExtensionClass;
    long long  _sandboxExtensionHandle;
    NSString * _sandboxExtensionToken;
}

@property (nonatomic, retain) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isReadonly, nonatomic) bool readonly;
@property (nonatomic, copy) NSString *sandboxExtensionClass;
@property (nonatomic) long long sandboxExtensionHandle;
@property (nonatomic, copy) NSString *sandboxExtensionToken;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_issueSandboxExtension;
- (id)debugDescription;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 extensionType:(long long)arg2;
- (id)initWithURL:(id)arg1 readonly:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSandboxExtendedURL:(id)arg1;
- (bool)isReadonly;
- (id)sandboxExtensionClass;
- (long long)sandboxExtensionHandle;
- (id)sandboxExtensionToken;
- (void)setReadonly:(bool)arg1;
- (void)setSandboxExtensionClass:(id)arg1;
- (void)setSandboxExtensionHandle:(long long)arg1;
- (void)setSandboxExtensionToken:(id)arg1;
- (void)setURL:(id)arg1;

@end
