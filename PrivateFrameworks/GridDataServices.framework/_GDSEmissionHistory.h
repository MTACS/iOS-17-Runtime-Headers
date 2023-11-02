
@interface _GDSEmissionHistory : NSObject {
    NSDate * _fetchDate;
    NSDictionary * _historicalMap;
}

@property (nonatomic, readonly) NSDate *fetchDate;
@property (nonatomic, readonly) NSDictionary *historicalMap;

- (void).cxx_destruct;
- (id)fetchDate;
- (id)historicalMap;
- (id)initWithHistoricalData:(id)arg1 fetchedAt:(id)arg2;

@end
