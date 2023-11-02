
@interface MPMusicPlayerSystemController : MPMusicPlayerController <MPSystemMusicPlayerController>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_establishConnectionIfNeeded;
- (id)_nowPlaying;
- (id)_queueDescriptor;
- (bool)_shouldAccessCache;
- (void)onSystemServer:(id /* block */)arg1;
- (void)openToPlayQueueDescriptor:(id)arg1;
- (long long)playbackState;

@end
