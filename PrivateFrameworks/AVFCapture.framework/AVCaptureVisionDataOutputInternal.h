
@interface AVCaptureVisionDataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper * delegateCallbackHelper;
    bool  dynamicThresholdingEnabled;
    bool  featureBinningEnabled;
    unsigned long long  featureMatchingDescriptorSize;
    bool  featureMatchingEnabled;
    bool  featureOrientationAssignmentEnabled;
    float  gaussianPyramidBaseOctaveDownscalingFactor;
    unsigned long long  gaussianPyramidOctavesCount;
    unsigned long long  hammingDistanceThreshold;
    unsigned long long  keypointDetectionFlowType;
    float  keypointDetectionThreshold;
    NSData * laccConfigAndMetadata;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  maxBurstDuration;
    unsigned long long  maxKeypointsCount;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  minBurstFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  minFrameDuration;
    float  orientationDistanceThreshold;
    float  sigmaDistanceThreshold;
    float  squareDistanceDisparityFraction;
    unsigned long long  subPixelThreshold;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
