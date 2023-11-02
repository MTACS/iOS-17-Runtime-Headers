
@interface PHAssetCameraCaptureDeviceProperties : PHAssetPropertySet {
    bool  _isSelfie;
}

@property (nonatomic, readonly) bool isSelfie;

+ (id)keyPathFromPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (bool)isSelfie;

@end
