
@protocol AFExperimentStateMutating <NSObject>

@required

- (void)setDidEnd:(bool)arg1;
- (void)setEndingGroupIdentifier:(NSString *)arg1;
- (void)setLastSyncDate:(NSDate *)arg1;
- (void)setVersion:(NSString *)arg1;

@end
