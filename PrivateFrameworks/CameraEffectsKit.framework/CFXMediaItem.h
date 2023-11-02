
@interface CFXMediaItem : NSObject {
    NSURL * _adjustedAssetURL;
    bool  _adjustmentsDataWasSet;
    long long  _cameraMode;
    long long  _cameraPosition;
    CFXClip * _clip;
    bool  _initializedWithoutSettingAllProperties;
    NSURL * _metadataURL;
    NSURL * _originalAssetURL;
    long long  _type;
}

@property (nonatomic, copy) NSURL *adjustedAssetURL;
@property (nonatomic, copy) NSData *adjustmentsData;
@property (nonatomic) bool adjustmentsDataWasSet;
@property (nonatomic, readonly) long long cameraMode;
@property (nonatomic, readonly) long long cameraPosition;
@property (nonatomic, readonly) CFXClip *clip;
@property (nonatomic) bool initializedWithoutSettingAllProperties;
@property (nonatomic, readonly) NSURL *metadataURL;
@property (nonatomic, copy) NSURL *originalAssetURL;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)CFX_updateCameraPositionForPhotoType;
- (id)adjustedAssetURL;
- (id)adjustmentsData;
- (bool)adjustmentsDataWasSet;
- (long long)cameraMode;
- (long long)cameraPosition;
- (id)clip;
- (void)createClipForMediaType:(long long)arg1 assetURL:(id)arg2 cameraMode:(long long)arg3 effectStack:(id)arg4;
- (id)init;
- (id)initWithCameraMode:(long long)arg1 clip:(id)arg2 assetMediaURL:(id)arg3 assetMetadataURL:(id)arg4 cameraPosition:(long long)arg5;
- (id)initWithType:(long long)arg1 originalAssetURL:(id)arg2 adjustmentsData:(id)arg3;
- (bool)initializedWithoutSettingAllProperties;
- (id)metadataURL;
- (id)originalAssetURL;
- (void)setAdjustedAssetURL:(id)arg1;
- (void)setAdjustmentsData:(id)arg1;
- (void)setAdjustmentsDataWasSet:(bool)arg1;
- (void)setInitializedWithoutSettingAllProperties:(bool)arg1;
- (void)setOriginalAssetURL:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
