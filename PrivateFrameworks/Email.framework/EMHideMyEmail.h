
@interface EMHideMyEmail : NSObject <EFLoggable> {
    EMCoreAnalyticsCollector * _analyticsCollector;
    AKPrivateEmailController * _controller;
    bool  _hasCheckedIfFeatureIsAvailable;
    EFLocked * _isAvailableLocked;
    <EFAssertableScheduler> * _scheduler;
}

@property (nonatomic, readonly) EMCoreAnalyticsCollector *analyticsCollector;
@property (nonatomic, retain) AKPrivateEmailController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *forwardingEmailForPrimaryAccount;
@property (nonatomic, readonly) bool hasCheckedIfFeatureIsAvailable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *isAvailable;
@property (nonatomic, retain) EFLocked *isAvailableLocked;
@property (nonatomic, readonly) ACAccount *primaryAccount;
@property (nonatomic, readonly) NSString *primaryAccountAltDSID;
@property (retain) <EFAssertableScheduler> *scheduler;
@property (readonly) Class superclass;

+ (id)log;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)addLocalizedDisplayNameForAddress:(id)arg1;
- (id)analyticsCollector;
- (id)controller;
- (id)forwardingEmailForAccount:(id)arg1;
- (id)forwardingEmailForPrimaryAccount;
- (void)generateHideMyEmailAddressForEmailAddress:(id)arg1 altDSID:(id)arg2 completion:(id /* block */)arg3;
- (void)generateHideMyEmailAddressForEmailAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)generateReplyToEmailForRecipient:(id)arg1 hmeAddress:(id)arg2 account:(id)arg3 completion:(id /* block */)arg4;
- (bool)hasCheckedIfFeatureIsAvailable;
- (void)hideMyEmailAddressForRecipientAddress:(id)arg1 altDSID:(id)arg2 completion:(id /* block */)arg3;
- (void)hideMyEmailAddressForRecipientAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)hideMyEmailAddresses:(id /* block */)arg1;
- (void)hideMyEmailAddressesInAccountWithAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)isAvailable;
- (void)isAvailable:(id /* block */)arg1;
- (id)isAvailableLocked;
- (bool)isConfigured:(id*)arg1;
- (bool)isConfiguredForAccountWithAltDSID:(id)arg1 error:(id*)arg2;
- (void)isHideMyEmailAddressValid:(id)arg1 senderAddress:(id)arg2 completion:(id /* block */)arg3;
- (id)primaryAccount;
- (id)primaryAccountAltDSID;
- (void)resetIsAvailable;
- (id)scheduler;
- (void)setController:(id)arg1;
- (void)setIsAvailableLocked:(id)arg1;
- (void)setScheduler:(id)arg1;

@end
