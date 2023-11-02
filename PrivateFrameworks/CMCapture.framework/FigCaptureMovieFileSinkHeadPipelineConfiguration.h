
@interface FigCaptureMovieFileSinkHeadPipelineConfiguration : NSObject {
    BWPipelineStage * _movieFilePipelineStage;
    FigCaptureMovieFileSinkPipelineConfiguration * _movieFileSinkPipelineConfiguration;
    BWPipelineStage * _transferPipelineStage;
    int  _visMotionMetadataPreloadingMode;
}

@property (nonatomic, retain) BWPipelineStage *movieFilePipelineStage;
@property (nonatomic, retain) FigCaptureMovieFileSinkPipelineConfiguration *movieFileSinkPipelineConfiguration;
@property (nonatomic, retain) BWPipelineStage *transferPipelineStage;
@property (nonatomic) int visMotionMetadataPreloadingMode;

- (void)dealloc;
- (id)movieFilePipelineStage;
- (id)movieFileSinkPipelineConfiguration;
- (void)setMovieFilePipelineStage:(id)arg1;
- (void)setMovieFileSinkPipelineConfiguration:(id)arg1;
- (void)setTransferPipelineStage:(id)arg1;
- (void)setVisMotionMetadataPreloadingMode:(int)arg1;
- (id)transferPipelineStage;
- (int)visMotionMetadataPreloadingMode;

@end
