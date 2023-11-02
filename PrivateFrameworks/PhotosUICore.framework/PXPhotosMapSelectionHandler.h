
@interface PXPhotosMapSelectionHandler : NSObject <PXOneUpPresentationDelegate, PXPlacesMapControllerSelectionDelegate> {
    PXAssetsDataSourceManager * _oneUpDataSourceManager;
    UIViewController * _presentingViewController;
    PXPhotosViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXAssetsDataSourceManager *oneUpDataSourceManager;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;

- (void).cxx_destruct;
- (void)didSelectGeotaggableItems:(id)arg1 fromMapView:(id)arg2;
- (id)init;
- (id)initWithViewModel:(id)arg1 presentingViewController:(id)arg2;
- (id)oneUpDataSourceManager;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (id)presentingViewController;
- (void)setOneUpDataSourceManager:(id)arg1;
- (id)viewModel;

@end
