
@interface PXFooterViewModelController : NSObject <PXAssetsSharingHelperDelegate, PXChangeObserver, PXCloudQuotaControllerHelperDelegate, PXFetchResultCountObserverDelegate> {
    PXCloudQuotaControllerHelper * _cloudQuotaHelper;
    PXAssetsDataSourceCountsController * _countsController;
    PXCPLUIStatusProvider * _cplUIStatusProvider;
    <PXFooterViewModelControllerDelegate> * _delegate;
    PXFooterViewModel * _footerViewModel;
    PHPhotoLibrary * _photoLibrary;
    PXFetchResultCountObserver * _renderingCountObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXFooterViewModelControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXFooterViewModel *footerViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateFooterViewModel;
- (bool)assetsSharingHelper:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)assetsSharingHelper:(id)arg1 presentViewController:(id)arg2;
- (void)cloudQuotaControllerHelper:(id)arg1 informationViewDidChange:(id)arg2;
- (id)delegate;
- (void)fetchResultCountObserver:(id)arg1 didChangeFetchResultCount:(long long)arg2;
- (id)footerViewModel;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)presentingViewControllerForCloudQuotaControllerHelper:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
