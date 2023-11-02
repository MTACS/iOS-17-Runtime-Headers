
@interface _MKFEventTrigger : _MKFTrigger <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFEventTrigger, MKFEventTriggerPrivateExtensions>

@property (nonatomic, retain) NSArray *actionSets;
@property (nonatomic, copy) NSNumber *active;
@property (nonatomic, copy) NSNumber *autoDelete;
@property (nonatomic, copy) NSString *configuredName;
@property (nonatomic, readonly, copy) MKFEventTriggerDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSPredicate *evaluationCondition;
@property (nonatomic, readonly, retain) NSArray *events;
@property (nonatomic, retain) NSSet *events_;
@property (nonatomic, copy) NSNumber *executeOnce;
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
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (void)awakeFromFetch;
- (id)castIfEventTrigger;
- (id)createEventsRelationOfType:(id)arg1 modelID:(id)arg2;
- (id)createEventsRelationOfTypeCalendarEventWithModelID:(id)arg1;
- (id)createEventsRelationOfTypeCharacteristicRangeEventWithModelID:(id)arg1;
- (id)createEventsRelationOfTypeCharacteristicValueEventWithModelID:(id)arg1;
- (id)createEventsRelationOfTypeDurationEventWithModelID:(id)arg1;
- (id)createEventsRelationOfTypeLocationEventWithModelID:(id)arg1;
- (id)createEventsRelationOfTypePresenceEventWithModelID:(id)arg1;
- (id)createEventsRelationOfTypeSignificantTimeEventWithModelID:(id)arg1;
- (id)databaseID;
- (id)events;
- (id)findEventsRelationOfTypeCalendarEventWithModelID:(id)arg1;
- (id)findEventsRelationOfTypeCharacteristicRangeEventWithModelID:(id)arg1;
- (id)findEventsRelationOfTypeCharacteristicValueEventWithModelID:(id)arg1;
- (id)findEventsRelationOfTypeDurationEventWithModelID:(id)arg1;
- (id)findEventsRelationOfTypeLocationEventWithModelID:(id)arg1;
- (id)findEventsRelationOfTypePresenceEventWithModelID:(id)arg1;
- (id)findEventsRelationOfTypeSignificantTimeEventWithModelID:(id)arg1;
- (id)materializeOrCreateEventsRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(bool*)arg3;
- (id)materializeOrCreateEventsRelationOfTypeCalendarEventWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateEventsRelationOfTypeCharacteristicRangeEventWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateEventsRelationOfTypeCharacteristicValueEventWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateEventsRelationOfTypeDurationEventWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateEventsRelationOfTypeLocationEventWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateEventsRelationOfTypePresenceEventWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)materializeOrCreateEventsRelationOfTypeSignificantTimeEventWithModelID:(id)arg1 createdNew:(bool*)arg2;
- (id)residentSyncAttributeValueForKey:(id)arg1 userContext:(id)arg2;
- (void)residentSyncContextualizeConditions:(id)arg1 userContext:(id)arg2;

@end
