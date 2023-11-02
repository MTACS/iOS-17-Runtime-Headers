
@interface IRHistoryEventsContainerMO : NSManagedObject

@property (nonatomic, retain) NSSet *historyEvents;
@property (nonatomic, retain) IRServiceMO *service;

+ (id)fetchRequest;

@end
