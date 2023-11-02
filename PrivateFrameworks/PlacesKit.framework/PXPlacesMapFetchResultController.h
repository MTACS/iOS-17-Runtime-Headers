
@interface PXPlacesMapFetchResultController : NSObject <PXChangeObserver> {
    PXPlacesPhotoAssetsStore * _albumAssetStore;
    PXPlacesMapPipeline * _albumPipeline;
    unsigned long long  _contentMode;
    PXPlacesMapPipeline * _currentPipeline;
    <PXPlacesMapGeotaggableInfoDelegate> * _geotaggableInfoDelegate;
    PXLibraryFilterState * _libraryFilterState;
    <PXPlacesMapControllerAccess> * _mapViewController;
    PHPhotoLibrary * _photoLibrary;
    PXPlacesPhotoAssetsStore * _providedAssetStore;
    PXPlacesMapPipeline * _providedPipeline;
    NSObject<OS_dispatch_queue> * _serialQueue;
    <PXPlacesMapThumbnailCurationDelegate> * _thumbnailCurationDelegate;
}

@property (nonatomic, retain) PXPlacesPhotoAssetsStore *albumAssetStore;
@property (nonatomic, retain) PXPlacesMapPipeline *albumPipeline;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic, retain) PXPlacesMapPipeline *currentPipeline;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PXPlacesMapGeotaggableInfoDelegate> *geotaggableInfoDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) PXPlacesMapController *mapController;
@property (nonatomic, readonly) PXPlacesMapView *mapView;
@property (nonatomic, retain) <PXPlacesMapControllerAccess> *mapViewController;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (retain) PXPlacesPhotoAssetsStore *providedAssetStore;
@property (retain) PXPlacesMapPipeline *providedPipeline;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;
@property (nonatomic) <PXPlacesMapThumbnailCurationDelegate> *thumbnailCurationDelegate;

- (void).cxx_destruct;
- (id)albumAssetStore;
- (id)albumPipeline;
- (unsigned long long)contentMode;
- (id)currentAssetStore;
- (id)currentPipeline;
- (void)focusOnGeotaggablesAnimated:(bool)arg1;
- (void)focusOnMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)focusOnProvidedAssetsAnimated:(bool)arg1;
- (void)focusOnProvidedAssetsImmediately;
- (id)geotaggableInfoDelegate;
- (id)init;
- (id)initWithGeotaggableInfoDelegate:(id)arg1 andMapViewController:(id)arg2 libraryFilterState:(id)arg3 photoLibrary:(id)arg4;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)libraryFilterState;
- (void)loadFetchResult:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)loadFetchResults:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)loadProvidedAssetStoreWithCompletion:(id /* block */)arg1;
- (id)mapController;
- (id)mapView;
- (id)mapViewController;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)photoLibrary;
- (id)providedAssetStore;
- (id)providedPipeline;
- (void)reloadContentModeWithCompletion:(id /* block */)arg1;
- (void)reloadMapWithCompletion:(id /* block */)arg1;
- (void)resumeWithCompletion:(id /* block */)arg1;
- (id)serialQueue;
- (void)setAlbumAssetStore:(id)arg1;
- (void)setAlbumPipeline:(id)arg1;
- (void)setContentMode:(unsigned long long)arg1;
- (void)setCurrentPipeline:(id)arg1;
- (void)setGeotaggableInfoDelegate:(id)arg1;
- (void)setMapViewController:(id)arg1;
- (void)setProvidedAssetStore:(id)arg1;
- (void)setProvidedPipeline:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setThumbnailCurationDelegate:(id)arg1;
- (id)thumbnailCurationDelegate;
- (id)visibleGeotaggables;

@end
