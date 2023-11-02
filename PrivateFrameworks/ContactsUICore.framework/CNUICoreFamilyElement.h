
@interface CNUICoreFamilyElement : NSObject {
    FAFamilyMember * _familyMember;
    NSArray * _matchingContacts;
}

@property (nonatomic, readonly) FAFamilyMember *familyMember;
@property (nonatomic, readonly) bool hasMatchingContacts;
@property (nonatomic, readonly) bool isParent;
@property (nonatomic, readonly) NSArray *matchingContacts;

- (void).cxx_destruct;
- (bool)containsFamilyMember:(id)arg1;
- (id)description;
- (id)familyMember;
- (bool)hasMatchingContacts;
- (id)initWithFamilyMember:(id)arg1 matchingContacts:(id)arg2;
- (bool)isParent;
- (id)matchingContacts;

@end
