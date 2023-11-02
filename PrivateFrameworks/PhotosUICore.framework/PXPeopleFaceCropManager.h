
@interface PXPeopleFaceCropManager : NSObject <PXPhotoLibraryUIChangeObserver> {
    NSCache * _faceCropCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _faceCropCacheLock;
    NSMutableDictionary * _faceCropRequestsByRequestIDs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _faceCropRequestsByRequestIDsLock;
    NSMutableSet * _peopleWithoutKeyFaces;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _peopleWithoutKeyFacesLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_change:(id)arg1 containsVisibleChangesToAssetWithOID:(id)arg2;
+ (id)_compressionQueue;
+ (struct CGSize { double x1; double x2; })_constrainedSizeForDesiredSize:(struct CGSize { double x1; double x2; })arg1;
+ (double)_cornerRadiusForCornerStyle:(long long)arg1 pixelTargetSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3;
+ (double)_cornerRadiusForRoundedCornerStyleWithDisplayScale:(double)arg1;
+ (double)_cropFactorValueForCropFactor:(long long)arg1;
+ (id)_cropQueue;
+ (id)_faceCropManagerLog;
+ (id)_fetchQueue;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectWithAspectRatioFittingAroundEyeLevelForAspectRatio:(double)arg1 pixelFaceCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 eyeLinePoint:(struct CGPoint { double x1; double x2; })arg3;
+ (bool)_shouldTakeSquareCropForFace:(id)arg1 cropFactor:(long long)arg2 outNormalizedFaceCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
+ (int)generateUniqueRequestID;
+ (double)roundedCornerRadiusForTargetSize:(struct CGSize { double x1; double x2; })arg1 displayScale:(double)arg2;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_cacheResult:(id)arg1;
- (id)_cachedResultForOptions:(id)arg1;
- (void)_cleanupForImage:(id)arg1 request:(id)arg2;
- (void)_compressImage:(id)arg1 request:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)_cropImage:(id)arg1 request:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)_emptyFaceCropCache;
- (void)_executeFaceCropRequest:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_fetchFaceAndAssetIfNecessaryForOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleImage:(id)arg1 info:(id)arg2 faceCropRequest:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)_invalidateCacheForLocalIdentifiers:(id)arg1 wantsNotificationPosted:(bool)arg2 userInfoKey:(id)arg3;
- (int)_prepareFaceCropRequestWithOptions:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)cancelRequestForRequestID:(int)arg1;
- (id)init;
- (void)invalidateCacheForPerson:(id)arg1;
- (bool)isRequestActiveWithRequestID:(int)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (int)requestFaceCropForOptions:(id)arg1 resultHandler:(id /* block */)arg2;
- (int)requestFaceCropImageForPerson:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3 completionHandler:(id /* block */)arg4;

@end
