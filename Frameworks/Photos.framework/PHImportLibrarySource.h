
@interface PHImportLibrarySource : PHImportUrlSource {
    NSURL * _libraryURL;
    PLPhotoLibraryPathManager * _pathManager;
    NSDictionary * _renderResourcePathsByIdentifier;
}

@property (nonatomic, retain) PLPhotoLibraryPathManager *pathManager;

+ (bool)_isValidPhotoLibrary:(id)arg1 error:(id*)arg2;
+ (id)importLibrarySourceForURL:(id)arg1 exceptions:(id*)arg2;
+ (id)supportedImportLibraryTypes;

- (void).cxx_destruct;
- (bool)_isValidPhotoLibraryWithError:(id*)arg1;
- (id)_resourcePathsByUuidForPaths:(id)arg1;
- (id)assetsByProcessingItem:(id)arg1;
- (void)beginProcessingWithCompletion:(id /* block */)arg1;
- (bool)canReference;
- (bool)containsSupportedMediaWithImportExceptions:(id*)arg1;
- (id)initWithUrls:(id)arg1;
- (bool)isLibrary;
- (void)loadSidecarsFor:(id)arg1;
- (id)name;
- (id)pathManager;
- (id)productKind;
- (void)setPathManager:(id)arg1;

@end
