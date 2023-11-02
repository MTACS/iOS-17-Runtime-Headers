
@interface TRIExperimentTaskSupportGuardedData : NSObject {
    NSMutableArray * dimensions;
    bool  logAsV1Rollout;
    NSMutableArray * metrics;
    TRITrialSystemTelemetry * trialSystemTelemetry;
}

- (void).cxx_destruct;

@end
