
@interface FigCaptureMovieFileSinkHeadPipeline : FigCapturePipeline {
    BWAudioConverterNode * _audioConverterNode;
    BWNodeOutput * _audioOutput;
    BWFileCoordinatorNode * _fileCoordinatorNode;
    int  _indexOfVideoOrientationInMetadataOutputs;
    NSArray * _indexesOfDetectedObjectsInMetadataOutputs;
    NSMutableArray * _inferenceConnections;
    BWPhotoDecompressorNode * _irisIntermediateJPEGPhotoDecompressorNode;
    BWIrisStagingNode * _irisStagingNode;
    NSMutableArray * _metadataOutputs;
    BWNodeOutput * _sceneClassifierPipelineUpstreamOutput;
    BWSceneClassifierSinkNode * _sceneClassifierSinkNode;
    int  _sourceDeviceType;
    NSString * _videoConnectionID;
    BWVideoDefringingNode * _videoDefringingNode;
    BWVideoOrientationMetadataNode * _videoOrientationMetadataNode;
    BWNodeOutput * _videoOutput;
    int  _videoSourceDeviceType;
    NSString * _videoSourceID;
}

@property (nonatomic, readonly) BWNodeOutput *audioOutput;
@property (nonatomic, readonly) BWFileCoordinatorNode *fileCoordinatorNode;
@property (nonatomic, readonly) int indexOfVideoOrientationInMetadataOutputs;
@property (nonatomic, readonly) NSArray *indexesOfDetectedObjectsInMetadataOutputs;
@property (nonatomic, readonly) NSArray *inferenceConnections;
@property (nonatomic, readonly) BWPhotoDecompressorNode *irisIntermediateJPEGPhotoDecompressorNode;
@property (nonatomic, readonly) BWIrisStagingNode *irisStagingNode;
@property (nonatomic, readonly) NSArray *metadataOutputs;
@property (setter=setMRCSceneObserver:, nonatomic) <BWMRCSceneObserver> *mrcSceneObserver;
@property (nonatomic) bool sceneClassifierSuspended;
@property (nonatomic) <BWSemanticStyleSceneObserver> *semanticStyleSceneObserver;
@property (nonatomic, readonly) NSString *videoConnectionID;
@property (nonatomic, readonly) BWVideoDefringingNode *videoDefringingNode;
@property (nonatomic, readonly) BWVideoOrientationMetadataNode *videoOrientationMetadataNode;
@property (nonatomic, readonly) BWNodeOutput *videoOutput;
@property (nonatomic, readonly) int videoSourceDeviceType;
@property (nonatomic, readonly) NSString *videoSourceID;

- (id)audioOutput;
- (void)dealloc;
- (id)fileCoordinatorNode;
- (int)indexOfVideoOrientationInMetadataOutputs;
- (id)indexesOfDetectedObjectsInMetadataOutputs;
- (id)inferenceConnections;
- (id)initWithConfiguration:(id)arg1 videoSourceCaptureOutput:(id)arg2 audioSourceCaptureOutput:(id)arg3 detectedObjectBoxedMetadataOutputs:(id)arg4 objectDetectionSourceOutput:(id)arg5 metadataSourcePipelineOutputs:(id)arg6 graph:(id)arg7 parentPipeline:(id)arg8 inferenceScheduler:(id)arg9 captureDevice:(id)arg10 audioSourceDelegate:(id)arg11 fileCoordinatorStatusDelegate:(id)arg12 irisRequestDelegate:(id)arg13 masterClock:(struct OpaqueCMClock { }*)arg14 workgroup:(id)arg15 videoGreenGhostMitigationEnabled:(bool)arg16;
- (id)irisIntermediateJPEGPhotoDecompressorNode;
- (id)irisStagingNode;
- (id)metadataOutputs;
- (id)mrcSceneObserver;
- (bool)sceneClassifierSuspended;
- (id)semanticStyleSceneObserver;
- (void)setMRCSceneObserver:(id)arg1;
- (void)setSceneClassifierSuspended:(bool)arg1;
- (void)setSemanticStyleSceneObserver:(id)arg1;
- (id)videoConnectionID;
- (id)videoDefringingNode;
- (id)videoOrientationMetadataNode;
- (id)videoOutput;
- (int)videoSourceDeviceType;
- (id)videoSourceID;

@end
