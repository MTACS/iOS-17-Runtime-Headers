
@interface FigCaptureVideoDataSinkPipelineConfiguration : NSObject {
    bool  _P3ToBT2020ConversionEnabled;
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    bool  _faceTrackingEnabled;
    bool  _forcePixelTransfer;
    int  _maxLossyCompressionLevel;
    int  _motionAttachmentsSource;
    bool  _offlineVISMotionDataEnabled;
    NSArray * _portTypesWithGeometricDistortionCorrectionInVISEnabled;
    bool  _previewStabilizationEnabled;
    FigCaptureSourceConfiguration * _sourceConfiguration;
    int  _sourceDeviceType;
    bool  _sourceHasAppliedAllZoom;
    int  _sourceNodeColorSpaceProperties;
    struct FigCaptureVideoTransform { 
        bool mirrored; 
        int rotationDegrees; 
        struct { 
            int width; 
            int height; 
        } dimensions; 
    }  _sourceVideoTransform;
    FigVideoCaptureConnectionConfiguration * _videoDataConnectionConfiguration;
    bool  _videoSTFEnabled;
    int  _videoStabilizationType;
    struct { 
        int width; 
        int height; 
    }  _visOutputDimensions;
}

- (void)dealloc;

@end
