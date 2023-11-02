
@interface LSDatabaseRebuildContext : NSObject {
    NSError * _lastObservedError;
    NSMutableSet * _overriddenPlugins;
    LSRebuildStatisticsGatherer * _statsGatherer;
}

- (void).cxx_destruct;
- (id)initWithStatsGatherer:(id)arg1;

@end
