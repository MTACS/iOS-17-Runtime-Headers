
@interface FigCaptureSourcePipeline : FigCapturePipeline {
    NSString * _sourceID;
}

@property (nonatomic, readonly) NSString *sourceID;

- (void)dealloc;
- (id)initWithGraph:(id)arg1 name:(id)arg2 sourceID:(id)arg3;
- (id)sourceID;

@end
