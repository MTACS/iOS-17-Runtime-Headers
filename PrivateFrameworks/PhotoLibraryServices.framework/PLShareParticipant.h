
@interface PLShareParticipant : PLManagedObject

@property (nonatomic) long long acceptanceStatus;
@property (nonatomic, retain) NSSet *assetBeingTrashedByParticipant;
@property (nonatomic, retain) NSSet *assets;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic) short exitState;
@property (nonatomic) bool isCurrentUser;
@property (nonatomic, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, copy) NSString *participantID;
@property (nonatomic) long long permission;
@property (nonatomic, copy) PLPerson *person;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic) long long role;
@property (nonatomic, retain) PLShare *share;
@property (nonatomic, copy) NSString *userIdentifier;
@property (nonatomic, copy) NSString *uuid;

+ (id)_shareParticipantsWithPredicate:(id)arg1 fetchLimit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3;
+ (id)entityName;
+ (id)insertInPhotoLibrary:(id)arg1;
+ (bool)isCurrentUserInScopeChange:(id)arg1;
+ (id)participantWithCPLShareParticipant:(id)arg1 inShare:(id)arg2;
+ (id)participantWithPLShareParticipant:(id)arg1;
+ (id)participantsWithScope:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)participantsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)participantsWithUserIdentifiers:(id)arg1 inScope:(id)arg2 inPhotoLibrary:(id)arg3;

- (bool)_relationshipInInvalidState;
- (bool)_validateRelationshipConstraintForInsert:(bool)arg1 error:(id*)arg2;
- (long long)acceptanceStatus;
- (id)description;
- (long long)permission;
- (long long)role;
- (void)setAcceptanceStatus:(long long)arg1;
- (void)setPermission:(long long)arg1;
- (void)setRole:(long long)arg1;
- (id)shortName;
- (void)updateWithCPLShareParticipant:(id)arg1 inShare:(id)arg2;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;
- (void)willSave;

@end
