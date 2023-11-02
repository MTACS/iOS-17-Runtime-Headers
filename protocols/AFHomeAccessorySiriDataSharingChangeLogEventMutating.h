
@protocol AFHomeAccessorySiriDataSharingChangeLogEventMutating <NSObject>

@required

- (void)setBuildVersion:(NSString *)arg1;
- (void)setChangeReason:(NSString *)arg1;
- (void)setChangeSource:(long long)arg1;
- (void)setDate:(NSDate *)arg1;
- (void)setLogEventIdentifier:(NSString *)arg1;
- (void)setNewOptInStatus:(long long)arg1;
- (void)setPreviousOptInStatus:(long long)arg1;
- (void)setProductVersion:(NSString *)arg1;
- (void)setSchemaVersion:(NSString *)arg1;

@end
