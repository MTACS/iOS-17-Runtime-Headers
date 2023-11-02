
@interface BWPreviewGyroStabilization : NSObject {
    float  _baseVector;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _correctionQuaternion;
    struct { 
        float x; 
        float y; 
    }  _currentShift;
    float  _defaultSmoothParameter;
    float  _defaultSmoothParameterSlope;
    double  _deltaFrameTime;
    bool  _enableCascadeFilter;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _extrinsicAlignmentPose;
    double  _frameRateNormalizationFactor;
    struct { 
        int fusedRingIndex[2]; 
        double fusedRingTime[2][512]; 
        struct { 
            float x; 
            float y; 
        } fusedRingHallPosition[2][512]; 
        struct { /* ? */ } *fusedRingSagPosition[2]; 
        double hallTimeShift; 
        unsigned char isFirstSample[2]; 
        unsigned char bypassHighPassFilter; 
        float lowpassParameter; 
        struct { 
            float x; 
            float y; 
        } lowpassHallPosition[2]; 
    }  _hallData;
    bool  _isFirstFrame;
    bool  _isStillImagePreview;
    float  _lowpassParameter;
    float  _lowpassParameterCascade;
    float  _lowpassParameterOverride;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _lowpassQuaternionsInstant;
    float  _maxSmoothParameter;
    struct { 
        int fusedRingIndex; 
        double fusedRingTime[256]; 
        struct { 
            double w; 
            double x; 
            double y; 
            double z; 
        } fusedRingQuaternion[256]; 
        double motionTimeShift; 
        unsigned char ignoreMotionDataForPowerTest; 
        unsigned char relaxMotionDataLoggingThreshold; 
        unsigned char didHaveMotionData; 
        unsigned char prevDidHaveMotionData; 
        unsigned char usingMotionDataFromISP; 
    }  _motionData;
    struct { 
        float x; 
        float y; 
    }  _oisOffsetInput;
    float  _panningOverscanPercentage;
    float  _panningSpeedLimitingThreshold;
    float  _panningSpeedThreshold;
    float  _physicalTripodGuaranteedMaxAngleThreshold;
    float  _physicalTripodLikelyMaxAngleThreshold;
    float  _physicalTripodMinSmoothParameter;
    float  _physicalTripodRate;
    BWPreviewGyroStabilizationPanningDetection * _previewPanningDetection;
    BWPreviewGyroStabilizationTripodDetection * _previewTripodDetection;
    double  _previousCaptureTime;
    double  _quaternionThreshold;
    struct { 
        float x; 
        float y; 
    }  _sagPosition;
    int  _sagRemovalMethod;
    float  _slowPanningSpeedThreshold;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _stabilizedCenterQuaternion;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _stabilizedCenterQuaternionAdjusted;
    struct PreviewGyroStabilizationTransformContext { 
        int width; 
        int height; 
        struct CGPoint { 
            double x; 
            double y; 
        } imageCenter; 
        float pixelsPerMicron; 
        struct { 
            struct { 
                int x; 
                int y; 
            } origin; 
            struct { 
                int width; 
                int height; 
            } size; 
        } finalCropRect; 
        float limitFactor; 
        bool prevTransformLimited; 
        bool forceIdentity; 
    }  _transformContext;
    int  _tripodFastPanningRampDownFrames;
    float  _tripodMaxAngleThresholdAccumulate;
    float  _tripodMaxAngleThresholdInstant;
    int  _tripodRampDownFrames;
    int  _tripodRampUpFrames;
    int  _tripodSlowPanningRampDownFrames;
    float  _tripodSmoothParameter;
    float  _tripodSmoothParameterSlope;
}

- (struct { double x1; double x2; double x3; double x4; })_adjustQuaternionForSagRemoval:(struct { double x1; double x2; double x3; double x4; })arg1 focalLength:(float)arg2;
- (void)_adjustSmoothParameterWithQuaternion:(const struct { double x1; double x2; double x3; double x4; }*)arg1 cameraMetadata:(struct { int x1; float x2; float x3; unsigned char x4; float x5; float x6; struct { float x_7_1_1; float x_7_1_2; } x7; double x8; double x9; double x10; double x11; double x12; double x13; struct { float x_14_1_1; float x_14_1_2; } x14; struct { struct { int x_1_2_1; int x_1_2_2; } x_15_1_1; struct { int x_2_2_1; int x_2_2_2; } x_15_1_2; } x15; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_16_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_16_1_2; } x16; int x17; int x18; }*)arg2 reduceSmoothParameterForLowLight:(bool)arg3;
- (void)_applyCascadeFiltering:(struct { double x1; double x2; double x3; double x4; }*)arg1 quaternion:(struct { double x1; double x2; double x3; double x4; })arg2 lowpassParameter:(float)arg3 cascadeLevel:(int)arg4;
- (int)_computeMotionStatisticsWithQuaternion:(const struct { double x1; double x2; double x3; double x4; }*)arg1 focalLength:(float)arg2 maxAngleAccumulateOut:(double*)arg3 maxAngleInstantOut:(double*)arg4 translationOut:(/* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg5;
- (float)_computeSmoothParameterForNonStationaryCaseWithPanningStatus:(bool)arg1 frameIsSphereStabilized:(bool)arg2 previousLowPassParameter:(float)arg3 rampDownRate:(float)arg4 rampUpRate:(float)arg5 targetSmoothParameter:(float)arg6;
- (float)_computeSmoothParameterForPhysicalTripod:(bool)arg1 lowpassParameter:(float)arg2 previousLowPassParameter:(float)arg3 frameRateNormalization:(float)arg4;
- (float)_computeSmoothParameterForStationaryCaseWithPanningStatus:(bool)arg1 translation:(float)arg2 previousLowPassParameter:(float)arg3 rampDownRate:(float)arg4 rampUpRate:(float)arg5 targetSmoothParameter:(float)arg6;
- (int)_extractMetadataFromTopToBottomRowsFromDictionary:(struct __CFDictionary { }*)arg1 cameraMetadata:(struct { int x1; float x2; float x3; unsigned char x4; float x5; float x6; struct { float x_7_1_1; float x_7_1_2; } x7; double x8; double x9; double x10; double x11; double x12; double x13; struct { float x_14_1_1; float x_14_1_2; } x14; struct { struct { int x_1_2_1; int x_1_2_2; } x_15_1_1; struct { int x_2_2_1; int x_2_2_2; } x_15_1_2; } x15; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_16_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_16_1_2; } x16; int x17; int x18; }*)arg2 quaternion:(struct { double x1; double x2; double x3; double x4; }*)arg3;
- (int)_getAllMetadataFromDictionary:(struct __CFDictionary { }*)arg1 cameraMetadata:(struct { int x1; float x2; float x3; unsigned char x4; float x5; float x6; struct { float x_7_1_1; float x_7_1_2; } x7; double x8; double x9; double x10; double x11; double x12; double x13; struct { float x_14_1_1; float x_14_1_2; } x14; struct { struct { int x_1_2_1; int x_1_2_2; } x_15_1_1; struct { int x_2_2_1; int x_2_2_2; } x_15_1_2; } x15; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_16_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_16_1_2; } x16; int x17; int x18; }*)arg2;
- (int)_limitSmoothParameterToOverscanWithQuaternion:(const struct { double x1; double x2; double x3; double x4; }*)arg1 cameraMetadata:(const struct { int x1; float x2; float x3; unsigned char x4; float x5; float x6; struct { float x_7_1_1; float x_7_1_2; } x7; double x8; double x9; double x10; double x11; double x12; double x13; struct { float x_14_1_1; float x_14_1_2; } x14; struct { struct { int x_1_2_1; int x_1_2_2; } x_15_1_1; struct { int x_2_2_1; int x_2_2_2; } x_15_1_2; } x15; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_16_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_16_1_2; } x16; int x17; int x18; }*)arg2 minSmoothParameter:(float)arg3 smoothParameterInOut:(float*)arg4;
- (void)_setDefaultParametersForStillImagePreview:(bool)arg1;
- (struct PreviewStabilizationFrameRateCompensatedParameter { float x1; float x2; float x3; float x4; float x5; float x6; })_updateTripodSmoothParametersWithSphereVideoEnabled:(bool)arg1 frameRateNormalization:(double)arg2;
- (int)computeStabilizationShiftUsingMetadata:(id)arg1 pixelBufferDimensions:(struct { int x1; int x2; })arg2 pixelSizeInMicrons:(float)arg3 stabilizationShiftOut:(struct CGPoint { double x1; double x2; }*)arg4;
- (void)dealloc;
- (id)initForStillImagePreview:(bool)arg1;

@end
