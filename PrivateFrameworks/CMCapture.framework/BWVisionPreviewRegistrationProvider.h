
@interface BWVisionPreviewRegistrationProvider : NSObject <BWPreviewRegistrationProvider> {
    BWPixelBufferPool * _registrationPool;
    struct OpaqueVTPixelRotationSession { } * _registrationRotationSession;
    struct { 
        int width; 
        int height; 
    }  _sensorBinningFactor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _superWideOpticalCenterOffset;
    struct { 
        struct { 
            float x; 
            float y; 
        } previousSpherePosition[3]; 
        struct { 
            float x; 
            float y; 
        } currentSpherePosition[3]; 
        struct { 
            float x; 
            float y; 
        } filteredSpherePosition[3]; 
        struct { 
            float x; 
            float y; 
        } estimatedSagPosition[3]; 
        bool supportAverageSpherePositionKey; 
        struct { 
            unsigned int configuration; 
            struct { 
                float x; 
                float y; 
            } opticalCenterOffset[3]; 
            float baseZoomFactor[3]; 
            float baseZoomFactorAdjustment[3]; 
            float pixelSizeInMicron[3]; 
            int quadraBinningFactor[3]; 
            float currentToReferenceScaleRatio[7]; 
            float currentToReferenceExtrinsicMatrix[7][12]; 
            int referencePortIndex; 
            int previousPortIndex; 
            struct { 
                float x; 
                float y; 
            } parallaxShift; 
            struct { 
                float x; 
                float y; 
            } stashedSpherePos[3]; 
            float lastPracticalFocalLength[3]; 
            float lastEffectiveFocalLength[3]; 
            float lastPinholeCameraFocalLength[3]; 
            bool decoupleBravoParallaxShiftFromSphereLensPosition; 
            float minDistanceForBravoParallaxShift; 
            float sphereScalingFactorUsedForParallaxShiftComputation; 
        } bravoData; 
        double sagEstimationAlpha; 
    }  _superWideToWideShiftState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _teleOpticalCenterOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _wideOpticalCenterOffset;
    struct { 
        struct { 
            float x; 
            float y; 
        } previousSpherePosition[3]; 
        struct { 
            float x; 
            float y; 
        } currentSpherePosition[3]; 
        struct { 
            float x; 
            float y; 
        } filteredSpherePosition[3]; 
        struct { 
            float x; 
            float y; 
        } estimatedSagPosition[3]; 
        bool supportAverageSpherePositionKey; 
        struct { 
            unsigned int configuration; 
            struct { 
                float x; 
                float y; 
            } opticalCenterOffset[3]; 
            float baseZoomFactor[3]; 
            float baseZoomFactorAdjustment[3]; 
            float pixelSizeInMicron[3]; 
            int quadraBinningFactor[3]; 
            float currentToReferenceScaleRatio[7]; 
            float currentToReferenceExtrinsicMatrix[7][12]; 
            int referencePortIndex; 
            int previousPortIndex; 
            struct { 
                float x; 
                float y; 
            } parallaxShift; 
            struct { 
                float x; 
                float y; 
            } stashedSpherePos[3]; 
            float lastPracticalFocalLength[3]; 
            float lastEffectiveFocalLength[3]; 
            float lastPinholeCameraFocalLength[3]; 
            bool decoupleBravoParallaxShiftFromSphereLensPosition; 
            float minDistanceForBravoParallaxShift; 
            float sphereScalingFactorUsedForParallaxShiftComputation; 
        } bravoData; 
        double sagEstimationAlpha; 
    }  _wideToTeleShiftState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)allocateResourcesWithVideoFormat:(id)arg1 metalContext:(id)arg2;
- (void)cleanupResources;
- (struct CGPoint { double x1; double x2; })computeCameraShiftForWiderCamera:(struct opaqueCMSampleBuffer { }*)arg1 narrowerCamera:(struct opaqueCMSampleBuffer { }*)arg2 widerToNarrowerCameraScale:(double)arg3;
- (void)dealloc;
- (id)initWithCameraInfoByPortType:(id)arg1 sensorBinningFactor:(struct { int x1; int x2; })arg2;
- (struct { struct { bool x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1[3]; })registerWiderCamera:(struct opaqueCMSampleBuffer { }*)arg1 narrowerCamera:(struct opaqueCMSampleBuffer { }*)arg2 widerToNarrowerCameraScale:(double)arg3 isMacroScene:(bool)arg4 macroTransitionType:(int)arg5;

@end
