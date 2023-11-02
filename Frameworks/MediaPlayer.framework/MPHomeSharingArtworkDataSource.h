
@interface MPHomeSharingArtworkDataSource : MPAbstractNetworkArtworkDataSource <MPArtworkDataSourceIdentifiable> {
    HSHomeSharingLibrary * _library;
}

@property (nonatomic, readonly) NSString *artworkDataSourceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HSHomeSharingLibrary *library;
@property (readonly) Class superclass;

+ (id)artworkDataSourceShortDescription;
+ (id)artworkDataSourceWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)artworkDataSourceIdentifier;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)library;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)setLibrary:(id)arg1;
- (bool)shouldLookForLargerImageRepresentationsWhenBestRepresentationIsUnavailable;
- (id)supportedSizesForCatalog:(id)arg1;

@end
