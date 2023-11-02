
@interface PKAccountInvitationChooseMemberRow : NSObject {
    NSNumberFormatter * _ageFormatter;
    bool  _eligible;
    PKFamilyMember * _familyMember;
    NSPersonNameComponentsFormatter * _nameFormatter;
    UIImage * _photoImage;
}

@property (getter=isEligible, nonatomic, readonly) bool eligible;
@property (nonatomic, readonly) PKFamilyMember *familyMember;

- (void).cxx_destruct;
- (void)_updateConfiguration:(id)arg1;
- (id)cellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)familyMember;
- (unsigned long long)hash;
- (id)initWithFamilyMember:(id)arg1 photoImage:(id)arg2 eligibility:(bool)arg3;
- (bool)isEligible;
- (bool)isEqual:(id)arg1;

@end
