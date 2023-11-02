
@interface CMITiledInferenceProcessorTileInfoImpl : NSObject <CMITiledInferenceProcessorTileInfo> {
    unsigned long long  _bufferCount;
    unsigned long long  _bufferIndex;
    <MTLCommandBuffer> * _commandBuffer;
    <MTLCommandQueue> * _commandQueue;
    NSArray * _networks;
    <CMITiledInferenceProcessorNetwork> * _nextNetwork;
    <CMITiledInferenceProcessorNetwork> * _previousNetwork;
    void _tileCount;
    void _tileIndex;
    <MTLCommandBuffer> * lastCommandBuffer;
    id  userContext;
}

@property (nonatomic) unsigned long long bufferCount;
@property (nonatomic) unsigned long long bufferIndex;
@property (nonatomic, retain) <MTLCommandBuffer> *commandBuffer;
@property (nonatomic, retain) <MTLCommandQueue> *commandQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTLCommandBuffer> *lastCommandBuffer;
@property (nonatomic, retain) NSArray *networks;
@property (nonatomic, retain) <CMITiledInferenceProcessorNetwork> *nextNetwork;
@property (nonatomic, retain) <CMITiledInferenceProcessorNetwork> *previousNetwork;
@property (readonly) Class superclass;
@property (nonatomic) void tileCount;
@property (nonatomic) void tileIndex;
@property (nonatomic, retain) id userContext;

- (void).cxx_destruct;
- (unsigned long long)bufferCount;
- (unsigned long long)bufferIndex;
- (id)commandBuffer;
- (id)commandQueue;
- (id)lastCommandBuffer;
- (id)networks;
- (id)nextNetwork;
- (id)previousNetwork;
- (void)resetTileSpecificInfo;
- (void)setBufferCount:(unsigned long long)arg1;
- (void)setBufferIndex:(unsigned long long)arg1;
- (void)setCommandBuffer:(id)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setLastCommandBuffer:(id)arg1;
- (void)setNetworks:(id)arg1;
- (void)setNextNetwork:(id)arg1;
- (void)setPreviousNetwork:(id)arg1;
- (void)setTileCount;
- (void)setTileIndex;
- (void)setUserContext:(id)arg1;
- (void)tileCount;
- (void)tileIndex;
- (id)userContext;

@end
