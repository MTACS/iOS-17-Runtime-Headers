
@interface PXPhotosLibraryFooterViewModel : PXFooterViewModel <PXAssetsDataSourceManagerObserver, PXCloudQuotaControllerHelperDelegate> {
    PXPhotoKitAssetsDataSourceManager * _assetsDataSourceManager;
    PXCloudQuotaControllerHelper * _cloudQuotaHelper;
    PXCPLUIStatusProvider * _cplUIStatusProvider;
    PHPhotoLibrary * _photoLibrary;
    <PXPhotosLibraryFooterViewModelPresentationDelegate> * _presentingDelegate;
    NSArray * _syncProgressAlbums;
}

@property (nonatomic, readonly) PXPhotoKitAssetsDataSourceManager *assetsDataSourceManager;
@property (nonatomic, retain) PXCloudQuotaControllerHelper *cloudQuotaHelper;
@property (nonatomic, retain) PXCPLUIStatusProvider *cplUIStatusProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic) <PXPhotosLibraryFooterViewModelPresentationDelegate> *presentingDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *syncProgressAlbums;

- (void).cxx_destruct;
- (void)_updateExposedProperties;
- (id)assetsDataSourceManager;
- (void)cloudQuotaControllerHelper:(id)arg1 informationViewDidChange:(id)arg2;
- (id)cloudQuotaHelper;
- (id)cplUIStatusProvider;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)photoLibrary;
- (id)presentingDelegate;
- (id)presentingViewControllerForCloudQuotaControllerHelper:(id)arg1;
- (void)setCloudQuotaHelper:(id)arg1;
- (void)setCplUIStatusProvider:(id)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (id)syncProgressAlbums;

@end
