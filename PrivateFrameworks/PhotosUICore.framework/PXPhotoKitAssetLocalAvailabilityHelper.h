
@interface PXPhotoKitAssetLocalAvailabilityHelper : NSObject {
    <PXFastEnumeration> * _assets;
    PHResourceLocalAvailabilityRequest * _currentResourceRequest;
    NSProgress * _localAvailabilityProgress;
    NSProgress * _overallProgress;
    NSMutableArray * _pinnedResourceLocalAvailabilityRequests;
    NSMutableArray * _resourceLocalAvailabilityRequests;
    bool  _treatLivePhotoAsStill;
    bool  _wasInterrupted;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) <PXFastEnumeration> *assets;
@property (nonatomic, readonly) PHResourceLocalAvailabilityRequest *currentResourceRequest;
@property (nonatomic, retain) NSProgress *localAvailabilityProgress;
@property (nonatomic, readonly) NSProgress *overallProgress;
@property (nonatomic, readonly) NSMutableArray *pinnedResourceLocalAvailabilityRequests;
@property (nonatomic, readonly) NSMutableArray *resourceLocalAvailabilityRequests;
@property (nonatomic, readonly) bool treatLivePhotoAsStill;
@property (nonatomic, readonly) bool wasInterrupted;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (unsigned long long)_ensureAssetsAreLocallyAvailable:(id*)arg1;
- (id)_setUpLocalAvailabilityRequests;
- (id)assets;
- (id)currentResourceRequest;
- (void)dealloc;
- (id)ensureLocalAvailabilityOfAssetsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithAssets:(id)arg1 treatLivePhotoAsStill:(bool)arg2;
- (id)localAvailabilityProgress;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)overallProgress;
- (id)pinnedResourceLocalAvailabilityRequests;
- (id)resourceLocalAvailabilityRequests;
- (void)setLocalAvailabilityProgress:(id)arg1;
- (bool)treatLivePhotoAsStill;
- (bool)wasInterrupted;
- (id)workQueue;

@end
