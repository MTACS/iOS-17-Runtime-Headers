
@interface MTLToolsCommandEncoder : MTLToolsObject <MTLCommandEncoder> {
    <MTLToolsRetainingContainer> * _commandBuffer;
}

@property (nonatomic, readonly) <MTLToolsRetainingContainer> *commandBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;

- (void)addRetainedObject:(id)arg1;
- (id)commandBuffer;
- (void)endEncoding;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (unsigned long long)globalTraceObjectID;
- (id)initWithBaseObject:(id)arg1 parallelRenderCommandEncoder:(id)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)insertDebugSignpost:(id)arg1;
- (id)label;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setLabel:(id)arg1;

@end
