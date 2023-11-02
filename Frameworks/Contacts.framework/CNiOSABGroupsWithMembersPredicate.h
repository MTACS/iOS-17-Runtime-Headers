
@interface CNiOSABGroupsWithMembersPredicate : CNPredicate <CNiOSGroupPredicate> {
    bool  _includeAllParentGroups;
    NSArray * _recordIdentifiers;
    unsigned int  _recordType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includeAllParentGroups;
@property (nonatomic, readonly, copy) NSArray *recordIdentifiers;
@property (nonatomic, readonly) unsigned int recordType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __CFArray { }*)cn_copyGroupsInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeAllParentGroups;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 includeAllParentGroups:(bool)arg2;
- (id)initWithGroup:(id)arg1 includeAllParentGroups:(bool)arg2;
- (id)recordIdentifiers;
- (unsigned int)recordType;

@end
