
@interface PGGraphDateNode : PGGraphOptimizedNode <MAUniquelyIdentifiableNode> {
    NSString * _name;
}

@property (readonly) PGGraphDateNodeCollection *collection;
@property (readonly) long long day;
@property (readonly) PGGraphCalendarUnitNode *dayNode;
@property (readonly) long long month;
@property (readonly) long long monthDay;
@property (readonly) PGGraphCalendarUnitNode *monthDayNode;
@property (readonly) PGGraphCalendarUnitNode *monthNode;
@property (readonly) NSString *name;
@property (nonatomic, readonly) PGGraphSeasonNode *seasonNode;
@property (nonatomic, readonly) MANodeFilter *uniquelyIdentifyingFilter;
@property (readonly) PGGraphCalendarUnitNode *weekOfMonthNode;
@property (readonly) PGGraphCalendarUnitNode *weekOfYearNode;
@property (readonly) long long year;
@property (readonly) PGGraphCalendarUnitNode *yearNode;

+ (id)dateNodeForDayNode:(id)arg1 monthNode:(id)arg2 yearNode:(id)arg3;
+ (id)dayOfDate;
+ (id)dayOfWeekOfDate;
+ (id)filter;
+ (id)filterWithDateNames:(id)arg1;
+ (id)holidayOfDate;
+ (id)momentOfDate;
+ (id)monthDayOfDate;
+ (id)monthOfDate;
+ (id)seasonOfDate;
+ (id)weekOfMonthOfDate;
+ (id)weekOfYearOfDate;
+ (id)yearOfDate;

- (void).cxx_destruct;
- (id)associatedNodesForRemoval;
- (id)collection;
- (long long)day;
- (id)dayNode;
- (id)description;
- (unsigned short)domain;
- (void)enumerateHolidayEdgesAndNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateHolidayNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)arg1;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithName:(id)arg1;
- (id)label;
- (id)lastWeekDateNodes;
- (id)localDate;
- (long long)month;
- (long long)monthDay;
- (id)monthDayNode;
- (id)monthNode;
- (id)name;
- (id)propertyDictionary;
- (id)propertyForKey:(id)arg1;
- (id)sameWeekDateNodes;
- (id)seasonNode;
- (id)uniquelyIdentifyingFilter;
- (id)weekOfMonthNode;
- (id)weekOfYearNode;
- (long long)year;
- (id)yearNode;

@end
