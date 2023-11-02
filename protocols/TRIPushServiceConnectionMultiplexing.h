
@protocol TRIPushServiceConnectionMultiplexing <NSObject>

@required

- (void)ensureSubscriptionsExistOnlyForRolloutDeployments:(NSArray *)arg1 experimentIds:(NSArray *)arg2 maxChannelsAllowed:(unsigned long long)arg3;
- (void)subscribeForExperimentId:(NSString *)arg1;
- (void)subscribeForRolloutDeployment:(TRIRolloutDeployment *)arg1;
- (void)switchToEnvironment:(unsigned char)arg1;
- (void)unsubscribeForExperimentId:(NSString *)arg1;

@end
