
@interface AssistantSiriAnalyticsClockWatcher : NSObject <SiriAnalyticsWhiteRoseDelegate> {
    SiriAnalyticsClientMessageStream * _clientMessageStream;
    SiriAnalyticsClockInactivityScheduler * _inactivityScheduler;
    SiriAnalyticsInternalTelemetry * _internalTelemetry;
    SiriAnalyticsMetadataExtractor * _metadataExtractor;
    SiriAnalyticsMetastore * _metastore;
    SiriAnalyticsPreprocessor * _preprocessor;
    SiriAnalyticsSensitiveConditionsObservers * _sensitiveConditionsObservers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_triggerDeviceFixedContextOnStreamUUID:(id)arg1;
- (void)_triggerSiriAccountInformation;
- (id)init;
- (id)initWithInternalTelemetry:(id)arg1 sensitiveConditionsObservers:(id)arg2 clientMessageStream:(id)arg3 preprocessor:(id)arg4 metastore:(id)arg5 scheduler:(id)arg6 metadataExtractor:(id)arg7;
- (void)whiteRose:(id)arg1 derivativeClockCreated:(id)arg2 rootClock:(id)arg3;
- (void)whiteRose:(id)arg1 rootClockCreated:(id)arg2;
- (void)whiteRose:(id)arg1 rootClockDestroyed:(id)arg2 reason:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)whiteRose:(id)arg1 willCreateRootClock:(id)arg2 completion:(id /* block */)arg3;

@end
