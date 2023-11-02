
@interface BWStillImageSampleBufferSinkNodeAnalyticsConfiguration : NSObject {
    bool  _binned;
    bool  _fastCapturePrioritizationEnabled;
    int  _formatDimensionHeight;
    int  _formatDimensionWidth;
    float  _formatMaxFrameRate;
    bool  _isHighQualityPhotoWithVideoFormatSupported;
    bool  _isPhotoFormat;
    bool  _isSemanticStyleRenderingSupported;
    bool  _isTimeLapse;
    unsigned int  _pixelFormat;
}

@property (nonatomic) bool binned;
@property (nonatomic) bool fastCapturePrioritizationEnabled;
@property (nonatomic) int formatDimensionHeight;
@property (nonatomic) int formatDimensionWidth;
@property (nonatomic) float formatMaxFrameRate;
@property (nonatomic) bool isHighQualityPhotoWithVideoFormatSupported;
@property (nonatomic) bool isPhotoFormat;
@property (nonatomic) bool isSemanticStyleRenderingSupported;
@property (nonatomic) bool isTimeLapse;
@property (nonatomic) unsigned int pixelFormat;

- (bool)binned;
- (void)dealloc;
- (bool)fastCapturePrioritizationEnabled;
- (int)formatDimensionHeight;
- (int)formatDimensionWidth;
- (float)formatMaxFrameRate;
- (bool)isHighQualityPhotoWithVideoFormatSupported;
- (bool)isPhotoFormat;
- (bool)isSemanticStyleRenderingSupported;
- (bool)isTimeLapse;
- (unsigned int)pixelFormat;
- (void)setBinned:(bool)arg1;
- (void)setFastCapturePrioritizationEnabled:(bool)arg1;
- (void)setFormatDimensionHeight:(int)arg1;
- (void)setFormatDimensionWidth:(int)arg1;
- (void)setFormatMaxFrameRate:(float)arg1;
- (void)setIsHighQualityPhotoWithVideoFormatSupported:(bool)arg1;
- (void)setIsPhotoFormat:(bool)arg1;
- (void)setIsSemanticStyleRenderingSupported:(bool)arg1;
- (void)setIsTimeLapse:(bool)arg1;
- (void)setPixelFormat:(unsigned int)arg1;

@end
