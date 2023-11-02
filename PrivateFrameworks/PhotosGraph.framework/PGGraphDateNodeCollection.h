
@interface PGGraphDateNodeCollection : PGGraphNodeCollection

@property (nonatomic, readonly) PGGraphDayNodeCollection *dayNodes;
@property (nonatomic, readonly) PGGraphHolidayNodeCollection *holidayNodes;
@property (nonatomic, readonly) NSDateInterval *localDateInterval;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) PGGraphMonthDayNodeCollection *monthDayNodes;
@property (nonatomic, readonly) PGGraphMonthNodeCollection *monthNodes;
@property (nonatomic, readonly) PGGraphSeasonNodeCollection *seasonNodes;
@property (nonatomic, readonly) PGGraphWeekOfMonthNodeCollection *weekOfMonthNodes;
@property (nonatomic, readonly) PGGraphWeekOfYearNodeCollection *weekOfYearNodes;
@property (nonatomic, readonly) PGGraphYearNodeCollection *yearNodes;

+ (id)dateNodesForLocalDates:(id)arg1 inGraph:(id)arg2;
+ (Class)nodeClass;

- (id)dayNodes;
- (id)holidayNodes;
- (id)localDateInterval;
- (id)momentNodes;
- (id)monthDayNodes;
- (id)monthNodes;
- (id)seasonNodes;
- (id)weekOfMonthNodes;
- (id)weekOfYearNodes;
- (id)yearNodes;

@end
