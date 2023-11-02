
@protocol BLSHFlipbookTelemetry <NSObject>

@required

- (void)logTelemetryForInvalidation:(BLSHFlipbookInvalidationTelemetryData *)arg1;
- (void)logTelemetryForRenderSession:(BLSHFlipbookRenderSessionTelemetryData *)arg1;
- (void)logTelemetryForRequestDates:(BLSHFlipbookRequestDatesTelemetryData *)arg1;

@end
