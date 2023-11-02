
@interface AVAudioPlayerNode : AVAudioNode <AVAudioMixing>

@property (readonly) struct OpaqueAudioComponentInstance { }*_reAudioUnit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

// Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio

- (void)callLegacyCompletionHandlerForType:(long long)arg1 legacyHandler:(id /* block */)arg2;
- (void)didAttachToEngine:(id)arg1;
- (id)init;
- (bool)isPlaying;
- (id)nodeTimeForPlayerTime:(id)arg1;
- (void)pause;
- (void)play;
- (void)playAtTime:(id)arg1;
- (id)playerTimeForNodeTime:(id)arg1;
- (void)prepareWithFrameCount:(unsigned int)arg1;
- (void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionCallbackType:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)scheduleBuffer:(id)arg1 completionCallbackType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)scheduleBuffer:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)scheduleFile:(id)arg1 atTime:(id)arg2 completionCallbackType:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)scheduleFile:(id)arg1 atTime:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)scheduleSegment:(id)arg1 startingFrame:(long long)arg2 frameCount:(unsigned int)arg3 atTime:(id)arg4 completionCallbackType:(long long)arg5 completionHandler:(id /* block */)arg6;
- (void)scheduleSegment:(id)arg1 startingFrame:(long long)arg2 frameCount:(unsigned int)arg3 atTime:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)stop;

// Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE

- (struct OpaqueAudioComponentInstance { }*)_reAudioUnit;

@end
