
@protocol SASPresentationManagerDelegate

@required

- (void)presentationManager:(SASPresentationManager *)arg1 didChangeAggregateState:(SASPresentationAggregateState *)arg2;
- (void)presentationManager:(SASPresentationManager *)arg1 didEncounterError:(long long)arg2;

@end
