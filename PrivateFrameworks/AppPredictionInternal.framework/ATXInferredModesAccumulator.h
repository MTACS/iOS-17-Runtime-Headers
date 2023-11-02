
@interface ATXInferredModesAccumulator : NSObject {
    NSMutableArray * _inferredModeStartingEvents;
    NSMutableArray * _usageInsightsInferredModeEvents;
}

- (void).cxx_destruct;
- (id)init;
- (void)recordInferredModeEndEvent:(id)arg1;
- (void)recordInferredModeStartEvent:(id)arg1;
- (id)usageInsightsInferredATXModeEvents;

@end
