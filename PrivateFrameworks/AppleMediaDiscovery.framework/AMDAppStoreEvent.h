
@interface AMDAppStoreEvent : NSManagedObject

@property (nonatomic, copy) NSString *adamId;
@property (nonatomic) long long eventTimeMillis;
@property (nonatomic) short eventType;
@property (nonatomic, copy) NSString *sourceSwoosh;
@property (nonatomic, copy) NSString *usecase;
@property (nonatomic, copy) NSString *userId;

+ (id)deleteAllEvents:(id*)arg1;
+ (id)deleteEventsForPredicate:(id)arg1 error:(id*)arg2;
+ (id)deleteEventsForUser:(id)arg1 error:(id*)arg2;
+ (id)deleteEventsOlderThan:(unsigned long long)arg1 error:(id*)arg2;
+ (id)fetchEvents:(id*)arg1;
+ (id)fetchRequest;
+ (short)getEventType:(id)arg1;
+ (id)retrieveEventsOfType:(id)arg1 inPeriod:(id)arg2 forUser:(id)arg3 error:(id*)arg4;
+ (unsigned int)saveEvent:(id)arg1 forUser:(id)arg2 error:(id*)arg3;

@end
