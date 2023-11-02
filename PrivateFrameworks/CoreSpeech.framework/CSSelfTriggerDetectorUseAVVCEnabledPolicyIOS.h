
@interface CSSelfTriggerDetectorUseAVVCEnabledPolicyIOS : CSPolicy {
    CSPolicy * _voiceTriggerEnabledPolicy;
}

@property (nonatomic, retain) CSPolicy *voiceTriggerEnabledPolicy;

- (void).cxx_destruct;
- (void)_addSelfTriggerDetectorEnabledConditions;
- (bool)_deviceSupportMyriadFriendlySelfTrigger;
- (bool)_shouldEnableMyriadFriendlySelfTrigger;
- (void)_subscribeEventMonitors;
- (id)init;
- (void)setVoiceTriggerEnabledPolicy:(id)arg1;
- (id)voiceTriggerEnabledPolicy;

@end
