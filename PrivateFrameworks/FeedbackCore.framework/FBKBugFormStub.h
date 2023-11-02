
@interface FBKBugFormStub : FBKManagedLocalIDObject

@property (nonatomic, retain) FBKBugForm *bugForm;
@property (nonatomic, copy) NSString *buildPrefix;
@property (nonatomic) bool forcePicker;
@property (nonatomic, copy) NSString *formDescription;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic, retain) NSArray *pluginIDs;
@property (nonatomic, copy) NSNumber *priority;
@property (nonatomic, copy) NSNumber *remoteID;
@property (copy) NSNumber *serverID;
@property (nonatomic, copy) NSString *signature;
@property (nonatomic, readonly) NSSet *stubsWithMatchingID;
@property (nonatomic, retain) NSString *tat;
@property (nonatomic, retain) NSSet *teams;
@property (nonatomic, readonly) NSSet *teamsMatchingFormID;
@property (nonatomic, retain) FBKUser *user;
@property (nonatomic) bool wasFetchedByTat;

+ (id)bugFormStubsMatchingBuild:(id)arg1 forPlatform:(id)arg2 withStubs:(id)arg3;
+ (id)bugFormStubsMatchingBuild:(id)arg1 withStubs:(id)arg2;
+ (id)entityName;
+ (id)fetchRequest;
+ (id)predicateForAllStubs;
+ (id)predicateForStub:(id)arg1;
+ (id)predicateForTeam:(id)arg1;
+ (id)sortDescriptor;
+ (id)uniquingKey;

- (id)debugDescription;
- (id)preferredTeamForStubPreferringTeam:(id)arg1;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (id)signatureDescription;
- (id)stubsWithMatchingID;
- (id)teamsMatchingFormID;

@end
