
@protocol PPSDataIngesterProtocol

@required

- (NSURL *)filepath;
- (NSArray *)metricNames;
- (id)parseData:(id*)arg1;
- (NSPredicate *)predicate;
- (NSString *)sourceName;
- (NSDateInterval *)timeFilter;

@end
