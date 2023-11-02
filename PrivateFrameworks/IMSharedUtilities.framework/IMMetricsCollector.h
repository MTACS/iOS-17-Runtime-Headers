
@interface IMMetricsCollector : NSObject {
    SDRDiagnosticReporter * _diagnosticReporter;
    NSObject<OS_dispatch_queue> * _metricsQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *metricsQueue;

+ (id)sharedInstance;

- (void*)_ADClientAddValueForScalarKeyApiInit;
- (void*)_ADClientPushValueForDistributionKeyApiInit;
- (void*)_ADClientSetValueForScalarKeyApiInit;
- (id)_stringForSpamType:(unsigned long long)arg1;
- (id)_stringForiMessageJunkType:(unsigned long long)arg1;
- (void)_trackEvent:(id)arg1;
- (void)_trackEvent:(id)arg1 withCount:(id)arg2;
- (void)_trackEvent:(id)arg1 withDictionary:(id)arg2;
- (void)_trackEvent:(id)arg1 withStatistic:(id)arg2;
- (void)autoBugCaptureWithSubType:(id)arg1 errorPayload:(id)arg2;
- (void)dealloc;
- (void)forceAutoBugCaptureWithSubType:(id)arg1 errorPayload:(id)arg2;
- (void)forceAutoBugCaptureWithSubType:(id)arg1 errorPayload:(id)arg2 type:(id)arg3 context:(id)arg4;
- (id)init;
- (void)metricAttachmentValidation:(bool)arg1 attachmentSize:(id)arg2 operationalErrorDomain:(id)arg3 operationalErrorCode:(id)arg4 validationErrorDomain:(id)arg5 validationErrorCode:(id)arg6;
- (id)metricsQueue;
- (void)setMetricsQueue:(id)arg1;
- (bool)trackAction:(id)arg1 extensionBundleID:(id)arg2 isNotification:(bool)arg3;
- (bool)trackEvent:(id)arg1;
- (bool)trackEvent:(id)arg1 withCount:(id)arg2;
- (bool)trackEvent:(id)arg1 withDictionary:(id)arg2;
- (bool)trackEvent:(id)arg1 withStatistic:(id)arg2;
- (void)trackSpamEvent:(unsigned long long)arg1;
- (void)trackSpamEvent:(unsigned long long)arg1 withDictionary:(id)arg2;
- (void)trackiMessageJunkEvent:(unsigned long long)arg1;
- (void)trackiMessageJunkEvent:(unsigned long long)arg1 withDictionary:(id)arg2;

@end
