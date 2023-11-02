
@interface FigCaptureRemoteQueueSinkPipeline : FigCaptureSinkPipeline {
    BWRemoteQueueSinkNode * _sinkNode;
}

@property (nonatomic, readonly) BWRemoteQueueSinkNode *sinkNode;

- (void)dealloc;
- (void)setSinkNode:(id)arg1;
- (id)sinkNode;

@end
