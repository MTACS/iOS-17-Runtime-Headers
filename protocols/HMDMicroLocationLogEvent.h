
@protocol HMDMicroLocationLogEvent <NSObject>

@required

- (NSDictionary *)microLocationMetadataForLogEventObserver:(HMDMicroLocationLogEventObserver *)arg1;
- (unsigned long long)microLocationScanTriggerTypeForLogEventObserver:(HMDMicroLocationLogEventObserver *)arg1;
- (bool)shouldTriggerMicroLocationLocalizationScanForLogEventObserver:(HMDMicroLocationLogEventObserver *)arg1;
- (bool)shouldTriggerMicroLocationRecordingScanForLogEventObserver:(HMDMicroLocationLogEventObserver *)arg1;

@end
