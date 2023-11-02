
@protocol NSFileProviderTestingOperation <NSObject>

@required

- (<NSFileProviderTestingChildrenEnumeration> *)asChildrenEnumeration;
- (<NSFileProviderTestingCollisionResolution> *)asCollisionResolution;
- (<NSFileProviderTestingContentFetch> *)asContentFetch;
- (<NSFileProviderTestingCreation> *)asCreation;
- (<NSFileProviderTestingDeletion> *)asDeletion;
- (<NSFileProviderTestingIngestion> *)asIngestion;
- (<NSFileProviderTestingLookup> *)asLookup;
- (<NSFileProviderTestingModification> *)asModification;
- (long long)type;

@end
