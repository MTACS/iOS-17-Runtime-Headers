
@protocol COInterestTrackerDelegate <NSObject>

@optional

- (void)interestTracker:(COInterestTracker *)arg1 setInterests:(NSSet *)arg2 forMember:(COClusterMember *)arg3 triggerReset:(bool)arg4;

@end
