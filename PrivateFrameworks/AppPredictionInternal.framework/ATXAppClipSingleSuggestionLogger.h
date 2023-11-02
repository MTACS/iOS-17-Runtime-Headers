
@interface ATXAppClipSingleSuggestionLogger : NSObject {
    NSMutableArray * _negativeEventBuffer;
    NSMutableArray * _positiveEventBuffer;
    <ATXPETEventTracker2Protocol> * _tracker;
}

@property (nonatomic, retain) NSMutableArray *negativeEventBuffer;
@property (nonatomic, retain) NSMutableArray *positiveEventBuffer;
@property (nonatomic, retain) <ATXPETEventTracker2Protocol> *tracker;

- (void).cxx_destruct;
- (id)_appClipEngagementMetricWithBundleId:(id)arg1 urlHash:(id)arg2 interactionType:(int)arg3 consumerSubType:(id)arg4;
- (void)_flushEventBuffer:(id)arg1 numEventsToSample:(long long)arg2 isNegative:(bool)arg3;
- (void)_logAppClipEngagementMetric:(id)arg1;
- (void)flushEventBuffers;
- (void)handleSingleSuggestion:(id)arg1;
- (id)init;
- (id)initWithTracker:(id)arg1;
- (id)negativeEventBuffer;
- (id)positiveEventBuffer;
- (void)setNegativeEventBuffer:(id)arg1;
- (void)setPositiveEventBuffer:(id)arg1;
- (void)setTracker:(id)arg1;
- (id)tracker;

@end
