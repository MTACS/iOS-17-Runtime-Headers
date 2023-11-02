
@interface _MapEngineRenderQueueSource : NSObject <GGLRenderQueueSource> {
    void * _mapEngine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithEngine:(void*)arg1;
- (bool)isDelayedRenderQueueConsumptionSupported;
- (void*)renderQueueForTimestamp:(double)arg1;

@end
