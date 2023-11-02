
@interface FigCaptureMovieFileSinkMiddlePipelineConfiguration : NSObject {
    BWPipelineStage * _movieFilePipelineStage;
    FigCaptureMovieFileSinkPipelineConfiguration * _movieFileSinkPipelineConfiguration;
}

@property (nonatomic, retain) BWPipelineStage *movieFilePipelineStage;
@property (nonatomic, retain) FigCaptureMovieFileSinkPipelineConfiguration *movieFileSinkPipelineConfiguration;

- (void)dealloc;
- (id)init;
- (id)movieFilePipelineStage;
- (id)movieFileSinkPipelineConfiguration;
- (void)setMovieFilePipelineStage:(id)arg1;
- (void)setMovieFileSinkPipelineConfiguration:(id)arg1;

@end
