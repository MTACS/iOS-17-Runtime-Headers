
@interface CNPropertyGroupsDataSource : NSObject {
    CNContactStore * _contactStore;
    NSDictionary * _linkedPoliciesByContactIdentifier;
    CNMutableContact * _mutableContact;
    CNPolicy * _policy;
    NSArray * _prohibitedPropertyKeys;
    NSDictionary * _propertyGroups;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) NSDictionary *linkedPoliciesByContactIdentifier;
@property (nonatomic, retain) CNMutableContact *mutableContact;
@property (nonatomic, retain) CNPolicy *policy;
@property (nonatomic, retain) NSArray *prohibitedPropertyKeys;
@property (nonatomic, retain) NSDictionary *propertyGroups;

- (void).cxx_destruct;
- (id)allDisplayPropertyItemsForPropertyKeys:(id)arg1;
- (id)allDisplayPropertyItemsFromGroups:(id)arg1;
- (void)buildPropertyGroups;
- (id)contactStore;
- (Class)groupClassForProperty:(id)arg1;
- (id)initWithMutableContact:(id)arg1 contactStore:(id)arg2 policy:(id)arg3 linkedPolicies:(id)arg4 prohibitedKeys:(id)arg5;
- (id)linkedPoliciesByContactIdentifier;
- (id)mutableContact;
- (id)policy;
- (id)prohibitedPropertyKeys;
- (id)propertyGroups;
- (id)propertyGroupsForKeys:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setLinkedPoliciesByContactIdentifier:(id)arg1;
- (void)setMutableContact:(id)arg1;
- (void)setPolicy:(id)arg1;
- (void)setProhibitedPropertyKeys:(id)arg1;
- (void)setPropertyGroups:(id)arg1;

@end
