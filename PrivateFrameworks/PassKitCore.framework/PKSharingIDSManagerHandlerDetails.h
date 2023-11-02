
@interface PKSharingIDSManagerHandlerDetails : NSObject {
    PKAccountUser * _accountUser;
    PKFamilyMember * _familyMember;
}

@property (nonatomic, readonly) PKAccountUser *accountUser;
@property (nonatomic, readonly) PKFamilyMember *familyMember;

- (void).cxx_destruct;
- (id)accountUser;
- (id)aliases;
- (id)allHandles;
- (id)description;
- (id)familyMember;
- (id)initWithFamilyMember:(id)arg1;
- (id)initWithFamilyMember:(id)arg1 accountUser:(id)arg2;
- (id)primaryAppleID;

@end
