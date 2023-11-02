
@protocol AFUISiriContent <AFUISiriRemoteViewHosting>

@required

- (long long)mode;
- (void)setMode:(long long)arg1;
- (void)setSiriSessionState:(long long)arg1;
- (long long)siriSessionState;

@optional

- (void)setAuxiliaryViewsHidden:(bool)arg1 animated:(bool)arg2;
- (void)setContentViewsAlpha:(double)arg1;
- (void)setRequestHandlingStatus:(unsigned long long)arg1;
- (void)setSiriContentDelegate:(id <AFUISiriContentDelegate>)arg1;
- (void)setVoiceActivationMaskViewVisible:(bool)arg1;
- (void)showPasscodeUnlockWithStatusText:(void *)arg1 subtitle:(void *)arg2 completionHandler:(void *)arg3 unlockCompletionHandler:(void *)arg4; // needs 4 arg types, found 14: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*, id /* block */, void*, void, id /* block */, long long, void*

@end
