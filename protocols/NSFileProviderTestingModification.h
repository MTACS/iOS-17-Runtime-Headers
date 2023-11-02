
@protocol NSFileProviderTestingModification <NSFileProviderTestingOperation>

@required

- (unsigned long long)changedFields;
- (NSFileProviderDomainVersion *)domainVersion;
- (<NSFileProviderItem> *)sourceItem;
- (NSFileProviderItemVersion *)targetItemBaseVersion;
- (NSString *)targetItemIdentifier;
- (unsigned long long)targetSide;

@end
