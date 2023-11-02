
@interface FigCaptureMicSourcePipeline : FigCaptureSourcePipeline {
    BWAudioSplitNode * _audioSplitNodesByMicSourcePosition;
    BWFanOutNode * _fanOutNodesByMicSourcePosition;
    unsigned int  _nextOutputIndexByMicSourcePosition;
    BWAudioSourceNode * _sourceNode;
    BWZoomCommandHandler * _zoomCommandHandlerForStereoAudioCapture;
}

+ (void)initialize;

- (void)dealloc;

@end
