
@interface ATXModeHeuristicClassifierGuardedData : NSObject {
    ATXModeFeatureSet * _aggregateFeatures;
    NSMutableArray * _featureBuffer;
    NSDate * _lastFeatureUpdateDate;
    unsigned long long  _mode;
}

- (void).cxx_destruct;

@end
