
@interface MTLCountersCommandBuffer : MTLToolsCommandBuffer {
    MTLCountersTraceCommandBuffer * _traceBuffer;
}

@property (nonatomic, readonly) MTLCountersTraceCommandBuffer *traceBuffer;

- (void)addPurgedHeap:(id)arg1;
- (void)addPurgedResource:(id)arg1;
- (id)blitCommandEncoder;
- (id)blitCommandEncoderWithDescriptor:(id)arg1;
- (id)computeCommandEncoder;
- (id)computeCommandEncoderWithDescriptor:(id)arg1;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2 descriptor:(id)arg3;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (void)presentDrawable:(id)arg1;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (id)resourceStateCommandEncoder;
- (id)resourceStateCommandEncoderWithDescriptor:(id)arg1;
- (id)sampledComputeCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg2 capacity:(unsigned long long)arg3;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg2 capacity:(unsigned long long)arg3;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg1 capacity:(unsigned long long)arg2;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(union { struct { unsigned int x_1_1_1 : 8; unsigned int x_1_1_2 : 24; unsigned int x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; } x1; struct { unsigned int x_2_1_1 : 8; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3; unsigned long long x_2_1_4; unsigned long long x_2_1_5; } x2; }*)arg2 capacity:(unsigned long long)arg3;
- (id)traceBuffer;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end
