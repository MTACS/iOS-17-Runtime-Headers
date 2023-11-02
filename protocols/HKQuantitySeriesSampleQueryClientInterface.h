
@protocol HKQuantitySeriesSampleQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverEnumerationResults:(HKCodableQuantitySeriesEnumerationResultCollection *)arg1 isFinal:(bool)arg2 query:(NSUUID *)arg3;
- (void)client_deliverQuantitySeries:(HKCodableQuantitySeries *)arg1 seriesAnchor:(long long)arg2 isFinal:(bool)arg3 query:(NSUUID *)arg4;

@end
