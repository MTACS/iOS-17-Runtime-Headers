
@interface ATXOnboardingStackResultCacheManager : NSObject {
    NSDictionary * _appLaunchCounts;
    bool  _isiPad;
    NSString * _path;
}

- (void).cxx_destruct;
- (id)_generateResultCacheWithWidgetCache:(id)arg1;
- (id)_resultFromOnboardingStacks:(id)arg1;
- (bool)_writeOnboardingStackResultCache:(id)arg1;
- (id)fetchOnboardingStackResultCache;
- (id)init;
- (id)initWithPath:(id)arg1 isiPad:(bool)arg2;
- (bool)updateCacheWithActivity:(id)arg1 widgetCache:(id)arg2;

@end
