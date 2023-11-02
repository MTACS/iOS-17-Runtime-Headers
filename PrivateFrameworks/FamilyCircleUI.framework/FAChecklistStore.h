
@interface FAChecklistStore : NSObject {
    AKAccountManager * _accountManager;
    ACAccount * _appleAccount;
    ACAccount * _authKitAccount;
    NSNumber * _computedIncompleteCount;
    unsigned long long  _countEmergencyContacts;
    unsigned long long  _countMembersIcloudPlus;
    NSArray * _currEmergencyContacts;
    AACustodianController * _custodianController;
    long long  _deviceType;
    FAFamilyCircle * _familyCircle;
    HKHealthStore * _healthStore;
    FASharedService * _iCloudService;
    NSURL * _icloudPlusUrl;
    FASharedService * _icloudService;
    NSMutableDictionary * _incompleteCounts;
    NSNumber * _incompleteItems;
    FASharedService * _locationSharedService;
    _HKMedicalIDData * _medicalIDData;
    HKMedicalIDStore * _medicalIDStore;
    NSSet * _membersWithLocation;
    FMFSession * _session;
    STSetupClient * _setupClient;
}

@property (nonatomic, retain) ACAccount *appleAccount;
@property (nonatomic) unsigned long long countMembersIcloudPlus;
@property (nonatomic) long long deviceType;
@property (nonatomic, retain) FAFamilyCircle *familyCircle;
@property (nonatomic, readonly) FASharedService *iCloudService;
@property (nonatomic, retain) NSURL *icloudPlusUrl;
@property (nonatomic, retain) FASharedService *icloudService;
@property (nonatomic, retain) NSNumber *incompleteItems;
@property (nonatomic, retain) FASharedService *locationSharedService;

- (void).cxx_destruct;
- (id)_getLocationSharedService:(id)arg1;
- (unsigned long long)_handleSubscriptionListResponse:(id)arg1;
- (id)appleAccount;
- (void)clearChecklistCounts;
- (long long)contactManagementEnabledForChild:(id)arg1;
- (unsigned long long)countMembersIcloudPlus;
- (long long)deviceType;
- (id)familyCircle;
- (void)familyLocationSharingStatus:(id /* block */)arg1;
- (void)fetchIcloudPlusMembership:(id /* block */)arg1;
- (void)fetchMedicalIDData:(id /* block */)arg1;
- (void)fetchMyCustodians:(id /* block */)arg1;
- (void)finishSetup;
- (id)iCloudService;
- (id)icloudPlusUrl;
- (id)icloudService;
- (id)incompleteItems;
- (id)init;
- (id)locationSharedService;
- (void)notifyObservable;
- (void)refreshChecklistCount:(id)arg1 account:(id)arg2 iCloudService:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)screenTimeEnabledForChild:(id)arg1;
- (void)setAppleAccount:(id)arg1;
- (void)setCountMembersIcloudPlus:(unsigned long long)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setFamilyCircle:(id)arg1;
- (void)setIcloudPlusUrl:(id)arg1;
- (void)setIcloudService:(id)arg1;
- (void)setIncompleteCountFor:(unsigned long long)arg1 count:(int)arg2;
- (void)setIncompleteItems:(id)arg1;
- (void)setLocationSharedService:(id)arg1;

@end
