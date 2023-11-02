
@protocol GTMTLTelemetryService

@required

- (void)deregisterObserver:(unsigned long long)arg1;
- (GTTelemetryRequestToken *)query:(GTTelemetryRequestBatch *)arg1;
- (unsigned long long)registerObserver:(id <GTMTLTelemetryServiceObserver>)arg1;
- (GTTelemetryRequestToken *)update:(GTTelemetryRequestBatch *)arg1;

@end
