
@interface PBSecurityScopedURLWrapper : NSObject <NSSecureCoding> {
    bool  _backedByFileProvider;
    FPItem * _fpItem;
    bool  _readonly;
    NSData * _scope;
    NSURL * _url;
}

@property (getter=isBackedByFileProvider, nonatomic, readonly) bool backedByFileProvider;
@property (nonatomic, readonly) FPItem *fpItem;
@property (getter=isReadonly, nonatomic, readonly) bool readonly;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fpItem;
- (id)initWithCoder:(id)arg1;
- (id)initWithFPItem:(id)arg1;
- (id)initWithNSURLWrapper:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 issueExtension:(bool)arg2 readonly:(bool)arg3 extensionClass:(id)arg4;
- (id)initWithURL:(id)arg1 readonly:(bool)arg2;
- (id)initWithURL:(id)arg1 readonly:(bool)arg2 extensionClass:(id)arg3;
- (id)initWithURLWithoutIssuingExtension:(id)arg1;
- (bool)isBackedByFileProvider;
- (bool)isReadonly;
- (id)nsURLWrapper;
- (id)url;

@end
