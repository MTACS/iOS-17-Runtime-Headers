
@interface PLIngestJobCameraMetadata : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _acceptableCropRect;
    PFCameraMetadata * _cameraMetadata;
    NSString * _cameraMetadataPath;
    NSArray * _contactIDsInProximity;
    bool  _hasDeserializedMetadata;
    VNImageAestheticsObservation * _imageAestheticsObservation;
    NSArray * _junkImageClassificationObservations;
    PFCameraMetadata * _overCaptureCameraMetadata;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _preferredCropRect;
    NSData * _sceneprintData;
    long long  _sharedLibraryMode;
    NSDictionary * _smartCamInfo;
}

@property (nonatomic, retain) PFCameraMetadata *cameraMetadata;
@property (nonatomic, retain) PFCameraMetadata *overCaptureCameraMetadata;

+ (bool)faceObservationIngestDisabled;
+ (bool)facePrintIngestDisabled;

- (void).cxx_destruct;
- (void)_ingestCameraMetadata;
- (void)applyCameraMetadataToAsset:(id)arg1;
- (id)cameraMetadata;
- (void)deserializeCameraMetadata;
- (id)initWithCameraMetadataPath:(id)arg1;
- (id)overCaptureCameraMetadata;
- (void)setCameraMetadata:(id)arg1;
- (void)setOverCaptureCameraMetadata:(id)arg1;

@end
