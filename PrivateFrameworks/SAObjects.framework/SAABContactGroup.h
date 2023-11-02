
@interface SAABContactGroup : SADomainObject

@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, retain) SASource *groupSource;

+ (id)contactGroup;
+ (id)contactGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)groupName;
- (id)groupSource;
- (void)setGroupName:(id)arg1;
- (void)setGroupSource:(id)arg1;

@end
