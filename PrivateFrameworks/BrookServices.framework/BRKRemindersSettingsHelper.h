
@interface BRKRemindersSettingsHelper : NSObject <CLLocationManagerDelegate> {
    BRKSettings * _brookSettings;
    CNContactStore * _contactStore;
    long long  _contactStoreAuthorizationStatus;
    bool  _coreRoutineAvailable;
    <BRKRemindersSettingsDelegate> * _delegate;
    CLInUseAssertion * _inUseAssertion;
    bool  _locationAuthorizationValid;
    bool  _locationAvailable;
    CLLocationManager * _locationManager;
    RTRoutineManager * _routineManager;
}

@property (nonatomic, retain) BRKSettings *brookSettings;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic) long long contactStoreAuthorizationStatus;
@property (getter=isCoreRoutineAvailable, nonatomic) bool coreRoutineAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BRKRemindersSettingsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLInUseAssertion *inUseAssertion;
@property (getter=isLocationAuthorizationValid, nonatomic) bool locationAuthorizationValid;
@property (getter=isLocationAvailable, nonatomic) bool locationAvailable;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (getter=isMeCardAvailable, nonatomic, readonly) bool meCardAvailable;
@property (getter=areRemindersAvailable, nonatomic, readonly) bool remindersAvailable;
@property (nonatomic, retain) RTRoutineManager *routineManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchLocationAuthorizationStatus;
- (void)_fetchLocationAvailableStatus;
- (id)_handwashingAppBundleLocationManager;
- (id)_handwashingLocationManager;
- (void)_isCoreRoutineHomeAvailableWithCompletion:(id /* block */)arg1;
- (void)_updateWithLocationAuthorizationStatus:(int)arg1 manager:(id)arg2;
- (bool)areRemindersAvailable;
- (id)brookSettings;
- (id)contactStore;
- (long long)contactStoreAuthorizationStatus;
- (void)dealloc;
- (id)delegate;
- (id)inUseAssertion;
- (id)initWithDelegate:(id)arg1 settings:(id)arg2;
- (bool)isCoreRoutineAvailable;
- (bool)isLocationAuthorizationValid;
- (bool)isLocationAvailable;
- (bool)isMeCardAvailable;
- (id)locationManager;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (id)meContactWithKeysToFetch:(id)arg1;
- (id)remindersFooterTextAndLinkString;
- (void)requestLocationAuthorizationIfNeeded;
- (id)routineManager;
- (void)setBrookSettings:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContactStoreAuthorizationStatus:(long long)arg1;
- (void)setCoreRoutineAvailable:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInUseAssertion:(id)arg1;
- (void)setLocationAuthorizationValid:(bool)arg1;
- (void)setLocationAvailable:(bool)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setRoutineManager:(id)arg1;
- (void)update;

@end
