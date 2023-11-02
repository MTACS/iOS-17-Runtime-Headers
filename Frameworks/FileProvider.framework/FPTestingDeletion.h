
@interface FPTestingDeletion : FPTestingOperation <NSFileProviderTestingDeletion> {
    NSFileProviderDomainVersion * _domainVersion;
    NSString * _sourceItemIdentifier;
    NSFileProviderItemVersion * _targetItemBaseVersion;
    NSString * _targetItemIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSFileProviderDomainVersion *domainVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *sourceItemIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSFileProviderItemVersion *targetItemBaseVersion;
@property (nonatomic, readonly) NSString *targetItemIdentifier;
@property (nonatomic, readonly) unsigned long long targetSide;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDeletion;
- (id)domainVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperationIdentifier:(id)arg1 sourceItemIdentifier:(id)arg2 targetItemIdentifier:(id)arg3 targetItemBaseVersion:(id)arg4 domainVersion:(id)arg5;
- (id)sourceItemIdentifier;
- (id)targetItemBaseVersion;
- (id)targetItemIdentifier;
- (unsigned long long)targetSide;
- (long long)type;

@end
