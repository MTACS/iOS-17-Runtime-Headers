
@interface EFSandboxedURLWrapper : NSObject <EFLoggable, EFPubliclyDescribable, NSSecureCoding> {
    EFDeallocInvocationToken * _invocable;
    bool  _readOnly;
    NSString * _sandboxToken;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EFDeallocInvocationToken *invocable;
@property (getter=isReadOnly, readonly) bool readOnly;
@property (nonatomic, readonly) NSString *sandboxToken;
@property (readonly) Class superclass;
@property (readonly) NSURL *url;

+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addInvalidationHandler:(id /* block */)arg1;
- (id)debugDescription;
- (id)description;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1 readOnly:(bool)arg2;
- (id)invocable;
- (bool)isReadOnly;
- (id)sandboxToken;
- (id)url;

@end
