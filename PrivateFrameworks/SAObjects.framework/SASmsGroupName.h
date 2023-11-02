
@interface SASmsGroupName : SADomainObject

@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *groupNameId;

+ (id)groupName;
+ (id)groupNameWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)groupName;
- (id)groupNameId;
- (void)setGroupName:(id)arg1;
- (void)setGroupNameId:(id)arg1;

@end
