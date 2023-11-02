
@interface PXPhotosGridFooterStatusController : NSObject <PXAssetsSharingHelperDelegate, PXChangeObserver, PXCloudQuotaControllerHelperDelegate, PXFetchResultCountObserverDelegate> {
    PXCloudQuotaControllerHelper * _cloudQuotaHelper;
    PXAssetsDataSourceCountsController * _countsController;
    Class  _cplActionManagerClass;
    PXCPLUIStatusProvider * _cplUIStatusProvider;
    <PXPhotosGridFooterStatusControllerDelegate> * _delegate;
    PXFilterFooterController * _filterFooterController;
    PXLibraryFilterState * _libraryFilterState;
    PXCPLPhotoLibrarySource * _photoLibrarySource;
    PXFetchResultCountObserver * _renderingCountObserver;
    PXPhotosViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXPhotosGridFooterStatusControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assetCollectionFromViewModel:(id)arg1;
- (id)_photoLibraryFromViewModel:(id)arg1;
- (void)_updateFooterIfNeededWithReason:(id)arg1;
- (void)_updateFooterViewModelWithReason:(id)arg1;
- (void)_updateHasImportantInformation;
- (bool)assetsSharingHelper:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)assetsSharingHelper:(id)arg1 presentViewController:(id)arg2;
- (void)cloudQuotaControllerHelper:(id)arg1 informationViewDidChange:(id)arg2;
- (id)delegate;
- (void)fetchResultCountObserver:(id)arg1 didChangeFetchResultCount:(long long)arg2;
- (id)init;
- (id)initWithViewModel:(id)arg1 itemsCountsController:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)presentingViewControllerForCloudQuotaControllerHelper:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear;

@end
