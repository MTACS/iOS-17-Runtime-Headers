
@interface MTLGPUDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {
    unsigned int  _encoderID;
}

- (id)initWithParallelRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 encoderID:(unsigned int)arg4;
- (id)renderCommandEncoder;

@end
