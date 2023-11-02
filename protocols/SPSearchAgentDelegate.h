
@protocol SPSearchAgentDelegate

@required

- (void)searchAgentClearedResults:(SPUISearchModel *)arg1;
- (void)searchAgentFinishedQueryWithoutAdditionalResults:(SPUISearchModel *)arg1;
- (bool)searchAgentHasWindow:(SPUISearchModel *)arg1;
- (void)searchAgentUpdatedResults:(SPUISearchModel *)arg1;

@end
