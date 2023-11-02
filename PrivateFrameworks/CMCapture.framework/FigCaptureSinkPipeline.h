
@interface FigCaptureSinkPipeline : FigCapturePipeline {
    NSString * _sinkID;
    BWNodeOutput * _upstreamOutput;
}

@property (nonatomic) bool discardsSampleData;
@property (nonatomic, readonly) NSString *sinkID;

- (void)dealloc;
- (bool)discardsSampleData;
- (id)initWithGraph:(id)arg1 name:(id)arg2 sinkID:(id)arg3;
- (void)setDiscardsSampleData:(bool)arg1;
- (void)setUpstreamOutput:(id)arg1;
- (id)sinkID;

@end
