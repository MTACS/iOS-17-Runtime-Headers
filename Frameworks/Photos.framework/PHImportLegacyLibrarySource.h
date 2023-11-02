
@interface PHImportLegacyLibrarySource : PHImportUrlSource {
    NSURL * _libraryURL;
}

- (void).cxx_destruct;
- (bool)canReference;
- (bool)containsSupportedMediaWithImportExceptions:(id*)arg1;
- (id)initWithUrls:(id)arg1;
- (bool)isLibrary;
- (bool)isReadonlyVolume;
- (void)loadSidecarsFor:(id)arg1;
- (id)name;
- (id)productKind;

@end
