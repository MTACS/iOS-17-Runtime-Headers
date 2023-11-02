
@interface _MKFTimerTrigger : _MKFTrigger <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFTimerTrigger, MKFTimerTriggerPrivateExtensions>

@property (nonatomic, retain) NSArray *actionSets;
@property (nonatomic, copy) NSNumber *active;
@property (nonatomic, copy) NSNumber *autoDelete;
@property (nonatomic, copy) NSString *configuredName;
@property (nonatomic, readonly, copy) MKFTimerTriggerDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *fireDate;
@property (nonatomic, retain) NSTimeZone *fireDateTimeZone;
@property (nonatomic, retain) NSDateComponents *fireRepeatInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSDate *mostRecentFireDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) <MKFUser> *owner;
@property (nonatomic, copy) NSNumber *recurrenceDays;
@property (nonatomic, retain) NSData *recurrences;
@property (nonatomic, copy) NSString *significantEvent;
@property (nonatomic, retain) NSData *significantEventOffset;
@property (nonatomic, copy) NSNumber *significantEventOffsetSeconds;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (void)awakeFromFetch;
- (id)castIfTimerTrigger;
- (id)databaseID;

@end
