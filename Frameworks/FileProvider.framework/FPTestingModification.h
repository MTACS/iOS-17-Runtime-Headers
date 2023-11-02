
@interface FPTestingModification : FPTestingOperation <NSFileProviderTestingModification> {
    unsigned long long  _changedFields;
    NSFileProviderDomainVersion * _domainVersion;
    long long  _rawFields;
    long long  _snapshotVersion;
    <NSFileProviderItem> * _sourceItem;
    NSFileProviderItemVersion * _targetItemBaseVersion;
    NSString * _targetItemIdentifier;
}

@property (nonatomic, readonly) unsigned long long changedFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSFileProviderDomainVersion *domainVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long rawFields;
@property (nonatomic, readonly) long long snapshotVersion;
@property (nonatomic, readonly) <NSFileProviderItem> *sourceItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSFileProviderItemVersion *targetItemBaseVersion;
@property (nonatomic, readonly) NSString *targetItemIdentifier;
@property (nonatomic, readonly) unsigned long long targetSide;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asModification;
- (unsigned long long)changedFields;
- (id)domainVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperationIdentifier:(id)arg1 sourceItem:(id)arg2 targetItemIdentifier:(id)arg3 targetItemBaseVersion:(id)arg4 changedFields:(unsigned long long)arg5 domainVersion:(id)arg6 rawFields:(long long)arg7 snapshotVersion:(long long)arg8;
- (long long)rawFields;
- (long long)snapshotVersion;
- (id)sourceItem;
- (id)targetItemBaseVersion;
- (id)targetItemIdentifier;
- (unsigned long long)targetSide;
- (long long)type;

@end
