
@interface CNiOSABGroupNameMatchingPredicate : CNPredicate <CNiOSGroupPredicate> {
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (id)groupNameTokenizingCharacterSet;
+ (bool)supportsSecureCoding;
+ (id)tokenizeString:(id)arg1;

- (void).cxx_destruct;
- (struct __CFArray { }*)cn_copyGroupsInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)groupName:(id)arg1 matchesSearchTokens:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)name;

@end
