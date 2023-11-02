
@interface NSCKRecordZoneMetadata : NSManagedObject

@property (nonatomic, retain) NSString *ckOwnerName;
@property (nonatomic, retain) NSString *ckRecordZoneName;
@property (nonatomic, retain) CKServerChangeToken *currentChangeToken;
@property (nonatomic, retain) NSCKDatabaseMetadata *database;
@property (nonatomic, retain) NSData *encodedShareData;
@property (nonatomic) bool hasRecordZone;
@property (nonatomic, retain) NSNumber *hasRecordZoneNum;
@property (nonatomic) bool hasSubscription;
@property (nonatomic, retain) NSNumber *hasSubscriptionNum;
@property (nonatomic, retain) NSDate *lastFetchDate;
@property (nonatomic, retain) NSSet *mirroredRelationships;
@property (nonatomic) bool needsImport;
@property (nonatomic) bool needsNewShareInvitation;
@property (nonatomic) bool needsRecoveryFromIdentityLoss;
@property (nonatomic) bool needsRecoveryFromUserPurge;
@property (nonatomic) bool needsRecoveryFromZoneDelete;
@property (nonatomic) bool needsShareDelete;
@property (nonatomic) bool needsShareUpdate;
@property (nonatomic, retain) NSSet *queries;
@property (nonatomic, retain) NSSet *records;
@property (nonatomic) bool supportsAtomicChanges;
@property (nonatomic) bool supportsFetchChanges;
@property (nonatomic) bool supportsRecordSharing;
@property (nonatomic) bool supportsZoneSharing;

+ (id)entityPath;
+ (id)fetchZoneIDsAssignedToObjectsWithIDs:(id)arg1 fromStore:(id)arg2 inContext:(id)arg3 error:(id*)arg4;

- (bool)hasRecordZone;
- (bool)hasSubscription;
- (void)setHasRecordZone:(bool)arg1;
- (void)setHasSubscription:(bool)arg1;

@end
