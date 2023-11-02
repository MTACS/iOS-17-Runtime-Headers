
@interface ATXOnboardingStackWidgetCacheManager : NSObject {
    BMAppLaunchStream * _appLaunchStream;
    NSString * _cachePath;
    unsigned long long  _max3PWidgetsToSerialize;
}

- (void).cxx_destruct;
- (id)_mapDescriptorsToAppLaunchData:(id)arg1 error:(id*)arg2;
- (id)_sortAndFilterOutLeastUsed3PWidgets:(id)arg1;
- (void)_sortWidgetsByDistinctDaysAppWasLaunched:(id)arg1 withAppLaunchDictionary:(id)arg2;
- (id)_splitDescriptorsIntoFirstPartyAndThirdParty:(id)arg1;
- (bool)_writeOnboardingWidgetStackCache:(id)arg1 withError:(id*)arg2;
- (id)fetchOnboardingStackWidgetCacheWithError:(id*)arg1;
- (id)init;
- (id)initWithPath:(id)arg1 appLaunchStream:(id)arg2 max3PWidgetsToSerialize:(unsigned long long)arg3;
- (id)updateCacheWithActivity:(id)arg1;

@end
