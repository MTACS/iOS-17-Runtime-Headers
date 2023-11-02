
@interface PUAlbumsGadgetDataSourceManager : PXGadgetDataSourceManager <PXChangeObserver> {
    PXLibraryFilterState * _libraryFilterState;
    PHPhotoLibrary * _photoLibrary;
    NSArray * _providers;
    PUSessionInfo * _sessionInfo;
    PXExtendedTraitCollection * _traitCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) NSArray *providers;
@property (nonatomic, retain) PUSessionInfo *sessionInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXExtendedTraitCollection *traitCollection;

- (void).cxx_destruct;
- (id)gadgetProviders;
- (id)initWithTraitCollection:(id)arg1 sessionInfo:(id)arg2 photoLibrary:(id)arg3 libraryFilterState:(id)arg4;
- (id)libraryFilterState;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)photoLibrary;
- (id)providers;
- (void)removeCachedProviders;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (id)traitCollection;

@end
