
@interface SessionMO : NSManagedObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSDate *end;
@property (nonatomic) long long inChargingDayTime;
@property (nonatomic) long long inChargingNightTime;
@property (nonatomic) long long inStationaryDayTime;
@property (nonatomic) long long inStationaryNightTime;
@property (nonatomic, retain) JoinMO *join;
@property (nonatomic, retain) LeaveMO *leave;
@property (nonatomic, retain) NSSet *roamsSet;
@property (nonatomic) long long usageDayTime;
@property (nonatomic) long long usageNightTime;

+ (bool)addMostRecentSession:(id)arg1 moc:(id)arg2;
+ (bool)addSession:(id)arg1 leave:(id)arg2 roams:(id)arg3 moc:(id)arg4;
+ (bool)addSessionsForFirstUse:(id)arg1;
+ (bool)buildAndAddSessionWithJoin:(id)arg1 moc:(id)arg2;
+ (id)entityName;
+ (id)fetchRequest;
+ (bool)firstSessionCreated:(id)arg1;
+ (id)getMostRecentSession:(id)arg1 moc:(id)arg2;
+ (id)getSessions:(id)arg1 sortedAscending:(bool)arg2 moc:(id)arg3;
+ (id)getSessionsWithMostRecentDays:(id)arg1 days:(unsigned long long)arg2 sortedAscending:(bool)arg3 moc:(id)arg4;
+ (void)prePopulateUsageTimeForNetwork:(id)arg1 moc:(id)arg2;
+ (void)prePopulateUsageTimesForAllNetworks:(id)arg1;
+ (void)prePopulateUsageTimesForUsageTimesForAllSessions:(id)arg1;
+ (unsigned long long)timeInCharging:(id)arg1 maxAgeInDays:(unsigned long long)arg2 dayTime:(bool)arg3 moc:(id)arg4;
+ (unsigned long long)timeInStationary:(id)arg1 maxAgeInDays:(unsigned long long)arg2 dayTime:(bool)arg3 moc:(id)arg4;
+ (unsigned long long)usageTime:(id)arg1 maxAgeInDays:(unsigned long long)arg2 dayTime:(bool)arg3 moc:(id)arg4;

@end
