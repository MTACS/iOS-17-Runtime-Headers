
@interface TLAlertQueuePlayerStateDescriptor : NSObject {
    TLAlert * _alertForAudioEnvironmentSetup;
    bool  _hasInvokedCompletionHandlerForPlayingAlert;
    bool  _isAlertActivationAssertionAcquired;
    TLAlert * _playingAlert;
    id /* block */  _playingAlertCompletionHandler;
}

@property (getter=isAlertActivationAssertionAcquired, nonatomic) bool alertActivationAssertionAcquired;
@property (nonatomic, retain) TLAlert *alertForAudioEnvironmentSetup;
@property (nonatomic, readonly) TLAlert *playingAlert;
@property (nonatomic, readonly) id /* block */ playingAlertCompletionHandler;

- (void).cxx_destruct;
- (id)_descriptionForDebugging:(bool)arg1;
- (id)_initForRelinquishingActivationAssertionWithAlertForAudioEnvironmentSetup:(id)arg1 previousStateDescriptor:(id)arg2;
- (void)_transferPlayingAlertAndCompletionHandlerFromPreviousStateDescriptor:(id)arg1;
- (id)alertForAudioEnvironmentSetup;
- (id)debugDescription;
- (id)description;
- (id)initForAcquiringActivationAssertionWithAlertForAudioEnvironmentSetup:(id)arg1 previousStateDescriptor:(id)arg2;
- (id)initWithPlayingAlert:(id)arg1 completionHandler:(id /* block */)arg2 previousStateDescriptor:(id)arg3;
- (void)invokePlayingAlertCompletionHandlerWithPlaybackCompletionType:(long long)arg1 error:(id)arg2;
- (bool)isAlertActivationAssertionAcquired;
- (id)playingAlert;
- (id /* block */)playingAlertCompletionHandler;
- (void)setAlertActivationAssertionAcquired:(bool)arg1;
- (void)setAlertForAudioEnvironmentSetup:(id)arg1;
- (id)stateDescriptorByRelinquishingActivationAssertion;
- (id)stateDescriptorForCompletedPlayback;

@end
