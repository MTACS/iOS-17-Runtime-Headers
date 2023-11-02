
@protocol VCCoreAudio_AudioUnitMockCallbacks

@required

- (bool)complexRender:(struct OpaqueAudioComponentInstance { }*)arg1 ioActionFlags:(unsigned int*)arg2 inTimeStamp:(const struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; }*)arg3 inOutputBusNumber:(unsigned int)arg4 inNumberOfPackets:(unsigned int)arg5 outNumberOfPackets:(unsigned int*)arg6 outPacketDescriptions:(struct AudioStreamPacketDescription { long long x1; unsigned int x2; unsigned int x3; }*)arg7 ioData:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg8 outMetadata:(void*)arg9 outMetadataByteSize:(unsigned int*)arg10 outStatus:(int*)arg11;
- (bool)getProperty:(struct OpaqueAudioComponentInstance { }*)arg1 inID:(unsigned int)arg2 inScope:(unsigned int)arg3 inElement:(unsigned int)arg4 outData:(void*)arg5 ioDataSize:(unsigned int*)arg6 outStatus:(int*)arg7;
- (bool)initialize:(struct OpaqueAudioComponentInstance { }*)arg1 outStatus:(int*)arg2;
- (bool)outputUnitStart:(struct OpaqueAudioComponentInstance { }*)arg1 outStatus:(int*)arg2;
- (bool)outputUnitStop:(struct OpaqueAudioComponentInstance { }*)arg1 outStatus:(int*)arg2;
- (bool)render:(struct OpaqueAudioComponentInstance { }*)arg1 ioActionFlags:(unsigned int*)arg2 inTimeStamp:(const struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; }*)arg3 inOutputBusNumber:(unsigned int)arg4 inNumberFrames:(unsigned int)arg5 ioData:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg6 outStatus:(int*)arg7;
- (bool)setProperty:(struct OpaqueAudioComponentInstance { }*)arg1 inID:(unsigned int)arg2 inScope:(unsigned int)arg3 inElement:(unsigned int)arg4 inData:(const void*)arg5 inDataSize:(unsigned int)arg6 outStatus:(int*)arg7;
- (bool)uninitialize:(struct OpaqueAudioComponentInstance { }*)arg1 outStatus:(int*)arg2;

@end
