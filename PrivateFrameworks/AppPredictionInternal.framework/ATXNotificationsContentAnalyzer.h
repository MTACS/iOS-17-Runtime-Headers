
@interface ATXNotificationsContentAnalyzer : NSObject {
    NSDate * _lastUpdated;
    NSArray * _ppnames;
    NSArray * _ppscores;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)analyzeContent:(id)arg1;
- (id)init;
- (bool)isExpired;
- (void)updateAnalyzers;

@end
