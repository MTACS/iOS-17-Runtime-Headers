
@interface MusicUI.MonogramArtworkDataSource : NSObject <MPArtworkDataSource> {
    void $__lazy_storage_$_monogramRenderer;
    void cache;
    void rendererToken;
}

- (void).cxx_destruct;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)init;
- (bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end
