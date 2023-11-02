
@interface CNDDonationPreferences : NSObject <CNDDonationPreferences> {
    id /* block */  _donationPreferenceCheckingBlock;
    id /* block */  _donationPreferenceSettingBlock;
    <CNDonationPreferencesLogger> * _logger;
    NSNotificationCenter * _notificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) id /* block */ donationPreferenceCheckingBlock;
@property (nonatomic, readonly, copy) id /* block */ donationPreferenceSettingBlock;
@property (getter=isDonationsEnabled, nonatomic) bool donationsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNDonationPreferencesLogger> *logger;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;

+ (id)observableWithPreferences:(id)arg1 notificationCenter:(id)arg2 schedulerProvider:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (id /* block */)donationPreferenceCheckingBlock;
- (id /* block */)donationPreferenceSettingBlock;
- (id)init;
- (id)initWithNotificationCenter:(id)arg1 logger:(id)arg2 donationPreferenceCheckingBlock:(id /* block */)arg3 donationPreferenceSettingBlock:(id /* block */)arg4;
- (bool)isDonationsEnabled;
- (id)logger;
- (id)notificationCenter;
- (void)setDonationsEnabled:(bool)arg1;

@end
