
@interface TRIDownloadLatencyTaskResultTelemetryBuilder : NSObject {
    NSMutableDictionary * _telemetryForDeployment;
    <TRILatencyMetricTelemetryValidating> * _validator;
}

@property (nonatomic, readonly) NSMutableDictionary *telemetryForDeployment;
@property (nonatomic, readonly) <TRILatencyMetricTelemetryValidating> *validator;

- (void).cxx_destruct;
- (void)_handleActivationTask:(id)arg1 runResult:(id)arg2;
- (void)_handleFetchTask:(id)arg1 runResult:(id)arg2;
- (void)_updateBuiltTelemetryWithDeployment:(id)arg1 rolloutFields:(id)arg2 downloadStatus:(int)arg3;
- (id)builtTelemetry;
- (id)initWithTelemetryValidator:(id)arg1;
- (id)telemetryForDeployment;
- (void)updateWithTask:(id)arg1 runResult:(id)arg2;
- (id)validator;

@end
