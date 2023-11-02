
@interface ATXMagicalMomentsAppPredictorFeedback : NSObject <ATXProactiveSuggestionFeedbackListenerProtocol> {
    <ATXPETEventTracker2Protocol> * _tracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_anchorTypeFromBundleIdToAnchorTypeMap:(id)arg1 bundleId:(id)arg2;
- (void)_handleEngagedProactiveSuggestion:(id)arg1 consumerSubType:(unsigned char)arg2 bundleIdToAnchorType:(id)arg3;
- (void)_handleShownProactiveSuggestion:(id)arg1 consumerSubType:(unsigned char)arg2 bundleIdToAnchorType:(id)arg3;
- (id)clientModelIds;
- (id)getCurrentABGroup;
- (id)init;
- (id)initWithTracker:(id)arg1;
- (void)logEngagedMMMetricsEntryForBundle:(id)arg1 consumerSubType:(unsigned char)arg2 anchorType:(long long)arg3 abGroup:(id)arg4 score:(double)arg5;
- (void)logShownMMMetricsEntryForBundle:(id)arg1 consumerSubType:(unsigned char)arg2 anchorType:(long long)arg3 abGroup:(id)arg4 score:(double)arg5;
- (void)receiveUIFeedbackResult:(id)arg1;

@end
