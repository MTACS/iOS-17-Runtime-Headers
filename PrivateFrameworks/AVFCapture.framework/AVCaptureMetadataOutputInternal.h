
@interface AVCaptureMetadataOutputInternal : NSObject {
    bool  appClipCodeObjectTypeAvailable;
    AVCaptureDataOutputDelegateCallbackHelper * delegateCallbackHelper;
    long long  faceTrackingMaxFaces;
    bool  faceTrackingMetadataObjectTypesAvailable;
    float  faceTrackingNetworkFailureThresholdMultiplier;
    bool  faceTrackingPlusEnabled;
    bool  faceTrackingUsesFaceRecognition;
    bool  headObjectTypesAvailable;
    NSArray * metadataObjectTypes;
    bool  offlineVideoStabilizationMotionMetadataObjectTypesAvailable;
    NSMutableDictionary * previousTwoCMTimesByDetectorType;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  rectOfInterest;
    bool  textRegionObjectTypeAvailable;
    bool  videoPreviewHistogramMetadataObjectTypesAvailable;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
