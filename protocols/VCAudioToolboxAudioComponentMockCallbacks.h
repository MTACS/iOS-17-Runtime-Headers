
@protocol VCAudioToolboxAudioComponentMockCallbacks

@required

- (bool)copyName:(struct OpaqueAudioComponent { }*)arg1 outName:(const struct __CFString {}**)arg2 outStatus:(int*)arg3;
- (bool)findNextComponent:(struct OpaqueAudioComponent { }*)arg1 description:(const struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg2 outComponent:(struct OpaqueAudioComponent {}**)arg3;
- (bool)getVersion:(struct OpaqueAudioComponent { }*)arg1 outVersion:(unsigned int*)arg2 outStatus:(int*)arg3;
- (bool)instanceDispose:(struct OpaqueAudioComponentInstance { }*)arg1 outStatus:(int*)arg2;
- (bool)instanceNew:(struct OpaqueAudioComponent { }*)arg1 outInstance:(struct OpaqueAudioComponentInstance {}**)arg2 outStatus:(int*)arg3;

@end
