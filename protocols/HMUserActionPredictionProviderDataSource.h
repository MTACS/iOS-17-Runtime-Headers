
@protocol HMUserActionPredictionProviderDataSource

@required

- (bool)deviceUnlockedSinceBootForUserActionPredictionProvider:(HMUserActionPredictionProvider *)arg1;
- (NSArray *)homesForUserActionPredictionProvider:(HMUserActionPredictionProvider *)arg1;

@end
