
@interface AVTCompositorPipelineCache : NSObject {
    <MTLLibrary> * _library;
    NSMutableDictionary * _pipelines;
}

+ (id)pipelineForPropertyName:(id)arg1 device:(id)arg2;

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1;
- (id)pipelineForPropertyName:(id)arg1;

@end
