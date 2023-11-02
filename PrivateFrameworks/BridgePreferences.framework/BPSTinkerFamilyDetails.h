
@interface BPSTinkerFamilyDetails : NSObject {
    FAFamilyMember * _organizerParentFamilyMember;
    FAFamilyMember * _pairingParentFamilyMember;
    FAFamilyMember * _tinkerFamilyMember;
}

@property (nonatomic, retain) FAFamilyMember *organizerParentFamilyMember;
@property (nonatomic, retain) FAFamilyMember *pairingParentFamilyMember;
@property (nonatomic, retain) FAFamilyMember *tinkerFamilyMember;

- (void).cxx_destruct;
- (id)organizerParentFamilyMember;
- (id)pairingParentFamilyMember;
- (void)setOrganizerParentFamilyMember:(id)arg1;
- (void)setPairingParentFamilyMember:(id)arg1;
- (void)setTinkerFamilyMember:(id)arg1;
- (id)tinkerFamilyMember;

@end
