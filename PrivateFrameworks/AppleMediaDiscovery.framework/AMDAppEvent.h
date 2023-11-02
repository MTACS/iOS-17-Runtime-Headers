
@interface AMDAppEvent : NSManagedObject

@property (nonatomic) long long adamId;
@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic) float batteryUsage;
@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic) short eventSubType;
@property (nonatomic, copy) NSString *eventVersion;
@property (nonatomic) long long foregroundDuration;
@property (nonatomic) float latitude;
@property (nonatomic) float locationAccuracy;
@property (nonatomic) float longitude;
@property (nonatomic, copy) NSString *miscData;
@property (nonatomic) short networkType;
@property (nonatomic) short platform;
@property (nonatomic) long long storageUsed;
@property (nonatomic) long long time;
@property (nonatomic) long long timeZoneOffset;
@property (nonatomic) short type;
@property (nonatomic, copy) NSString *userId;

+ (id)deleteAllEvents:(id*)arg1;
+ (id)deleteAllEventsForUser:(id)arg1 error:(id*)arg2;
+ (id)deleteAppEventsOlderThan:(unsigned long long)arg1 forEventType:(id)arg2 withPlatform:(id)arg3 error:(id*)arg4;
+ (id)deleteUsingPredicates:(id)arg1 error:(id*)arg2;
+ (id)fetchEvents:(id*)arg1;
+ (id)fetchEventsWithPredicate:(id)arg1 error:(id*)arg2;
+ (id)fetchRequest;
+ (id)getEventPlatform:(id)arg1;
+ (id)getEventSubType:(id)arg1;
+ (id)getEventType:(id)arg1;
+ (id)getSegmentsWithLookBack:(id)arg1 andRecencyThreshold:(id)arg2 andFrequencyThreshold:(id)arg3 andDurationThreshold:(id)arg4 withUserId:(id)arg5 error:(id*)arg6;
+ (unsigned int)saveEvent:(id)arg1 error:(id*)arg2;
+ (bool)validateInput:(id)arg1;

- (void)populateRecord:(id)arg1;

@end
