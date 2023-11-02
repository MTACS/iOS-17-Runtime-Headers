
@interface AVCaptureVideoDataOutputInternal : NSObject {
    bool  alwaysDiscardsLateVideoFrames;
    bool  automaticallyConfiguresOutputBufferDimensions;
    NSArray * availableVideoCVPixelFormatTypes;
    NSDictionary * clientVideoSettings;
    AVCaptureDataOutputDelegateCallbackHelper * delegateCallbackHelper;
    bool  deliversPreviewSizedOutputBuffers;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  deprecatedMinFrameDuration;
    NSArray * requestedBufferAttachments;
    bool  sceneStabilityMetadataEnabled;
    NSDictionary * videoSettings;
    bool  videoSettingsDimensionsOverrideEnabled;
    bool  videoSettingsDimensionsOverrideEnabledByClient;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
