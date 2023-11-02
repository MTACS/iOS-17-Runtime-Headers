
@interface NPHCarrierInfoCompanionReplication : NSObject {
    NSUserDefaults * _mobilePhoneUserDefaults;
    NSUserDefaults * _nanoPhoneUserDefaults;
    NPSManager * _npsManager;
}

@property (nonatomic, readonly) NSUserDefaults *mobilePhoneUserDefaults;
@property (nonatomic, readonly) NSUserDefaults *nanoPhoneUserDefaults;
@property (nonatomic, readonly) NPSManager *npsManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateHasCarrierVoicemailAccountsKey;
- (void)_updateIsVisualVoicemailServiceSubscribed;
- (void)_visualVMSubscriptionStateStatusChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)mobilePhoneUserDefaults;
- (id)nanoPhoneUserDefaults;
- (id)npsManager;

@end
