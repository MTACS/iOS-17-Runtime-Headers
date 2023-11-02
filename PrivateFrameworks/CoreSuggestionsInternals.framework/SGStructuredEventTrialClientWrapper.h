
@interface SGStructuredEventTrialClientWrapper : SGTrialClientWrapper {
    _PASLock * _lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)baseModelName;
- (id)engineConfig;
- (bool)foundInMailNotifications;
- (id)init;
- (id)notificationsAllowListOverride;
- (id)structuredEventInputMapping;
- (id)structuredEventOutputMapping;
- (id)supportedProviders;
- (void)updateFactors;

@end
