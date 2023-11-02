
@interface BCSAnalyticsLogger : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedLogger;

- (void).cxx_destruct;
- (id)_eventPayloadForAction:(id)arg1;
- (id)_initWithQueue:(id)arg1;
- (void)_sendEventLazyWithName:(id)arg1 payload:(id)arg2;
- (id)_stringForCodeType:(long long)arg1;
- (id)_stringForDataType:(long long)arg1;
- (void)didActivateNFCReader;
- (void)didScanNFCTagOfType:(long long)arg1;
- (void)logBarcodeActivatedEventForAction:(id)arg1;
- (void)logBarcodeDetectedEventForAction:(id)arg1 fromBundleID:(id)arg2;
- (void)logBarcodeDetectedEventForAction:(id)arg1 startTime:(unsigned long long)arg2;
- (void)logBarcodePreviewedEventForContentType:(long long)arg1;

@end
