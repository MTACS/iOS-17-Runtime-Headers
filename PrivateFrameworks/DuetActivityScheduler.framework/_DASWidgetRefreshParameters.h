
@interface _DASWidgetRefreshParameters : NSObject {
    NSString * _appIdentifier;
    NSString * _ratelimitConfigurationName;
    NSDate * _refreshAfterDate;
    NSDate * _refreshBeforeDate;
    NSString * _remoteDeviceIdentifier;
    NSString * _widgetBudgetIdentifier;
    NSString * _widgetIdentifier;
}

@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, retain) NSString *ratelimitConfigurationName;
@property (nonatomic, retain) NSDate *refreshAfterDate;
@property (nonatomic, retain) NSDate *refreshBeforeDate;
@property (nonatomic, retain) NSString *remoteDeviceIdentifier;
@property (nonatomic, retain) NSString *widgetBudgetIdentifier;
@property (nonatomic, retain) NSString *widgetIdentifier;

- (void).cxx_destruct;
- (id)appIdentifier;
- (id)initWithIdentifier:(id)arg1 withBudgetIdentifier:(id)arg2 withRateLimitConfigurationName:(id)arg3 withRemoteDeviceIdentifier:(id)arg4 withAppIdentifier:(id)arg5 refreshAfter:(id)arg6 refreshBefore:(id)arg7;
- (id)ratelimitConfigurationName;
- (id)refreshAfterDate;
- (id)refreshBeforeDate;
- (id)remoteDeviceIdentifier;
- (void)setAppIdentifier:(id)arg1;
- (void)setRatelimitConfigurationName:(id)arg1;
- (void)setRefreshAfterDate:(id)arg1;
- (void)setRefreshBeforeDate:(id)arg1;
- (void)setRemoteDeviceIdentifier:(id)arg1;
- (void)setWidgetBudgetIdentifier:(id)arg1;
- (void)setWidgetIdentifier:(id)arg1;
- (id)widgetBudgetIdentifier;
- (id)widgetIdentifier;

@end
