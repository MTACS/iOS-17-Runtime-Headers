
@interface HUFaceRecognitionAddPersonItemManager : HFItemManager {
    HMCameraProfile * _cameraProfile;
    HFHomePersonItemProvider * _homePersonItemProvider;
    HMHome * _overrideHome;
    HMPersonManager * _personManager;
    HFPhotosPersonItemProvider * _photosPersonItemProvider;
    HMCameraSignificantEvent * _significantEvent;
}

@property (nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (nonatomic, readonly) HMFaceClassification *faceClassification;
@property (nonatomic, readonly) NAFuture *faceCropImageFuture;
@property (nonatomic, readonly) HFHomePersonItemProvider *homePersonItemProvider;
@property (nonatomic, readonly) HMHome *overrideHome;
@property (nonatomic, readonly) HMPersonManager *personManager;
@property (nonatomic, readonly) HFPhotosPersonItemProvider *photosPersonItemProvider;
@property (nonatomic, readonly) HMCameraSignificantEvent *significantEvent;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)associateFaceClassificationWithExistingPerson:(id)arg1;
- (id)associateFaceClassificationWithNewPersonNamed:(id)arg1;
- (id)cameraProfile;
- (id)faceClassification;
- (id)faceCropImageFuture;
- (id)homePersonItemProvider;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithSignificantEvent:(id)arg1 home:(id)arg2 delegate:(id)arg3;
- (id)overrideHome;
- (id)personManager;
- (id)photosPersonItemProvider;
- (id)significantEvent;

@end
