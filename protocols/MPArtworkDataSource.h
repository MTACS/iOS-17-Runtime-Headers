
@protocol MPArtworkDataSource <NSObject>

@required

- (bool)areRepresentationsAvailableForCatalog:(MPArtworkCatalog *)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg1;
- (MPArtworkRepresentation *)existingRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg1;
- (bool)isRepresentation:(MPArtworkRepresentation *)arg1 bestRepresentationForArtworkCatalog:(MPArtworkCatalog *)arg2;
- (void)loadRepresentationForArtworkCatalog:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: MPArtworkCatalog *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPArtworkRepresentation *, NSError *, void*
- (<MPArtworkDataSourceVisualIdenticality> *)visualIdenticalityIdentifierForCatalog:(MPArtworkCatalog *)arg1;

@optional

- (bool)areRepresentationsOfKind:(long long)arg1 availableForCatalog:(MPArtworkCatalog *)arg2;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(MPArtworkCatalog *)arg2 options:(NSDictionary *)arg3;
- (MPArtworkRepresentation *)existingRepresentationOfKind:(long long)arg1 forArtworkCatalog:(MPArtworkCatalog *)arg2;
- (void)getExportableArtworkPropertiesForCatalog:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: MPArtworkCatalog *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPExportableArtworkProperties *, NSError *, void*
- (bool)hasExistingRepresentationOnDiskForArtworkCatalog:(MPArtworkCatalog *)arg1;
- (bool)hasExportableArtworkPropertiesForCatalog:(MPArtworkCatalog *)arg1;
- (void)loadArtworkEffectResultForEffectType:(void *)arg1 catalog:(void *)arg2 options:(void *)arg3 systemEffectHandler:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 22: long long, MPArtworkCatalog *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, id, NSError *, void*, void*, id /* block */, void*, void, id /* block */, id, NSError *, void*
- (void)loadRepresentationOfKind:(void *)arg1 forArtworkCatalog:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: long long, MPArtworkCatalog *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPArtworkRepresentation *, NSError *, void*

@end
