
@protocol NSFileProviderTestingDeletion <NSFileProviderTestingOperation>

@required

- (NSFileProviderDomainVersion *)domainVersion;
- (NSString *)sourceItemIdentifier;
- (NSFileProviderItemVersion *)targetItemBaseVersion;
- (NSString *)targetItemIdentifier;
- (unsigned long long)targetSide;

@end
