
@interface STTelephonySubscriptionContext : NSObject <BSDebugDescriptionProviding> {
    NSString * _cachedCTOperatorName;
    NSString * _cachedCTRegistrationCellularStatus;
    NSString * _cachedCTRegistrationDisplayStatus;
    STMutableTelephonyCarrierBundleInfo * _carrierBundleInfo;
    bool * _fakeCellularRegistrationCanceled;
    bool * _fakeRegistrationCanceled;
    bool * _fakeServiceCanceled;
    STMutableTelephonyMobileEquipmentInfo * _mobileEquipmentInfo;
    unsigned long long  _modemDataConnectionType;
    bool  _pretendingToSearch;
    NSArray * _statusBarImages;
    STMutableTelephonySubscriptionInfo * _subscriptionInfo;
}

@property (nonatomic, copy) NSString *cachedCTOperatorName;
@property (nonatomic, copy) NSString *cachedCTRegistrationCellularStatus;
@property (nonatomic, copy) NSString *cachedCTRegistrationDisplayStatus;
@property (nonatomic, retain) STMutableTelephonyCarrierBundleInfo *carrierBundleInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool*fakeCellularRegistrationCanceled;
@property (nonatomic) bool*fakeRegistrationCanceled;
@property (nonatomic) bool*fakeServiceCanceled;
@property (getter=isFakingCellularRegistration, nonatomic, readonly) bool fakingCellularRegistration;
@property (getter=isFakingRegistration, nonatomic, readonly) bool fakingRegistration;
@property (getter=isFakingService, nonatomic, readonly) bool fakingService;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) STMutableTelephonyMobileEquipmentInfo *mobileEquipmentInfo;
@property (nonatomic) unsigned long long modemDataConnectionType;
@property (getter=isPretendingToSearch, nonatomic) bool pretendingToSearch;
@property (nonatomic, copy) NSArray *statusBarImages;
@property (nonatomic, retain) STMutableTelephonySubscriptionInfo *subscriptionInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachedCTOperatorName;
- (id)cachedCTRegistrationCellularStatus;
- (id)cachedCTRegistrationDisplayStatus;
- (id)carrierBundleInfo;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool*)fakeCellularRegistrationCanceled;
- (bool*)fakeRegistrationCanceled;
- (bool*)fakeServiceCanceled;
- (bool)isFakingCellularRegistration;
- (bool)isFakingRegistration;
- (bool)isFakingService;
- (bool)isPretendingToSearch;
- (id)mobileEquipmentInfo;
- (unsigned long long)modemDataConnectionType;
- (void)setCachedCTOperatorName:(id)arg1;
- (void)setCachedCTRegistrationCellularStatus:(id)arg1;
- (void)setCachedCTRegistrationDisplayStatus:(id)arg1;
- (void)setCarrierBundleInfo:(id)arg1;
- (void)setFakeCellularRegistrationCanceled:(bool*)arg1;
- (void)setFakeRegistrationCanceled:(bool*)arg1;
- (void)setFakeServiceCanceled:(bool*)arg1;
- (void)setMobileEquipmentInfo:(id)arg1;
- (void)setModemDataConnectionType:(unsigned long long)arg1;
- (void)setPretendingToSearch:(bool)arg1;
- (void)setStatusBarImages:(id)arg1;
- (void)setSubscriptionInfo:(id)arg1;
- (id)statusBarImages;
- (id)subscriptionInfo;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
