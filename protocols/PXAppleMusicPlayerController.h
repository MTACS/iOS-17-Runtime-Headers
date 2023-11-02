
@protocol PXAppleMusicPlayerController

@required

- (void)clientIdentifier:(void *)arg1 becomeCurrentClientIfNeeded:(void *)arg2 performAsyncPlayerTransaction:(void *)arg3; // needs 3 arg types, found 10: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXMutableAppleMusicPlayerController> *, bool, NSError *, void*
- (void)clientIdentifier:(void *)arg1 performAsyncPlayerTransaction:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PXMutableAppleMusicPlayerController> *, bool, NSError *, void*
- (NSString *)currentClientIdentifier;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fetchCurrentTime;
- (bool)isAtEnd;
- (PXObservable *)observable;
- (long long)playbackState;
- (void)setCurrentClientIdentifier:(NSString *)arg1;
- (double)volume;

@end
