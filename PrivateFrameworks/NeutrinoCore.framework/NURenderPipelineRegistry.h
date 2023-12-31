
@interface NURenderPipelineRegistry : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _registry;
}

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (void)_registerRenderPipeline:(id)arg1 forIdentifier:(id)arg2;
- (id)_renderPipelineForIdentifier:(id)arg1;
- (id)description;
- (id)init;
- (void)registerRenderPipeline:(id)arg1 forIdentifier:(id)arg2;
- (id)renderPipelineForIdentifier:(id)arg1;

@end
