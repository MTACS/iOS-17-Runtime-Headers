
@interface SNAudioFileUtils : NSObject

+ (long long)audioFileFrameCount:(id)arg1;
+ (id /* block */)bufferPopulatorReadingFromAudioFile:(id)arg1;
+ (id /* block */)errorBufferPopulator;
+ (id /* block */)factoryProducingBuffersWithFormat:(id)arg1 frameCapacity:(unsigned int)arg2 recycleBuffers:(bool)arg3;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })findFileFrameReachableWithProcessingRateInAudioFile:(id)arg1 nearestToProcessingFrame:(long long)arg2 roundingMethod:(unsigned int)arg3 error:(id*)arg4;
+ (bool)fullyProcessFrameCount:(unsigned int)arg1 bufferFactory:(id /* block */)arg2 populator:(id /* block */)arg3 handler:(id /* block */)arg4 error:(id*)arg5;
+ (bool)fullyReadFramesFromAudioFile:(id)arg1 frameCount:(unsigned int)arg2 bufferFactory:(id /* block */)arg3 handler:(id /* block */)arg4 error:(id*)arg5;
+ (bool)fullyReadFramesFromAudioFile:(id)arg1 frameCount:(unsigned int)arg2 fromProcessingFramePosition:(long long)arg3 assumingCurrentProcessingFramePosition:(long long)arg4 bufferFactory:(id /* block */)arg5 handler:(id /* block */)arg6 error:(id*)arg7;
+ (bool)fullyReadFramesFromAudioFile:(id)arg1 frameCount:(unsigned int)arg2 maxFramesPerBuffer:(unsigned int)arg3 recycleBuffers:(bool)arg4 handler:(id /* block */)arg5 error:(id*)arg6;
+ (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })getTimeRangeEncompassingEntireAudioFile:(id)arg1;
+ (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })getTimeRangeEncompassingEntireAudioFile:(id)arg1 atSampleRate:(double)arg2;
+ (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })getTimeRangeEncompassingEntireAudioFileAtURL:(id)arg1 error:(id*)arg2;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })getTimeWhichIsIntegralNumberOfSamplesInRate:(long long)arg1 andRate:(long long)arg2;
+ (id /* block */)ignoredBufferHandler;
+ (id)openFileForReadingAtURL:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)openFileForRecordingAtURL:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })primingRangeToSetProcessingFramePosition:(unsigned int)arg1 inAudioFile:(id)arg2 error:(id*)arg3;
+ (unsigned int)processFrameCount:(unsigned int)arg1 bufferFactory:(id /* block */)arg2 populator:(id /* block */)arg3 handler:(id /* block */)arg4 error:(id*)arg5;
+ (unsigned int)readFramesFromAudioFile:(id)arg1 frameCount:(unsigned int)arg2 bufferFactory:(id /* block */)arg3 handler:(id /* block */)arg4 error:(id*)arg5;
+ (unsigned int)readFramesFromAudioFile:(id)arg1 frameCount:(unsigned int)arg2 framProcessingFramePosition:(long long)arg3 assumingCurrentProcessingFramePosition:(long long)arg4 bufferFactory:(id /* block */)arg5 handler:(id /* block */)arg6 error:(id*)arg7;
+ (unsigned int)readFramesFromAudioFile:(id)arg1 frameCount:(unsigned int)arg2 maxFramesPerBuffer:(unsigned int)arg3 recycleBuffers:(bool)arg4 handler:(id /* block */)arg5 error:(id*)arg6;
+ (bool)readTimeRangeFromAudioFile:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 assumingCurrentProcessingFramePosition:(long long)arg3 bufferFactory:(id /* block */)arg4 prefixBufferPopulator:(id /* block */)arg5 suffixBufferPopulator:(id /* block */)arg6 handler:(id /* block */)arg7 error:(id*)arg8;
+ (bool)readTimeRangeFromAudioFile:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 assumingCurrentProcessingFramePosition:(long long)arg3 maxFramesPerBuffer:(unsigned int)arg4 recycleBuffers:(bool)arg5 prefixBufferPopulator:(id /* block */)arg6 suffixBufferPopulator:(id /* block */)arg7 handler:(id /* block */)arg8 error:(id*)arg9;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })readTimeRangeFromLoopedAudioFile:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 assumingCurrentProcessingFramePosition:(long long)arg3 maxFramesPerBuffer:(unsigned int)arg4 recycleBuffers:(bool)arg5 handler:(id /* block */)arg6 error:(id*)arg7;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })readTimeRangeFromLoopedAudioFile:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 assumingCurrentProcessingframePoition:(long long)arg3 bufferFactory:(id /* block */)arg4 handler:(id /* block */)arg5 error:(id*)arg6;
+ (bool)setProcessingFramePositionInAudiofile:(id)arg1 framePosition:(long long)arg2 bufferFactory:(id /* block */)arg3 error:(id*)arg4;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })timeInAudioFile:(id)arg1 ofProcessingFrame:(unsigned int)arg2;
+ (bool)validateAllFramesProcessedFromRemainingCount:(unsigned int)arg1 error:(id*)arg2;
+ (id)viewOfAudioFile:(id)arg1 withAudioStreamBasicDescription:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg2 error:(id*)arg3;
+ (id)viewOfAudioFile:(id)arg1 withFormat:(id)arg2 error:(id*)arg3;
+ (id)viewOfAudioFile:(id)arg1 withSampleRate:(double)arg2 error:(id*)arg3;
+ (id /* block */)zeroBufferPopulator;

- (id)init;

@end
