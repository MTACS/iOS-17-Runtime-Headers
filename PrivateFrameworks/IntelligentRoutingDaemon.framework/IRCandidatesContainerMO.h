
@interface IRCandidatesContainerMO : NSManagedObject

@property (nonatomic, retain) NSSet *candidates;
@property (nonatomic, retain) IRReplayEventMO *replayEvent;
@property (nonatomic, retain) IRServiceMO *service;

+ (id)candidatesContainerMOFromCandidatesContainerDO:(id)arg1 withReplayEventMO:(id)arg2 managedObjectContext:(id)arg3;
+ (id)fetchRequest;
+ (void)setPropertiesOfCandidatesContainerMO:(id)arg1 withCandidatesContainerDO:(id)arg2 inManagedObjectContext:(id)arg3;

- (id)convert;

@end
