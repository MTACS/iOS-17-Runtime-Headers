
@interface TRIExperimentBaseTaskGuardedData : NSObject {
    NSMutableArray * dimensions;
    bool  logAsRollout;
    NSMutableArray * metrics;
    TRITrialSystemTelemetry * trialSystemTelemetry;
}

- (void).cxx_destruct;

@end
