
@interface IRReplayEventMO : NSManagedObject

@property (nonatomic, retain) IRCandidatesContainerMO *candidatesContainer;
@property (nonatomic, copy) NSString *contextChangeReason;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, retain) IRMiLoLSLPredictionMO *miloLslPrediction;
@property (nonatomic, retain) IRNearbyDeviceContainerMO *nearbyDeviceContainer;
@property (nonatomic, retain) IRReplayEventsContainerMO *replayEventsContainer;
@property (nonatomic, retain) IRSystemStateMO *systemState;

+ (id)fetchRequest;
+ (id)replayEventMOWithReplayEventDO:(id)arg1 replayEventsContainerMO:(id)arg2 inManagedObjectContext:(id)arg3;
+ (void)setPropertiesOfReplayEventMO:(id)arg1 withReplayEventDO:(id)arg2 inManagedObjectContext:(id)arg3;

- (id)convert;

@end
