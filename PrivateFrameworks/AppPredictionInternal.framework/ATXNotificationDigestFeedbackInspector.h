
@interface ATXNotificationDigestFeedbackInspector : NSObject

- (id)_formatFeedbackDataForBundleId:(id)arg1 feedback:(id)arg2;
- (id)_histogramKeyForLocation:(id)arg1 feedback:(id)arg2;
- (void)addToHistogramForBundleId:(id)arg1 location:(id)arg2 feedback:(id)arg3 withReply:(id /* block */)arg4;
- (void)clearHistogramWithShouldResetBookmarks:(bool)arg1 reply:(id /* block */)arg2;
- (void)setHistogramValueForBundleId:(id)arg1 location:(id)arg2 feedback:(id)arg3 value:(id)arg4 withReply:(id /* block */)arg5;
- (void)showHistogramForBundleId:(id)arg1 withReply:(id /* block */)arg2;

@end
