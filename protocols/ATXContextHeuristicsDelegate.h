
@protocol ATXContextHeuristicsDelegate

@required

- (void)contextHeuristics:(ATXContextHeuristics *)arg1 didUpdateSpotlightRecents:(NSArray *)arg2;
- (void)contextHeuristics:(ATXContextHeuristics *)arg1 didUpdateSuggestions:(NSArray *)arg2;

@end
