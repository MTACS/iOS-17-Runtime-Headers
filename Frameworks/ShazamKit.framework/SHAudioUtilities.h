
@interface SHAudioUtilities : NSObject

+ (id)appendBuffer:(id)arg1 toBuffer:(id)arg2;
+ (id)audioBufferFromData:(void*)arg1 byteSize:(unsigned long long)arg2 inFormat:(id)arg3;
+ (id)bufferHead:(id)arg1 duration:(double)arg2;
+ (id)bufferTail:(id)arg1 duration:(double)arg2;
+ (bool)buffersFromAudioFile:(id)arg1 format:(id)arg2 accumulator:(id /* block */)arg3 error:(id*)arg4;
+ (double)convertMachTimeToMilliseconds:(unsigned long long)arg1;
+ (double)convertMachTimeToSeconds:(unsigned long long)arg1;
+ (double)durationOfBuffer:(id)arg1;
+ (id)extractFromBuffer:(id)arg1 atPosition:(unsigned int)arg2 length:(unsigned int)arg3;
+ (bool)isAudioFormatSupported:(id)arg1;
+ (void)mixedTracksFromAsset:(id)arg1 format:(id)arg2 accumulator:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
+ (id)pcmBufferFromAudioFile:(id)arg1 outputFormat:(id)arg2 durationToRead:(double)arg3 error:(id*)arg4;
+ (id)pcmBufferFromAudioFile:(id)arg1 outputFormat:(id)arg2 error:(id*)arg3;
+ (id)splitBuffer:(id)arg1 atPosition:(unsigned int)arg2;
+ (id)splitBuffer:(id)arg1 fromStartPosition:(unsigned int)arg2 intoDurationsOfSize:(double)arg3;
+ (bool)willAudioFormatCauseBufferMutation:(id)arg1;

@end
