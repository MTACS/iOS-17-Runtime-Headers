
@protocol CMITiledInferenceProcessorTileInfo <NSObject>

@required

- (unsigned long long)bufferCount;
- (unsigned long long)bufferIndex;
- (<MTLCommandBuffer> *)commandBuffer;
- (<MTLCommandQueue> *)commandQueue;
- (<MTLCommandBuffer> *)lastCommandBuffer;
- (NSArray *)networks;
- (<CMITiledInferenceProcessorNetwork> *)nextNetwork;
- (<CMITiledInferenceProcessorNetwork> *)previousNetwork;
- (void)setLastCommandBuffer:(id <MTLCommandBuffer>)arg1;
- (void)setUserContext:(id)arg1;
- (id)tileCount;
- (id)tileIndex;
- (id)userContext;

@end
