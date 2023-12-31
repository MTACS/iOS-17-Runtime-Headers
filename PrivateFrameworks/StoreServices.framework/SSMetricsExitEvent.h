
@interface SSMetricsExitEvent : SSMetricsBaseEvent

@property (nonatomic, retain) NSString *exitType;
@property (nonatomic, retain) NSString *exitURL;

- (id)description;
- (id)exitType;
- (id)exitURL;
- (id)init;
- (void)setExitType:(id)arg1;
- (void)setExitTypeWithSuspendReason:(long long)arg1;
- (void)setExitURL:(id)arg1;

@end
