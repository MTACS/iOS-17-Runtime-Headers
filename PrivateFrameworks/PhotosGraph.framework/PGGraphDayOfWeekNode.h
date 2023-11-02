
@interface PGGraphDayOfWeekNode : PGGraphOptimizedNode <MAUniquelyIdentifiableNode> {
    long long  _dayOfWeek;
}

@property (readonly) long long dayOfWeek;
@property (readonly) NSString *name;
@property (nonatomic, readonly) MANodeFilter *uniquelyIdentifyingFilter;

+ (long long)dayOfWeekForName:(id)arg1;
+ (id)filter;
+ (id)nameForDayOfWeek:(long long)arg1;

- (long long)dayOfWeek;
- (id)description;
- (unsigned short)domain;
- (bool)hasProperties:(id)arg1;
- (id)initWithDayOfWeek:(long long)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;
- (id)name;
- (id)propertyDictionary;
- (id)uniquelyIdentifyingFilter;

@end
