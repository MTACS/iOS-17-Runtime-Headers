
@interface STBlueprintSchedule : NSManagedObject <STSerializableManagedObject, STSyncableSubObject>

@property (nonatomic, readonly) STBlueprint *blueprint;
@property (nonatomic, copy) NSString *calendarIdentifier;
@property (nonatomic, retain) NSDate *day0End;
@property (nonatomic, retain) NSDate *day0Start;
@property (nonatomic, retain) NSDate *day1End;
@property (nonatomic, retain) NSDate *day1Start;
@property (nonatomic, retain) NSDate *day2End;
@property (nonatomic, retain) NSDate *day2Start;
@property (nonatomic, retain) NSDate *day3End;
@property (nonatomic, retain) NSDate *day3Start;
@property (nonatomic, retain) NSDate *day4End;
@property (nonatomic, retain) NSDate *day4Start;
@property (nonatomic, retain) NSDate *day5End;
@property (nonatomic, retain) NSDate *day5Start;
@property (nonatomic, retain) NSDate *day6End;
@property (nonatomic, retain) NSDate *day6Start;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *notificationTimeInterval;
@property (nonatomic, retain) STBlueprintScheduleRepresentation *scheduleRepresentation;
@property (readonly) Class superclass;
@property (readonly) <STSerializableManagedObject> *syncableRootObject;

+ (id)_boundaryForState:(long long)arg1 fromStartBoundaries:(id)arg2 fromEndBoundaries:(id)arg3;
+ (id)_nextBoundaryAfterDate:(id)arg1 matchingDate:(id)arg2 onDay:(long long)arg3 inCalendar:(id)arg4;
+ (id)endDateKeyPaths;
+ (id)keyPathsForValuesAffectingScheduleRepresentation;
+ (id)startDateKeyPaths;

- (bool)_computeNextStartDate:(id*)arg1 nextEndDate:(id*)arg2 afterDate:(id)arg3 forDay:(long long)arg4 usingCalendar:(id)arg5;
- (bool)_computeStartBoundaries:(id*)arg1 endBoundaries:(id*)arg2 forCreationDate:(id)arg3 calendar:(id)arg4;
- (void)_datePairForDay:(long long)arg1 startDate:(id*)arg2 endDate:(id*)arg3;
- (id)computeNextOverrideEndDateForState:(long long)arg1 creationDate:(id)arg2 inCalendar:(id)arg3;
- (id)computeNextScheduleBoundaryAfterDate:(id)arg1 inCalendar:(id)arg2 isStartDate:(bool*)arg3;
- (id)dictionaryRepresentation;
- (bool)isActiveAtDate:(id)arg1 inCalendar:(id)arg2;
- (id)scheduleRepresentation;
- (void)setScheduleRepresentation:(id)arg1;
- (void)setStartTime:(id)arg1 endTime:(id)arg2;
- (void)setStartTime:(id)arg1 endTime:(id)arg2 forDay:(unsigned long long)arg3;
- (id)syncableRootObject;
- (bool)updateWithDictionaryRepresentation:(id)arg1;

@end
