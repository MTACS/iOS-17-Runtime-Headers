
@interface FigCaptureMovieFileSinkPipelineConfiguration : NSObject {
    bool  _P3ToBT2020ConversionEnabled;
    FigAudioCaptureConnectionConfiguration * _audioConnectionConfiguration;
    bool  _boxedMetadataPostVISEnabled;
    FigCaptureSourceConfiguration * _cameraConfiguration;
    FigMetadataItemCaptureConnectionConfiguration * _cameraDebugInfoMetadataConnectionConfiguration;
    bool  _captureDeviceHasOverCaptureEnabled;
    NSString * _clientApplicationID;
    FigDepthDataCaptureConnectionConfiguration * _depthDataConnectionConfiguration;
    bool  _depthDataDeliveryEnabled;
    struct { 
        int width; 
        int height; 
    }  _depthOutputDimensions;
    NSArray * _detectedObjectMetadataConnectionConfigurations;
    bool  _frameReconstructionEnabled;
    bool  _lightSourceMaskAndKeypointDescriptorDataEnabled;
    int  _maxLossyCompressionLevel;
    long long  _maximumAllowedInFlightCompressedBytes;
    int  _motionAttachmentsSource;
    bool  _offlineVISEnabled;
    bool  _overCaptureEnabled;
    NSArray * _portTypesWithGeometricDistortionCorrectionInVISEnabled;
    FigVideoCaptureConnectionConfiguration * _sceneClassifierConnectionConfiguration;
    bool  _semanticStyleRenderingEnabled;
    struct { 
        unsigned short major; 
        unsigned short minor; 
        unsigned short patch; 
    }  _smartCameraPipelineVersion;
    FigVideoCaptureConnectionConfiguration * _stillImageConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration * _videoConnectionConfiguration;
    bool  _videoGreenGhostMitigationEnabled;
    bool  _videoSTFEnabled;
    struct FigCaptureVideoTransform { 
        bool mirrored; 
        int rotationDegrees; 
        struct { 
            int width; 
            int height; 
        } dimensions; 
    }  _videoSourceCaptureTransform;
    float  _videoStabilizationOverscanOverride;
    int  _videoStabilizationStrength;
    int  _videoStabilizationType;
    struct { 
        int width; 
        int height; 
    }  _visOutputDimensions;
    bool  _vitalityScoringEnabled;
}

- (void)dealloc;

@end
