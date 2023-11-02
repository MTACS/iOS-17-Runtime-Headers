
@interface IRReplayEventsContainerMO : NSManagedObject

@property (nonatomic, retain) NSSet *replayEvent;
@property (nonatomic, retain) IRServiceMO *service;

+ (id)fetchRequest;

- (id)convert;

@end
