
@protocol VUIDebugMetricsTermCollector <NSObject>

@required

- (NSArray *)baseTerms;
- (NSArray *)filteredTerms;
- (NSArray *)metricsKitTerms;
- (NSDictionary *)primaryTerms;

@end
