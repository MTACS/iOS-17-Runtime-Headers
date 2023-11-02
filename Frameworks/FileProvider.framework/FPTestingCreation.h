
@interface FPTestingCreation : FPTestingOperation <NSFileProviderTestingCreation> {
    NSFileProviderDomainVersion * _domainVersion;
    long long  _snapshotVersion;
    <NSFileProviderItem> * _sourceItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSFileProviderDomainVersion *domainVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long snapshotVersion;
@property (nonatomic, readonly) <NSFileProviderItem> *sourceItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long targetSide;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asCreation;
- (id)domainVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperationIdentifier:(id)arg1 sourceItem:(id)arg2 domainVersion:(id)arg3 snapshotVersion:(long long)arg4;
- (long long)snapshotVersion;
- (id)sourceItem;
- (unsigned long long)targetSide;
- (long long)type;

@end
