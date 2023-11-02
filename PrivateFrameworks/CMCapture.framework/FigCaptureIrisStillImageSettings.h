
@interface FigCaptureIrisStillImageSettings : FigCaptureStillImageSettings {
    NSArray * _movieLevelMetadataForOriginalImage;
    int  _movieMode;
    FigCaptureMovieFileRecordingSettings * _movieRecordingSettings;
    NSURL * _movieURLForOriginalImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _nonDestructiveCropSize;
    FigCaptureSemanticStyle * _semanticStyle;
    NSArray * _spatialOverCaptureMovieLevelMetadataForOriginalImage;
    NSURL * _spatialOverCaptureMovieURLForOriginalImage;
}

@property (nonatomic, copy) NSArray *movieLevelMetadataForOriginalImage;
@property (nonatomic) int movieMode;
@property (nonatomic, copy) FigCaptureMovieFileRecordingSettings *movieRecordingSettings;
@property (nonatomic, copy) NSURL *movieURLForOriginalImage;
@property (nonatomic) struct CGSize { double x1; double x2; } nonDestructiveCropSize;
@property (nonatomic, retain) FigCaptureSemanticStyle *semanticStyle;
@property (nonatomic, copy) NSArray *spatialOverCaptureMovieLevelMetadataForOriginalImage;
@property (nonatomic, copy) NSURL *spatialOverCaptureMovieURLForOriginalImage;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)movieLevelMetadataForOriginalImage;
- (int)movieMode;
- (id)movieRecordingSettings;
- (id)movieURLForOriginalImage;
- (struct CGSize { double x1; double x2; })nonDestructiveCropSize;
- (id)semanticStyle;
- (void)setMovieLevelMetadataForOriginalImage:(id)arg1;
- (void)setMovieMode:(int)arg1;
- (void)setMovieRecordingSettings:(id)arg1;
- (void)setMovieURLForOriginalImage:(id)arg1;
- (void)setNonDestructiveCropSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSemanticStyle:(id)arg1;
- (void)setSpatialOverCaptureMovieLevelMetadataForOriginalImage:(id)arg1;
- (void)setSpatialOverCaptureMovieURLForOriginalImage:(id)arg1;
- (id)spatialOverCaptureMovieLevelMetadataForOriginalImage;
- (id)spatialOverCaptureMovieURLForOriginalImage;

@end
