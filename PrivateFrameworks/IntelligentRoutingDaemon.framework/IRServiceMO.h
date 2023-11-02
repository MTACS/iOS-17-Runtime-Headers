
@interface IRServiceMO : NSManagedObject

@property (nonatomic, retain) IRCandidatesContainerMO *candidatesContainer;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, retain) IRHistoryEventsContainerMO *historyContainer;
@property (nonatomic, retain) NSDate *lastSeenDate;
@property (nonatomic, retain) IRMiLoServiceMO *miloService;
@property (nonatomic, retain) IRReplayEventsContainerMO *replayEventContainer;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (nonatomic) long long servicePackage;
@property (nonatomic, retain) IRStatisticsMO *statistics;

+ (id)MOService:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequest;
+ (void)setPropertiesOfServiceMO:(id)arg1 withServiceDO:(id)arg2;

- (id)convert;

@end
