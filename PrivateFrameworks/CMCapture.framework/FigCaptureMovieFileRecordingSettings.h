
@interface FigCaptureMovieFileRecordingSettings : FigCaptureRecordingSettings {
    NSDictionary * _audioSettings;
    struct { 
        bool enabled; 
        long long selectionBehavior; 
        unsigned long long restrictedSelectionConditions; 
    }  _bravoCameraSelectionConfigurationForRecording;
    bool  _debugMetadataSidecarFileEnabled;
    bool  _irisMovieRecording;
    bool  _irisRecording;
    bool  _metadataIdentifiersEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieFragmentInterval;
    NSArray * _movieLevelMetadata;
    unsigned long long  _movieStartTimeOverride;
    NSData * _personSegmentationBackgroundColorCube;
    NSData * _personSegmentationForegroundColorCube;
    bool  _personSegmentationRenderingEnabled;
    bool  _recordVideoOrientationAndMirroringChanges;
    bool  _sendPreviewIOSurface;
    NSArray * _spatialOverCaptureMovieLevelMetadata;
    NSURL * _spatialOverCaptureMovieURL;
    bool  _usesVirtualCaptureCard;
    bool  _videoMirrored;
    int  _videoOrientation;
    bool  _videoSTFEnabled;
    NSDictionary * _videoSettings;
}

@property (nonatomic, copy) NSDictionary *audioSettings;
@property (nonatomic) struct { bool x1; long long x2; unsigned long long x3; } bravoCameraSelectionConfigurationForRecording;
@property (nonatomic) bool debugMetadataSidecarFileEnabled;
@property (getter=isIrisMovieRecording, nonatomic) bool irisMovieRecording;
@property (getter=isIrisRecording, nonatomic) bool irisRecording;
@property (nonatomic) bool metadataIdentifiersEnabled;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property (nonatomic, copy) NSArray *movieLevelMetadata;
@property (nonatomic) unsigned long long movieStartTimeOverride;
@property (nonatomic, retain) NSData *personSegmentationBackgroundColorCube;
@property (nonatomic, retain) NSData *personSegmentationForegroundColorCube;
@property (nonatomic) bool personSegmentationRenderingEnabled;
@property (nonatomic) bool recordVideoOrientationAndMirroringChanges;
@property (nonatomic) bool sendPreviewIOSurface;
@property (nonatomic, copy) NSArray *spatialOverCaptureMovieLevelMetadata;
@property (nonatomic, copy) NSURL *spatialOverCaptureMovieURL;
@property (nonatomic) bool usesVirtualCaptureCard;
@property (nonatomic) bool videoMirrored;
@property (nonatomic) int videoOrientation;
@property (nonatomic) bool videoSTFEnabled;
@property (nonatomic, copy) NSDictionary *videoSettings;

+ (bool)supportsSecureCoding;

- (id)audioSettings;
- (struct { bool x1; long long x2; unsigned long long x3; })bravoCameraSelectionConfigurationForRecording;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)debugMetadataSidecarFileEnabled;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isIrisMovieRecording;
- (bool)isIrisRecording;
- (bool)metadataIdentifiersEnabled;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (id)movieLevelMetadata;
- (unsigned long long)movieStartTimeOverride;
- (id)personSegmentationBackgroundColorCube;
- (id)personSegmentationForegroundColorCube;
- (bool)personSegmentationRenderingEnabled;
- (bool)recordVideoOrientationAndMirroringChanges;
- (bool)sendPreviewIOSurface;
- (void)setAudioSettings:(id)arg1;
- (void)setBravoCameraSelectionConfigurationForRecording:(struct { bool x1; long long x2; unsigned long long x3; })arg1;
- (void)setDebugMetadataSidecarFileEnabled:(bool)arg1;
- (void)setIrisMovieRecording:(bool)arg1;
- (void)setIrisRecording:(bool)arg1;
- (void)setMetadataIdentifiersEnabled:(bool)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieLevelMetadata:(id)arg1;
- (void)setMovieStartTimeOverride:(unsigned long long)arg1;
- (void)setPersonSegmentationBackgroundColorCube:(id)arg1;
- (void)setPersonSegmentationForegroundColorCube:(id)arg1;
- (void)setPersonSegmentationRenderingEnabled:(bool)arg1;
- (void)setRecordVideoOrientationAndMirroringChanges:(bool)arg1;
- (void)setSendPreviewIOSurface:(bool)arg1;
- (void)setSpatialOverCaptureMovieLevelMetadata:(id)arg1;
- (void)setSpatialOverCaptureMovieURL:(id)arg1;
- (void)setUsesVirtualCaptureCard:(bool)arg1;
- (void)setVideoMirrored:(bool)arg1;
- (void)setVideoOrientation:(int)arg1;
- (void)setVideoSTFEnabled:(bool)arg1;
- (void)setVideoSettings:(id)arg1;
- (id)spatialOverCaptureMovieLevelMetadata;
- (id)spatialOverCaptureMovieURL;
- (bool)usesVirtualCaptureCard;
- (bool)videoMirrored;
- (int)videoOrientation;
- (bool)videoSTFEnabled;
- (id)videoSettings;

@end
