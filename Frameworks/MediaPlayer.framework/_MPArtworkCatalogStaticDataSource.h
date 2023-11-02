
@interface _MPArtworkCatalogStaticDataSource : NSObject <MPArtworkDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedDataSource;

- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (bool)areRepresentationsOfKind:(long long)arg1 availableForCatalog:(id)arg2;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)existingRepresentationOfKind:(long long)arg1 forArtworkCatalog:(id)arg2;
- (bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadRepresentationOfKind:(long long)arg1 forArtworkCatalog:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end
