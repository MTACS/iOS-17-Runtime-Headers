
@interface PXZoomablePhotosBodyLayoutProvider : NSObject <PXChangeObserver, PXPhotosSectionBodyLayoutProvider> {
    PXPhotosViewModel * _viewModel;
    PXZoomablePhotosLayout * _zoomablePhotosLayout;
    PXZoomablePhotosViewModel * _zoomablePhotosViewModel;
    <PXPhotosSectionBodyLayoutProviderInvalidationDelegate> * invalidationDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXPhotosSectionBodyLayoutProviderInvalidationDelegate> *invalidationDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;
@property (nonatomic, readonly) PXZoomablePhotosViewModel *zoomablePhotosViewModel;

- (void).cxx_destruct;
- (void)_configureZoomableLayoutDecorations:(id)arg1 fromAssetSectionLayout:(id)arg2;
- (void)_updatePhotosViewModelWithChanges:(unsigned long long)arg1;
- (void)_updateZoomableViewModelWithChanges:(unsigned long long)arg1;
- (void)configureSectionBodyLayout:(id)arg1 inAssetSectionLayout:(id)arg2 forSectionedLayout:(id)arg3;
- (id)createInteraction;
- (id)createSectionBodyLayoutForSectionedLayout:(id)arg1 dataSource:(id)arg2 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3 spec:(id)arg4 outWantsDecoration:(bool*)arg5;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (id)invalidationDelegate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)sectionedLayout:(id)arg1 bodyLayout:(id)arg2 didChangeDataSource:(id)arg3 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg4 hasSectionChanges:(bool)arg5;
- (void)setInvalidationDelegate:(id)arg1;
- (bool)shouldPreventFaultOutOfBodyLayout:(id)arg1 inAssetSectionLayout:(id)arg2;
- (id)viewModel;
- (id)zoomablePhotosViewModel;

@end
