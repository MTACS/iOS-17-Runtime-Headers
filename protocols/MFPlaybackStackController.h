
@protocol MFPlaybackStackController <MFPlaybackInformationProviding, MFAudioSessionControlling, MFStateDumpable, MFResettable, MFPlayerConfigurable, MFStackModeConfigurable>

@required

- (void)beginScanningWithDirection:(void *)arg1 identifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)beginSeekingWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (<MFPlaybackStackControllerDelegate> *)delegate;
- (void)endScanningWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)endSeekingWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)jumpTo:(void *)arg1 identifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: double, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)pauseForLeasePreventionWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)pauseWithFadeOut:(void *)arg1 identifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: double, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)pauseWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)playWithRate:(void *)arg1 identifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: float, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)seekTo:(void *)arg1 identifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: double, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)setDelegate:(id <MFPlaybackStackControllerDelegate>)arg1;
- (void)setQueueWithInitialItem:(void *)arg1 andPlay:(void *)arg2 identifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: <MFQueuePlayerItem> *, bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)setRate:(void *)arg1 identifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: float, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)setupForNewQueueWithSessionID:(NSString *)arg1;
- (bool)shouldSkipJumpToItemStart:(long long)arg1;
- (void)teardownForQueueWithSessionID:(NSString *)arg1;

@end
