
@interface BPSTinkerSupport : NSObject {
    FAFamilyCircle * _cachedFamilyCircle;
    AKDevice * _currentTinkerAKDevice;
    FAFamilyMember * _currentTinkerMember;
    NSSManager * _nssManager;
    FAFamilyMember * _organizerParentFamilyMember;
    FAFamilyMember * _pairingParentFamilyMember;
    FAProfilePictureStore * _profilePictureStore;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) FAFamilyCircle *cachedFamilyCircle;
@property (nonatomic, retain) AKDevice *currentTinkerAKDevice;
@property (nonatomic, retain) FAFamilyMember *currentTinkerMember;
@property (nonatomic, retain) NSSManager *nssManager;
@property (nonatomic, retain) FAFamilyMember *organizerParentFamilyMember;
@property (nonatomic, retain) FAFamilyMember *pairingParentFamilyMember;
@property (nonatomic, retain) FAProfilePictureStore *profilePictureStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)cachedFamilyCircle;
- (id)cachedOrganizerParentFamilyMember;
- (id)cachedPairingParentFamilyMember;
- (id)cachedProfilePictureForFamilyMember:(id)arg1;
- (id)cachedTinkerAKDevice;
- (id)cachedTinkerFamilyMemeber;
- (id)currentTinkerAKDevice;
- (id)currentTinkerMember;
- (id)familyMemberMatchingAccount:(id)arg1 inCircle:(id)arg2;
- (void)fetchFamilyDetails;
- (void)fetchProfilePictures;
- (void)getActiveTinkerFamilyDetailsWithCompletion:(id /* block */)arg1;
- (void)getActiveTinkerFamilyMember:(id /* block */)arg1;
- (void)getActiveTinkerFamilyMemberDetailsWithCompletion:(id /* block */)arg1;
- (void)getActiveTinkerFamilyMemberWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isActiveTinker;
- (id)nssManager;
- (id)organizerParentFamilyMember;
- (id)pairingParentFamilyMember;
- (id)profilePictureStore;
- (id)queue;
- (void)resetCachedDeviceValues;
- (void)setCachedFamilyCircle:(id)arg1;
- (void)setCurrentTinkerAKDevice:(id)arg1;
- (void)setCurrentTinkerMember:(id)arg1;
- (void)setNssManager:(id)arg1;
- (void)setOrganizerParentFamilyMember:(id)arg1;
- (void)setPairingParentFamilyMember:(id)arg1;
- (void)setProfilePictureStore:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTinkerFamilyMember:(id)arg1;

@end
