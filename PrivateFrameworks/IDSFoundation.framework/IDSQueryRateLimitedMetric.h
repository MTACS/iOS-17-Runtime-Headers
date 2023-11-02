
@interface IDSQueryRateLimitedMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSNumber * _queryCount;
    NSNumber * _timeSinceStart;
    NSString * _topLevelService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *queryCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *timeSinceStart;
@property (nonatomic, readonly) NSString *topLevelService;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithTopLevelService:(id)arg1 count:(id)arg2 timeSinceStart:(id)arg3;
- (id)name;
- (id)queryCount;
- (id)timeSinceStart;
- (id)topLevelService;

@end
