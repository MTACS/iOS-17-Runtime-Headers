
@interface _ATXAppLaunchGuardedHistory : NSObject {
    _ATXAppDailyDose * _appDailyDose;
    _ATXAppInfoManager * _appInfoManager;
    _ATXAppLaunchHistogramManager * _appLaunchHistogramManager;
    _ATXAppLaunchSequenceManager * _appLaunchSequenceManager;
    <ATXPredictionContextBuilderProtocol> * _contextBuilder;
    NSMutableArray * _deltaLog;
    _ATXDuetHelper * _duetHelper;
    ATXHeroPoiManager * _heroPoiManager;
}

- (void).cxx_destruct;

@end
