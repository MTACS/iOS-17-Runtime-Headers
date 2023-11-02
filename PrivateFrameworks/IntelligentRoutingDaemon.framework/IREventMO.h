
@interface IREventMO : NSManagedObject

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *contextIdentifier;
@property (nonatomic) long long eventSubtype;
@property (nonatomic) long long eventType;
@property (nonatomic, retain) IRHistoryEventMO *historyEvent;
@property (nonatomic, retain) NSString *name;

+ (id)IREventMOWithIREventDO:(id)arg1 historyEventMO:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)fetchRequest;
+ (void)setPropertiesOfEventMO:(id)arg1 withEventDO:(id)arg2;

- (id)convert;

@end
