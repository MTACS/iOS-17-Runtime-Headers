
@interface IRHistoryEventMO : NSManagedObject

@property (nonatomic, retain) NSString *candidateIdenfifier;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) IREventMO *event;
@property (nonatomic, retain) IRHistoryEventsContainerMO *historyEventsContainer;
@property (nonatomic, retain) IRMiLoPredictionEventMO *miloPredictionEvent;
@property (nonatomic, retain) IRSystemStateMO *systemState;

+ (id)fetchRequest;
+ (id)historyEventMOWithhistoryEventDO:(id)arg1 historyEventsContainerMO:(id)arg2 inManagedObjectContext:(id)arg3;
+ (void)setPropertiesOfhistoryEventMO:(id)arg1 withhistoryEventDO:(id)arg2 inManagedObjectContext:(id)arg3;

- (id)convert;

@end
