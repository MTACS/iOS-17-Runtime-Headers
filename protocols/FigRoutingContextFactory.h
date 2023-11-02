
@protocol FigRoutingContextFactory <NSObject>

@required

- (int)copyContextForUUIDWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)copyDisplayMenuVideoContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)copySidePlayContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)copySystemAudioContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)copySystemMirroringContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)copySystemMusicContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)copySystemRemotePoolContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)createAudioContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)createControlChannelOnlyContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)createPerAppSecondDisplayContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)createRemoteMusicControllerContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;
- (int)createVideoContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;

@optional

- (int)copyAllAudioContexts:(const struct __CFArray {}**)arg1;
- (int)copyDefaultContextWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2 context:(struct OpaqueFigRoutingContext {}**)arg3;

@end
