
@interface TRIPurgeabilityLevelMapper : NSObject {
    <TRIClientNamespaceMetadataStoring> * _namespaceMetadataStorage;
    <TRIPaths> * _paths;
}

+ (int)availableSpaceClassFromPurgeabilityLevel:(int)arg1;
+ (id)purgeabilityLevelFromCacheDeleteUrgency:(int)arg1;

- (void).cxx_destruct;
- (int)availableSpaceClassForFactorNames:(id)arg1 namespaceName:(id)arg2;
- (id)initWithPaths:(id)arg1 namespaceMetadataStorage:(id)arg2;
- (int)purgeabilityLevelForNamespace:(id)arg1;

@end
