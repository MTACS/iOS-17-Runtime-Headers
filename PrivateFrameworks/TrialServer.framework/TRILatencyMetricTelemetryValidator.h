
@interface TRILatencyMetricTelemetryValidator : NSObject <TRILatencyMetricTelemetryValidating> {
    NSSet * _namespacesAllowedForLogging;
    TRIRolloutDatabase * _rolloutDb;
}

@property (nonatomic, readonly) NSSet *namespacesAllowedForLogging;
@property (nonatomic, readonly) TRIRolloutDatabase *rolloutDb;

- (void).cxx_destruct;
- (bool)_isRecordContainingAllowedLoggingNamespace:(id)arg1;
- (id)createRolloutFieldForDeployment:(id)arg1 factorPackSetId:(id)arg2 record:(id)arg3;
- (id)initWithRolloutDatabase:(id)arg1 paths:(id)arg2;
- (id)namespacesAllowedForLogging;
- (id)rolloutDb;
- (id)validateAndReturnTelemetryForDeployment:(id)arg1 factorPackSetId:(id)arg2;

@end
