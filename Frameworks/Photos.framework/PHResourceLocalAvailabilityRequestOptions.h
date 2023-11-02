
@interface PHResourceLocalAvailabilityRequestOptions : NSObject {
    bool  _allowMissingVideoComplement;
    bool  _dontAllowRAW;
    bool  _includeAllAssetResources;
    bool  _includeOriginalResourcesOnly;
    NSObject<OS_dispatch_queue> * _resultHandlerQueue;
    bool  _treatLivePhotoAsStill;
}

@property (nonatomic) bool allowMissingVideoComplement;
@property (nonatomic) bool dontAllowRAW;
@property (nonatomic) bool includeAllAssetResources;
@property (nonatomic) bool includeOriginalResourcesOnly;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (nonatomic) bool treatLivePhotoAsStill;

- (void).cxx_destruct;
- (bool)allowMissingVideoComplement;
- (id)description;
- (bool)dontAllowRAW;
- (bool)includeAllAssetResources;
- (bool)includeOriginalResourcesOnly;
- (id)resultHandlerQueue;
- (void)setAllowMissingVideoComplement:(bool)arg1;
- (void)setDontAllowRAW:(bool)arg1;
- (void)setIncludeAllAssetResources:(bool)arg1;
- (void)setIncludeOriginalResourcesOnly:(bool)arg1;
- (void)setResultHandlerQueue:(id)arg1;
- (void)setTreatLivePhotoAsStill:(bool)arg1;
- (bool)treatLivePhotoAsStill;

@end
