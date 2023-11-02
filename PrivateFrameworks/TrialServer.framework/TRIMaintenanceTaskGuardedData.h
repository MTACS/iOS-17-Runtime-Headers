
@interface TRIMaintenanceTaskGuardedData : NSObject {
    NSMutableArray * dimensions;
    NSMutableArray * metrics;
    TRITrialSystemTelemetry * trialSystemTelemetry;
}

- (void).cxx_destruct;

@end
