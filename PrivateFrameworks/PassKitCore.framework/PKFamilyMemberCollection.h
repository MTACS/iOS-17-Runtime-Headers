
@interface PKFamilyMemberCollection : NSObject {
    PKFamilyMember * _currentUser;
    NSString * _currentUserAltDSID;
    NSArray * _familyMembers;
    NSDictionary * _familyMembersByAltDSID;
}

@property (nonatomic, readonly) PKFamilyMember *currentUser;
@property (nonatomic, readonly, copy) NSString *currentUserAltDSID;
@property (nonatomic, readonly, copy) NSArray *familyMembers;
@property (nonatomic, readonly, copy) NSDictionary *familyMembersByAltDSID;

- (void).cxx_destruct;
- (id)currentUser;
- (id)currentUserAltDSID;
- (id)familyMemberForAltDSID:(id)arg1;
- (id)familyMemberForTransactionSource:(id)arg1;
- (id)familyMembers;
- (id)familyMembersByAltDSID;
- (id)initWithFamilyMembers:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
