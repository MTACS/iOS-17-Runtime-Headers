
@interface SBSystemActionAnalyticsTracker : NSObject {
    NSString * _lastQueriedActionIdentifier;
    NSDate * _lastQueryTimestamp;
    SBSystemActionSuppressionStatus * _suppressionStatus;
}

- (void).cxx_destruct;

@end
