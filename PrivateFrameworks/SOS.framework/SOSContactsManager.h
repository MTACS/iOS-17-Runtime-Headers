
@interface SOSContactsManager : NSObject {
    NSString * _activeSafetyMonitorSessionPrimaryHandle;
    int  _healthContactsNotificationToken;
    HKHealthStore * _healthStore;
    SOSLegacyContactsManager * _legacyContactsManager;
    NSObject<OS_dispatch_semaphore> * _medicalIDContactsInitialStateSemaphore;
    NSArray * _medicalIDEmergencyContacts;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _medicalIDEmergencyContactsMutex;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _safetyMonitorSessionHandleMutex;
    NSObject<OS_dispatch_semaphore> * _safetyMonitorSessionInitialStateSemaphore;
}

@property (nonatomic, readonly) bool SOSContactsExist;
@property (nonatomic, retain) NSString *activeSafetyMonitorSessionPrimaryHandle;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, readonly) SOSLegacyContactsManager *legacyContactsManager;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *medicalIDContactsInitialStateSemaphore;
@property (nonatomic, retain) NSArray *medicalIDEmergencyContacts;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } medicalIDEmergencyContactsMutex;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } safetyMonitorSessionHandleMutex;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *safetyMonitorSessionInitialStateSemaphore;

+ (bool)authorizedToUseContactStore;
+ (id)contactStore;
+ (void)preloadContactStoreIfNecessary;

- (void).cxx_destruct;
- (id)SOSContactDestinations;
- (id)SOSContactRecipients;
- (bool)SOSContactsExist;
- (void)SOSContactsWithTimeout:(double)arg1 andCompletion:(id /* block */)arg2;
- (void)_fetchMedicalIDEmergencyContacts;
- (void)_fetchSafetyMonitorSessionHandle;
- (bool)_isEmergencyNumber:(id)arg1;
- (void)_medicalContactsDidChange;
- (void)_medicalIDEmergencyContactsWithCompletion:(id /* block */)arg1;
- (void)_updateWithSafetyMonitorSessionState:(id)arg1 isActiveDevice:(bool)arg2 error:(id)arg3;
- (id)_userDefaults;
- (void)_waitForMedicalIDInitialState;
- (void)_waitForSafetyMonitorInitialState;
- (id)activeSafetyMonitorSessionPrimaryHandle;
- (void)dealloc;
- (bool)hasValidContactsToMessage;
- (id)healthStore;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (bool)isPhoneNumberEqual:(id)arg1 toNumber:(id)arg2;
- (id)legacyContactsManager;
- (id)medicalIDContactsInitialStateSemaphore;
- (id)medicalIDEmergencyContacts;
- (struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })medicalIDEmergencyContactsMutex;
- (id)phoneNumbersToMessage;
- (void)refreshCurrentEmergencyContacts;
- (struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })safetyMonitorSessionHandleMutex;
- (id)safetyMonitorSessionInitialStateSemaphore;
- (void)setActiveSafetyMonitorSessionPrimaryHandle:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setMedicalIDContactsInitialStateSemaphore:(id)arg1;
- (void)setMedicalIDEmergencyContacts:(id)arg1;
- (void)setMedicalIDEmergencyContactsMutex:(struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })arg1;
- (void)setSafetyMonitorSessionHandleMutex:(struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })arg1;
- (void)setSafetyMonitorSessionInitialStateSemaphore:(id)arg1;
- (id)sosDestinationsContainsPhoneNumber:(id)arg1 sosRecipients:(id)arg2;

@end
