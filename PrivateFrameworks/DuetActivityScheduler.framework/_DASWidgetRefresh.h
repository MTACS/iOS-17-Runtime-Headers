
@interface _DASWidgetRefresh : _DASWidgetInfo {
    bool  _isDASInitiated;
    NSString * _rateLimitConfigurationName;
    NSDate * _refreshDate;
    NSString * _refreshReason;
}

@property (nonatomic) bool isDASInitiated;
@property (nonatomic, readonly) NSString *rateLimitConfigurationName;
@property (nonatomic, readonly) NSDate *refreshDate;
@property (nonatomic, copy) NSString *refreshReason;

+ (id)refreshAt:(id)arg1 forWidgetID:(id)arg2;

- (void).cxx_destruct;
- (id)initWithBudgetID:(id)arg1 extensionBundleID:(id)arg2 refreshDate:(id)arg3;
- (id)initWithRateLimitConfigurationName:(id)arg1 budgetID:(id)arg2 extensionBundleID:(id)arg3 refreshDate:(id)arg4 initiatedByDAS:(bool)arg5;
- (bool)isDASInitiated;
- (id)rateLimitConfigurationName;
- (id)refreshDate;
- (id)refreshReason;
- (void)setIsDASInitiated:(bool)arg1;
- (void)setRefreshReason:(id)arg1;

@end
