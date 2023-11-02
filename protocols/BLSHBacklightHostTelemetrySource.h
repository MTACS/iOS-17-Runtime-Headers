
@protocol BLSHBacklightHostTelemetrySource <BLSHBacklightHostObservable>

@required

- (void)setTelemetryDelegate:(id <BLSHBacklightHostTelemetryDelegate>)arg1;
- (<BLSHBacklightHostTelemetryDelegate> *)telemetryDelegate;

@end
