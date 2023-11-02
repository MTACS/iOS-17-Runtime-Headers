
@protocol MTLComputeCommandEncoderSPI <MTLCommandEncoderSPI, MTLComputeCommandEncoder>

@required

- (NSData *)newKernelDebugInfo;
- (void)setThreadgroupDistributionMode:(long long)arg1;
- (void)setThreadgroupDistributionModeWithClusterGroupIndex:(unsigned int)arg1;
- (void)setThreadgroupPackingDisabled:(bool)arg1;

@optional

- (void)beginVirtualSubstream;
- (void)dispatchThreadsWithIndirectBuffer:(id <MTLBuffer>)arg1 indirectBufferOffset:(unsigned long long)arg2;
- (void)enableNullBufferBinds:(bool)arg1;
- (bool)encodeEndDoWhile:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;
- (bool)encodeEndIf;
- (bool)encodeEndWhile;
- (void)encodeStartDoWhile;
- (void)encodeStartElse;
- (void)encodeStartIf:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;
- (void)encodeStartWhile:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 comparison:(unsigned long long)arg3 referenceValue:(unsigned int)arg4;
- (void)endVirtualSubstream;
- (void)insertCompressedTextureReinterpretationFlush;
- (void)insertUncompressedToCompressedFlush;
- (unsigned long long)nextVirtualSubstream;
- (void)setSubstream:(unsigned int)arg1;
- (void)signalProgress:(unsigned int)arg1;
- (void)useResourceGroup:(id <MTLResourceGroupSPI>)arg1 usage:(unsigned long long)arg2;
- (void)waitForProgress:(unsigned int)arg1;
- (void)waitForVirtualSubstream:(unsigned long long)arg1;

@end
