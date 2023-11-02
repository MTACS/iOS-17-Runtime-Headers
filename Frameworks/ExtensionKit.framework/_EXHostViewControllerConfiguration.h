
@interface _EXHostViewControllerConfiguration : _EXHostViewControllerSessionConfiguration <NSCopying> {
    bool  _beginHostingImmediately;
    <_EXExtensionRepresenting> * _extension;
    _EXExtensionIdentity * _extensionIdentity;
    _EXExtensionInstanceIdentifier * _instanceIdentifier;
    bool  _retryOnHostingFailure;
    long long  _sizeBridgingOptions;
}

@property (nonatomic) bool beginHostingImmediately;
@property (nonatomic, retain) <_EXExtensionRepresenting> *extension;
@property (nonatomic, retain) _EXExtensionIdentity *extensionIdentity;
@property (nonatomic, retain) _EXExtensionInstanceIdentifier *instanceIdentifier;
@property (nonatomic) bool retryOnHostingFailure;
@property (nonatomic, retain) NSString *role;
@property (nonatomic) long long sizeBridgingOptions;

- (void).cxx_destruct;
- (bool)beginHostingImmediately;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)extension;
- (id)extensionIdentity;
- (id)init;
- (id)initWithExtension:(id)arg1;
- (id)initWithExtension:(id)arg1 role:(id)arg2;
- (id)initWithExtensionIdentity:(id)arg1;
- (id)instanceIdentifier;
- (bool)retryOnHostingFailure;
- (id)role;
- (void)setBeginHostingImmediately:(bool)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionIdentity:(id)arg1;
- (void)setInstanceIdentifier:(id)arg1;
- (void)setRetryOnHostingFailure:(bool)arg1;
- (void)setRole:(id)arg1;
- (void)setSizeBridgingOptions:(long long)arg1;
- (long long)sizeBridgingOptions;

@end
