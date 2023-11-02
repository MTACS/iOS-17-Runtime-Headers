
@protocol TLAlertPlaybackBackEndController <NSObject>

@required

- (void)playAlert:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: TLAlert *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (bool)stopPlayingAlerts:(NSArray *)arg1 withOptions:(TLAlertStoppingOptions *)arg2 playbackCompletionType:(long long)arg3;

@optional

- (void)handleActivationAssertionStatusChangeForAlert:(TLAlert *)arg1 updatedStatus:(bool)arg2;
- (void)preheatForAlert:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: TLAlert *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateAudioVolumeDynamicallyForAlert:(TLAlert *)arg1 toValue:(float)arg2;

@end
