
@interface IDSCTAdapter : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientPNRDelegate, CoreTelephonyClientSubscriberDelegate, IMSystemMonitorListener> {
    id  _cache;
    id  _coreTelephonyClient;
    NSHashTable * _listeners;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _registrationStateByLabelID;
    IMSystemMonitor * _systemMonitor;
}

@property (nonatomic, retain) IDSCTAdapterCache *cache;
@property (nonatomic, retain) CoreTelephonyClient *coreTelephonyClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool doesAnySIMSupportsSimultaneousVoiceAndDataRightNow;
@property (nonatomic, readonly) bool dualSIMCapabilityEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAnySIMInserted;
@property (nonatomic, readonly) bool isAnySIMUsable;
@property (nonatomic, retain) NSHashTable *listeners;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSMutableDictionary *registrationStateByLabelID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsIdentification;
@property (nonatomic, retain) IMSystemMonitor *systemMonitor;

+ (bool)isPhoneNumber:(id)arg1 equivalentToExistingPhoneNumber:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)CTPNRForSIM:(id)arg1;
- (id)SIMForIdentifier:(id)arg1;
- (void)SIMStatusDidChange:(id)arg1 status:(id)arg2;
- (void)_checkRegistrationStateForContext:(id)arg1;
- (void)_iterateListenersForSelector:(SEL)arg1 block:(id /* block */)arg2;
- (bool)_legacy_supportsSMSIdentification;
- (void)_locked_accessCache:(id /* block */)arg1;
- (id)_unlocked_currentSIMsWithError:(id*)arg1;
- (void)_unlocked_iterateListenersForSelector:(SEL)arg1 block:(id /* block */)arg2;
- (void)addListener:(id)arg1;
- (id)cache;
- (void)carrierBundleChange:(id)arg1;
- (id)carrierBundleValueFromAllSIMsForKey:(id)arg1 ofType:(Class)arg2 withFallback:(id)arg3;
- (id)carrierBundleValueFromSIM:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3 withFallback:(id)arg4;
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;
- (void)context:(id)arg1 pnrSupportChanged:(bool)arg2;
- (id)contextForSim:(id)arg1;
- (id)coreTelephonyClient;
- (id)currentSIMsWithError:(id*)arg1;
- (void)dealloc;
- (void)didDetectSimDeactivation:(id)arg1 info:(id)arg2;
- (bool)doesAnySIMSupportsSimultaneousVoiceAndDataRightNow;
- (bool)dualSIMCapabilityEnabled;
- (void)dualSimCapabilityDidChange;
- (id)initWithCoreTelephonyClient:(id)arg1 systemMonitor:(id)arg2;
- (bool)isAnySIMInserted;
- (bool)isAnySIMUsable;
- (bool)isPNRNumber:(id)arg1 andPhoneBookNumber:(id)arg2 differentEnoughFromSIMIdentifier:(id)arg3 toReregisterWithNewNumber:(id*)arg4;
- (bool)isPhoneNumberEmergencyNumber:(id)arg1;
- (id)listeners;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)operatorBundleChange:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (void)pnrReadyStateNotification:(id)arg1 regState:(bool)arg2;
- (id)registrationStateByLabelID;
- (void)removeListener:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setCoreTelephonyClient:(id)arg1;
- (void)setListeners:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setRegistrationStateByLabelID:(id)arg1;
- (void)setSystemMonitor:(id)arg1;
- (void)subscriptionInfoDidChange;
- (bool)supportsIdentification;
- (void)systemApplicationDidBecomeActive;
- (id)systemMonitor;

@end
