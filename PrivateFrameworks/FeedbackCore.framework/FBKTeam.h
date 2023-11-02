
@interface FBKTeam : FBKManagedFeedbackObject

@property (nonatomic, readonly) bool canStartNewFeedback;
@property (nonatomic, retain) NSSet *contentItems;
@property (nonatomic) bool didFetchFormItems;
@property (nonatomic, retain) NSSet *forms;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *participants;
@property (nonatomic, retain) FBKTeamPermissions *permissions;
@property (nonatomic, copy) NSNumber *remoteID;
@property (nonatomic, readonly) unsigned long long role;
@property (nonatomic) long long roleEnum;
@property (nonatomic, retain) NSSet *stakeholders;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic) long long statusEnum;
@property (nonatomic, readonly) unsigned long long teamType;
@property (nonatomic) long long teamTypeEnum;
@property (nonatomic, copy) NSString *typeString;
@property (nonatomic, retain) FBKUser *user;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)personalTeamForUser:(id)arg1 inContext:(id)arg2;
+ (id)sortDescriptors;

- (bool)canStartNewFeedback;
- (bool)hasContent;
- (void)prepareForDeletion;
- (unsigned long long)role;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (id)shortDescription;
- (unsigned long long)status;
- (id)teamFormStubMatchingFromFormStub:(id)arg1;
- (unsigned long long)teamType;

@end
