
@protocol SVXClientServiceDelegate <NSObject>

@required

- (oneway void)getInstanceInfoWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AFInstanceInfo *, NSError *, void*
- (oneway void)handleSpeechSynthesisSynthesizedBufferForHandlerUUID:(void *)arg1 audioChunkData:(void *)arg2 audioChunkIndex:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSUUID *, SiriTTSAudioData *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)notifyAudioSessionDidBecomeActive:(bool)arg1 activationContext:(SVXActivationContext *)arg2 deactivationContext:(SVXDeactivationContext *)arg3;
- (oneway void)notifyAudioSessionWillBecomeActive:(bool)arg1 activationContext:(SVXActivationContext *)arg2 deactivationContext:(SVXDeactivationContext *)arg3;
- (oneway void)notifyDidActivateWithContext:(SVXActivationContext *)arg1;
- (oneway void)notifyDidChangeSessionStateFrom:(long long)arg1 to:(long long)arg2;
- (oneway void)notifyDidDeactivateWithContext:(SVXDeactivationContext *)arg1;
- (oneway void)notifyDidEndUpdateAudioPowerWithType:(long long)arg1;
- (oneway void)notifyDidNotActivateWithContext:(SVXActivationContext *)arg1 error:(NSError *)arg2;
- (oneway void)notifySessionDidBecomeActiveWithActivationContext:(SVXActivationContext *)arg1 turnID:(NSUUID *)arg2;
- (oneway void)notifySessionDidResignActiveWithDeactivationContext:(SVXDeactivationContext *)arg1;
- (oneway void)notifySessionDidStartSoundWithID:(long long)arg1;
- (oneway void)notifySessionDidStopSoundWithID:(long long)arg1 error:(NSError *)arg2;
- (oneway void)notifySessionWillBecomeActiveWithActivationContext:(SVXActivationContext *)arg1 turnID:(NSUUID *)arg2;
- (oneway void)notifySessionWillPresentFeedbackWithDialogIdentifier:(NSString *)arg1;
- (oneway void)notifySessionWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2;
- (oneway void)notifySessionWillStartSoundWithID:(long long)arg1;
- (oneway void)notifyWillActivateWithContext:(SVXActivationContext *)arg1;
- (oneway void)notifyWillBeginUpdateAudioPowerWithType:(long long)arg1 wrapper:(AFXPCWrapper *)arg2;
- (oneway void)notifyWillChangeSessionStateFrom:(long long)arg1 to:(long long)arg2;
- (oneway void)notifyWillDeactivateWithContext:(SVXDeactivationContext *)arg1;
- (oneway void)requestPermissionToActivateWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SVXActivationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
