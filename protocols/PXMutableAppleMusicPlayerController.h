
@protocol PXMutableAppleMusicPlayerController

@required

- (void)pause;
- (void)play;
- (long long)playbackState;
- (void)prepareToPlayWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setItemWithStoreID:(NSString *)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setVolume:(double)arg1;
- (double)volume;

@end
