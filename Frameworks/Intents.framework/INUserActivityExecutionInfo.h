
@interface INUserActivityExecutionInfo : INExecutionInfo {
    NSString * _userActivityType;
}

@property (nonatomic, readonly, copy) NSString *userActivityType;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3 extensionBundleId:(id)arg4;
- (bool)canRunOnLocalDevice;
- (id)initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2;
- (id)userActivityType;

@end
