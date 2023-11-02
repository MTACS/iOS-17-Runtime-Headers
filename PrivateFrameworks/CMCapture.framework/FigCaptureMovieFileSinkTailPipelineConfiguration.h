
@interface FigCaptureMovieFileSinkTailPipelineConfiguration : NSObject {
    BWNodeOutput * _audioSourceOutput;
    bool  _delayedCompressorCleanupEnabled;
    int  _indexOfVideoOrientationInMetadataOutputs;
    NSArray * _indexesOfDetectedObjectsInMetadataOutputs;
    BWPhotoDecompressorNode * _irisIntermediateJPEGPhotoDecompressorNode;
    NSArray * _metadataSourceOutputs;
    BWPipelineStage * _movieFilePipelineStage;
    FigCaptureMovieFileSinkPipelineConfiguration * _movieFileSinkPipelineConfiguration;
    BWNodeOutput * _videoSourceOutput;
    bool  _vitalityScoringEnabled;
}

@property (nonatomic, retain) BWNodeOutput *audioSourceOutput;
@property (nonatomic) bool delayedCompressorCleanupEnabled;
@property (nonatomic) int indexOfVideoOrientationInMetadataOutputs;
@property (nonatomic, retain) NSArray *indexesOfDetectedObjectsInMetadataOutputs;
@property (nonatomic, retain) BWPhotoDecompressorNode *irisIntermediateJPEGPhotoDecompressorNode;
@property (nonatomic, retain) NSArray *metadataSourceOutputs;
@property (nonatomic, retain) BWPipelineStage *movieFilePipelineStage;
@property (nonatomic, retain) FigCaptureMovieFileSinkPipelineConfiguration *movieFileSinkPipelineConfiguration;
@property (nonatomic, retain) BWNodeOutput *videoSourceOutput;
@property (nonatomic) bool vitalityScoringEnabled;

- (id)audioSourceOutput;
- (void)dealloc;
- (bool)delayedCompressorCleanupEnabled;
- (int)indexOfVideoOrientationInMetadataOutputs;
- (id)indexesOfDetectedObjectsInMetadataOutputs;
- (id)init;
- (id)irisIntermediateJPEGPhotoDecompressorNode;
- (id)metadataSourceOutputs;
- (id)movieFilePipelineStage;
- (id)movieFileSinkPipelineConfiguration;
- (void)setAudioSourceOutput:(id)arg1;
- (void)setDelayedCompressorCleanupEnabled:(bool)arg1;
- (void)setIndexOfVideoOrientationInMetadataOutputs:(int)arg1;
- (void)setIndexesOfDetectedObjectsInMetadataOutputs:(id)arg1;
- (void)setIrisIntermediateJPEGPhotoDecompressorNode:(id)arg1;
- (void)setMetadataSourceOutputs:(id)arg1;
- (void)setMovieFilePipelineStage:(id)arg1;
- (void)setMovieFileSinkPipelineConfiguration:(id)arg1;
- (void)setVideoSourceOutput:(id)arg1;
- (void)setVitalityScoringEnabled:(bool)arg1;
- (id)videoSourceOutput;
- (bool)vitalityScoringEnabled;

@end
