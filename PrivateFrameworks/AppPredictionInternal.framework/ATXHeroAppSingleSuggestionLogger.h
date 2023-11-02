
@interface ATXHeroAppSingleSuggestionLogger : NSObject {
    NSMutableArray * _negativeEventBuffer;
    NSMutableArray * _positiveEventBuffer;
    <ATXPETEventTracker2Protocol> * _tracker;
}

@property (nonatomic, retain) NSMutableArray *negativeEventBuffer;
@property (nonatomic, retain) NSMutableArray *positiveEventBuffer;
@property (nonatomic, retain) <ATXPETEventTracker2Protocol> *tracker;

- (void).cxx_destruct;
- (void)_flushEventBuffer:(id)arg1 numEventsToSample:(long long)arg2 isNegative:(bool)arg3;
- (id)_heroAppEngagementMetricWithBundleId:(id)arg1 interactionType:(int)arg2 consumerSubType:(id)arg3;
- (void)_logHeroAppEngagementMetric:(id)arg1;
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
