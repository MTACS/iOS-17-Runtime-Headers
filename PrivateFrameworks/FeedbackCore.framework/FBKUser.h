
@interface FBKUser : FBKManagedFeedbackObject

@property (nonatomic, readonly) NSSet *activeManagedTeams;
@property (nonatomic, readonly) NSSet *activeTeams;
@property (nonatomic, retain) NSSet *announcementContentItems;
@property (nonatomic, retain) NSSet *bugFormStubs;
@property (nonatomic, retain) NSSet *contentItems;
@property (nonatomic) bool didFetchContentItems;
@property (nonatomic) bool didFetchFormStubs;
@property short environment;
@property (nonatomic, retain) NSString *familyName;
@property (nonatomic, retain) NSSet *feedbackContentItems;
@property (nonatomic, retain) NSSet *formResponseContentItems;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, retain) NSString *givenName;
@property (nonatomic, readonly) bool hasForms;
@property (nonatomic, readonly) bool hasManagedTeams;
@property (nonatomic, readonly) bool hasManyManagedTeams;
@property (nonatomic) bool isSystemAccount;
@property (nonatomic, readonly) bool isUnauthenticatedUser;
@property (nonatomic, readonly) NSSet *managedTeams;
@property (nonatomic, retain) NSSet *surveyContentItems;
@property (nonatomic, retain) NSSet *teams;
@property (nonatomic, readonly) NSSet *teamsContainingContent;
@property (nonatomic, retain) NSString *username;

+ (id)createUserFromUserLoginInfo:(id)arg1 forEnvironment:(short)arg2 inContext:(id)arg3;
+ (id)entityName;
+ (id)keyPathsForValuesAffectingOnlyPublic;
+ (id)uniqueFormStubsWithPreferredTeam:(id)arg1 withForms:(id)arg2;

- (id)activeManagedTeams;
- (id)activeTeams;
- (id)bugFormStubsForPickerWithPredicate:(id)arg1 team:(id)arg2;
- (id)draftFormResponseIDs;
- (id)fullName;
- (bool)hasForms;
- (bool)hasManagedTeams;
- (bool)hasManyManagedTeams;
- (bool)isInAnyProgram;
- (bool)isUnauthenticatedUser;
- (id)managedTeams;
- (bool)onlyPublic;
- (id)teamsContainingContent;
- (id)uniqueFormStubsWithPreferredTeam:(id)arg1;

@end
