
@protocol MKFTrigger <MKFModel, MKFTriggerPublicExtensions>

@required

- (NSArray *)actionSets;
- (NSNumber *)active;
- (void)addActionSetsObject:(id <MKFActionSet>)arg1;
- (NSNumber *)autoDelete;
- (NSString *)configuredName;
- (MKFTriggerDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (NSDate *)mostRecentFireDate;
- (NSString *)name;
- (<MKFUser> *)owner;
- (void)removeActionSetsObject:(id <MKFActionSet>)arg1;
- (void)setActionSets:(NSArray *)arg1;
- (void)setActive:(NSNumber *)arg1;
- (void)setAutoDelete:(NSNumber *)arg1;
- (void)setConfiguredName:(NSString *)arg1;
- (void)setMostRecentFireDate:(NSDate *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setOwner:(id <MKFUser>)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
