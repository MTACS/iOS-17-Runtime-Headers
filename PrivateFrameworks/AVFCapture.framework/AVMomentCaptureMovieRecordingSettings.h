
@interface AVMomentCaptureMovieRecordingSettings : NSObject <NSCopying> {
    bool  _autoSpatialOverCaptureEnabled;
    NSURL * _movieFileURL;
    NSArray * _movieMetadata;
    NSString * _spatialOverCaptureGroupIdentifier;
    NSURL * _spatialOverCaptureMovieFileURL;
    NSArray * _spatialOverCaptureMovieMetadata;
    long long  _uniqueID;
    unsigned long long  _userInitiatedCaptureTime;
    NSString * _videoCodecType;
}

@property (getter=isAutoSpatialOverCaptureEnabled, nonatomic) bool autoSpatialOverCaptureEnabled;
@property (nonatomic, copy) NSURL *movieFileURL;
@property (nonatomic, copy) NSArray *movieMetadata;
@property (nonatomic, copy) NSURL *spatialOverCaptureMovieFileURL;
@property (nonatomic, copy) NSArray *spatialOverCaptureMovieMetadata;
@property (nonatomic, readonly) long long uniqueID;
@property (nonatomic) unsigned long long userInitiatedCaptureTime;
@property (nonatomic, copy) NSString *videoCodecType;

+ (id)movieRecordingSettings;
+ (id)movieRecordingSettingsFromMomentCaptureSettings:(id)arg1;

- (id)_initFromMomentCaptureSettings:(id)arg1;
- (id)_sanitizedMovieMetadataArrayForMovieMetadataArray:(id)arg1 exceptionReason:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (bool)isAutoSpatialOverCaptureEnabled;
- (id)movieFileURL;
- (id)movieMetadata;
- (void)setAutoSpatialOverCaptureEnabled:(bool)arg1;
- (void)setMovieFileURL:(id)arg1;
- (void)setMovieMetadata:(id)arg1;
- (void)setSpatialOverCaptureMovieFileURL:(id)arg1;
- (void)setSpatialOverCaptureMovieMetadata:(id)arg1;
- (void)setUserInitiatedCaptureTime:(unsigned long long)arg1;
- (void)setVideoCodecType:(id)arg1;
- (id)spatialOverCaptureGroupIdentifier;
- (id)spatialOverCaptureMovieFileURL;
- (id)spatialOverCaptureMovieMetadata;
- (long long)uniqueID;
- (unsigned long long)userInitiatedCaptureTime;
- (id)videoCodecType;

@end
