
@interface EKSideAlarm : NSManagedObject

@property (nonatomic, retain) NSDate *acknowledgedDate;
@property (nonatomic, retain) NSNumber *alarmID;
@property (nonatomic, retain) NSNumber *allDay;
@property (nonatomic, retain) NSNumber *databaseID;
@property (nonatomic, retain) NSDate *entityDate;
@property (nonatomic, retain) NSNumber *entityID;
@property (nonatomic, retain) NSString *entityTimeZone;
@property (nonatomic, retain) NSString *entityURI;
@property (nonatomic, retain) NSString *externalID;
@property (nonatomic, retain) NSDate *fireTime;
@property (nonatomic, retain) NSNumber *isDelayedProximityAlarm;
@property (nonatomic, retain) NSNumber *refiring;

@end
