
@interface VUIVPPAManager : NSObject {
    VUIAccessViewController * _accessViewController;
    bool  _alreadyInProgress;
}

@property (nonatomic, retain) VUIAccessViewController *accessViewController;
@property (nonatomic) bool alreadyInProgress;

+ (id)_getConsentedChannels;
+ (id)_getDeniedChannels;
+ (bool)_isReminderDue:(id)arg1 reminderInterval:(double)arg2;
+ (id)addUniqueChannels:(id)arg1 channels:(id)arg2;
+ (bool)channelAlreadyExists:(id)arg1 channelID:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_fetchConfigurationAndPresentVPPAIfRequired:(id)arg1 completion:(id /* block */)arg2;
- (id)_getEligibleBulkChannels;
- (id)_getVPPABulkChannels:(long long)arg1;
- (bool)_isChannelVPPAPromptEligible:(id)arg1;
- (bool)_isVPPAPromptDueForConfig:(id)arg1;
- (void)_presentVPPAConsentScreen:(id)arg1 vppaState:(long long)arg2 completion:(id /* block */)arg3;
- (id)_rootViewController;
- (id)accessViewController;
- (bool)alreadyInProgress;
- (id)init;
- (bool)lightweightCheckToSeeIfChannelRequiresConsent:(id)arg1;
- (void)reloadConfigurationAfterVPPAChange;
- (void)setAccessViewController:(id)arg1;
- (void)setAlreadyInProgress:(bool)arg1;
- (void)startVPPAConsentFlow:(id)arg1 completion:(id /* block */)arg2;
- (void)startVPPAConsentFlowForDeeplink:(id)arg1 completion:(id /* block */)arg2;

@end
