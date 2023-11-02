
@protocol NSFileProviderTestingCreation <NSFileProviderTestingOperation>

@required

- (NSFileProviderDomainVersion *)domainVersion;
- (<NSFileProviderItem> *)sourceItem;
- (unsigned long long)targetSide;

@end
