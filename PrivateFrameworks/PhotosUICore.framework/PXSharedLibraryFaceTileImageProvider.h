
@interface PXSharedLibraryFaceTileImageProvider : PXObservable <PXChangeObserver> {
    UIImage * _combinedImage;
    PXFaceTileImageCombinerContext * _context;
    PXFaceTileImageCombiner * _faceTileImageCombiner;
    CNContact * _meContact;
    PXSharedLibraryFaceTileImageProviderModel * _providerModel;
}

@property (nonatomic, readonly, copy) UIImage *combinedImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXSharedLibraryFaceTileImageProviderModel *providerModel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setMeContact:(id)arg1;
- (void)_updateCombinedImage;
- (void)_updateContext;
- (void)_updateIncludeMeContact;
- (id)combinedImage;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)providerModel;
- (void)setCombinedImage:(id)arg1;

@end
