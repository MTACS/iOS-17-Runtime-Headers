
@interface AVCaptureStillImageOutputInternal : NSObject {
    bool  SISActive;
    bool  SISEnabled;
    bool  SISSupported;
    bool  bravoImageFusionSupported;
    struct ct_green_tea_logger_s { } * greenTeaLogger;
    bool  highResStillEnabled;
    unsigned int  imageDataFormatType;
    bool  isCapturingPhoto;
    float  jpegQuality;
    bool  jpegQualitySpecified;
    bool  lensStabilizationDuringBracketedCaptureEnabled;
    bool  lensStabilizationDuringBracketedCaptureSupported;
    unsigned long long  maxBracketedCaptureCount;
    bool  noiseReductionEnabled;
    NSDictionary * outputSettings;
    NSMutableArray * prepareRequests;
    struct { 
        unsigned int imageCount; 
        int outputFormat; 
        unsigned int outputWidth; 
        unsigned int outputHeight; 
    }  preparedBracket;
    struct CGSize { 
        double width; 
        double height; 
    }  previewImageSize;
    unsigned int  shutterSoundID;
    bool  squareCropEnabled;
    NSMutableArray * stillImageRequests;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
