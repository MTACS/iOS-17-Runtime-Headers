
@interface VUIPerfMetricsAppLaunchController : NSObject {
    NSDictionary * _appLaunchData;
}

@property (nonatomic, copy) NSDictionary *appLaunchData;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_setAppLaunchFieldWithData:(id)arg1;
- (id)appLaunchData;
- (id)init;
- (void)recordAppLaunchEventWithEventType:(id)arg1;
- (void)setAppLaunchData:(id)arg1;

@end
