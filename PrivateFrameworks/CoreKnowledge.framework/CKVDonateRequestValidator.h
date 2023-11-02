
@interface CKVDonateRequestValidator : NSObject {
    CKVSettings * _settings;
}

- (void).cxx_destruct;
- (bool)_isUserIdInHome:(id)arg1;
- (unsigned short)_validateKoaDonationEntitlementForConnection:(id)arg1;
- (unsigned short)_validateRequestForLocalDonation:(id)arg1 connection:(id)arg2;
- (unsigned short)_validateRequestForLocalLinkDynamicTermDonation:(id)arg1 connection:(id)arg2;
- (unsigned short)_validateRequestForLocalUserSpecificDonation:(id)arg1 connection:(id)arg2;
- (unsigned short)_validateRequestForMUXCompanionDonation:(id)arg1 connection:(id)arg2;
- (unsigned short)_validateRequestForMUXContactDonation:(id)arg1 connection:(id)arg2;
- (id)applicationBundleIdFromConnection:(id)arg1;
- (id)applicationBundleIdsProxyDonateEntitlement:(id)arg1;
- (id)applicationRecordFromRequest:(id)arg1;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (unsigned short)validateRequest:(id)arg1 connection:(id)arg2;

@end
