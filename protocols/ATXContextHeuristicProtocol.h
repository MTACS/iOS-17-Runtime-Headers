
@protocol ATXContextHeuristicProtocol <NSObject>

@required

- (ATXContextHeuristicResult *)heuristicResultWithEnvironment:(id <ATXContextHeuristicsEnvironment>)arg1;
- (NSSet *)permanentRefreshTriggers;

@end
