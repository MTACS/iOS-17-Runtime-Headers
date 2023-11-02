
@protocol PKPlayerController

@required

- (double)backwardJumpDuration;
- (PKEpisode *)currentEpisode;
- (PKDurationSnapshot *)durationSnapshot;
- (double)forwardJumpDuration;
- (void)jumpBackwardsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)jumpForwardsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)pauseWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)playWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (id /* block */)playerResponseHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)seekToPositionWithElapsedTime:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)setPlayerResponseHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startPlayback:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PKPlayerManifest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@optional

- (void)setManifest:(void *)arg1 startPlayback:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PKPlayerManifest *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@end
