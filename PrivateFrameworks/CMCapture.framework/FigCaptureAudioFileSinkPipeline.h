
@interface FigCaptureAudioFileSinkPipeline : FigCaptureSinkPipeline {
    BWAudioConverterNode * _audioConverterNode;
    BWAudioFileSinkNode * _audioFileSinkNode;
    BWFileCoordinatorNode * _fileCoordinatorNode;
}

+ (void)initialize;

- (void)dealloc;

@end
