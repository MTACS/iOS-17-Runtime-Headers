
@interface AVCaptureResolvedPhotoSettingsInternal : NSObject {
    bool  EV0PhotoDeliveryEnabled;
    bool  HDREnabled;
    bool  adjustedPhotoFiltersEnabled;
    bool  captureBeforeResolvingSettingsEnabled;
    bool  contentAwareDistortionCorrectionEnabled;
    struct { 
        int width; 
        int height; 
    }  deferredPhotoProxyDimensions;
    unsigned long long  digitalFlashUserInterfaceHints;
    NSArray * digitalFlashUserInterfaceRGBEstimate;
    struct { 
        int width; 
        int height; 
    }  embeddedThumbnailDimensions;
    bool  flashEnabled;
    struct { 
        int width; 
        int height; 
    }  glassesSegmentationMatteDimensions;
    struct { 
        int width; 
        int height; 
    }  hairSegmentationMatteDimensions;
    struct { 
        int width; 
        int height; 
    }  livePhotoMovieDimensions;
    bool  livePhotoMovieEnabled;
    struct { 
        int width; 
        int height; 
    }  photoDimensions;
    NSArray * photoManifest;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  photoProcessingTimeRange;
    struct { 
        int width; 
        int height; 
    }  portraitEffectsMatteDimensions;
    struct { 
        int width; 
        int height; 
    }  previewDimensions;
    struct { 
        int width; 
        int height; 
    }  rawEmbeddedThumbnailDimensions;
    struct { 
        int width; 
        int height; 
    }  rawPhotoDimensions;
    bool  redEyeReductionEnabled;
    AVSemanticStyle * semanticStyle;
    struct { 
        int width; 
        int height; 
    }  skinSegmentationMatteDimensions;
    struct { 
        int width; 
        int height; 
    }  spatialOverCapturePhotoDimensions;
    bool  squareCropEnabled;
    bool  stillImageStabilizationEnabled;
    struct { 
        int width; 
        int height; 
    }  teethSegmentationMatteDimensions;
    bool  turboModeEnabled;
    long long  uniqueID;
    bool  virtualDeviceFusionEnabled;
}

- (void)dealloc;

@end
