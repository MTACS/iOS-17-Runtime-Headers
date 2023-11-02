
@interface MTLoadUrlEventHandler : MTEventHandler <MTPerfBaseMeasurementTransformation>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTLoadUrlEventHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)dnsServersIPAddresses:(id)arg1;
- (id)eventType;
- (id)eventVersion:(id)arg1;
- (id)knownFields;
- (id)metricsDataWithPerfMeasurement:(id)arg1;
- (id)xpSamplingPercentageUsers:(id)arg1;
- (id)xpSessionDuration:(id)arg1;

@end
