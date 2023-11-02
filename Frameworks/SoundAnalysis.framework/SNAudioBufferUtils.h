
@interface SNAudioBufferUtils : NSObject

+ (long long)advanceConsecutiveUnhealthyAudioBufferCounterFrom:(long long)arg1 assessingNewFloatAudioBufferObject:(id)arg2 error:(id*)arg3;
+ (bool)audioPCMBufferObjectIsSilent:(id)arg1;
+ (id /* block */)integrateInjectionIntoBufferHandler:(id /* block */)arg1 format:(id)arg2 queryInjectionPath:(id /* block */)arg3;
+ (bool)isInfiniteValueContainedInFloatAudioBuffer:(const struct AudioBuffer { unsigned int x1; unsigned int x2; void *x3; }*)arg1;
+ (bool)isInfiniteValueContainedInFloatAudioBufferList:(const struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1;
+ (bool)isInfiniteValueContainedInFloatAudioPCMBufferObject:(id)arg1;
+ (bool)isNaNContainedInFloatAudioBuffer:(const struct AudioBuffer { unsigned int x1; unsigned int x2; void *x3; }*)arg1;
+ (bool)isNaNContainedInFloatAudioBufferList:(const struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1;
+ (bool)isNaNContainedInFloatAudioPCMBufferObject:(id)arg1;
+ (long long)monitorHealthOfAudioBuffersGivenUnhealthyBufferCounter:(long long)arg1 newFloatAudioBufferObject:(id)arg2 errorThresholdBufferCount:(long long)arg3 errorHandler:(id /* block */)arg4;
+ (bool)processBufferWithInjectionOperator:(id)arg1 bufferHandler:(id /* block */)arg2 audioBuffer:(id)arg3 time:(id)arg4 error:(id*)arg5;
+ (bool)unencodedAudioBufferIsSilent:(const struct AudioBuffer { unsigned int x1; unsigned int x2; void *x3; }*)arg1;
+ (bool)unencodedAudioBufferListIsSilent:(const struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1;
+ (bool)validateAudioPCMBufferObjectIsNotSilent:(id)arg1 error:(id*)arg2;
+ (bool)validateHealthyAudioContainedInFloatAudioPCMBufferObject:(id)arg1 error:(id*)arg2;
+ (bool)validateNoInfiniteValueContainedInFloatAudioPCMBufferObject:(id)arg1 error:(id*)arg2;
+ (bool)validateNoNaNContainedInFloatAudioPCMBufferObject:(id)arg1 error:(id*)arg2;

- (id)init;

@end
