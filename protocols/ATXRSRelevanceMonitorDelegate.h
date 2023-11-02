
@protocol ATXRSRelevanceMonitorDelegate <NSObject>

@required

- (void)relevanceMonitorDidUpdateCurrentlyRelevantCandidates:(NSArray *)arg1 relevantContexts:(NSDictionary *)arg2;

@end
