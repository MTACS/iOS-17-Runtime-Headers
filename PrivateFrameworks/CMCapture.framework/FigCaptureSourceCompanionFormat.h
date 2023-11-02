
@interface FigCaptureSourceCompanionFormat : NSObject {
    struct { 
        int width; 
        int height; 
    }  _fesDimensions;
    struct { 
        int width; 
        int height; 
    }  _fesInputCropDimensions;
    int  _formatIndex;
    struct { 
        int width; 
        int height; 
    }  _geometricDistortionCorrectedNativeDimensions;
    struct { 
        int width; 
        int height; 
    }  _highQualitySensorDimensions;
    struct { 
        int width; 
        int height; 
    }  _outputCropDimensionsWhenFesIsEnabled;
    struct { 
        int width; 
        int height; 
    }  _postGDCCropDimensions;
    struct { 
        int width; 
        int height; 
    }  _sensorCropDimensions;
    struct { 
        int width; 
        int height; 
    }  _sensorDimensions;
    bool  _sifrEnabled;
}

@property (readonly) struct { int x1; int x2; } fesDimensions;
@property (readonly) struct { int x1; int x2; } fesInputCropDimensions;
@property (readonly) int formatIndex;
@property (readonly) struct { int x1; int x2; } geometricDistortionCorrectedNativeDimensions;
@property (readonly) struct { int x1; int x2; } highQualitySensorDimensions;
@property (readonly) struct { int x1; int x2; } outputCropDimensionsWhenFesIsEnabled;
@property (readonly) struct { int x1; int x2; } postGDCCropDimensions;
@property (readonly) struct { int x1; int x2; } sensorCropDimensions;
@property (readonly) struct { int x1; int x2; } sensorDimensions;
@property (readonly) bool sifrEnabled;

- (void)dealloc;
- (id)description;
- (struct { int x1; int x2; })fesDimensions;
- (struct { int x1; int x2; })fesInputCropDimensions;
- (int)formatIndex;
- (struct { int x1; int x2; })geometricDistortionCorrectedNativeDimensions;
- (struct { int x1; int x2; })highQualitySensorDimensions;
- (id)initWithCompanionFormatDictionary:(id)arg1;
- (struct { int x1; int x2; })outputCropDimensionsWhenFesIsEnabled;
- (struct { int x1; int x2; })postGDCCropDimensions;
- (struct { int x1; int x2; })sensorCropDimensions;
- (struct { int x1; int x2; })sensorDimensions;
- (bool)sifrEnabled;

@end
