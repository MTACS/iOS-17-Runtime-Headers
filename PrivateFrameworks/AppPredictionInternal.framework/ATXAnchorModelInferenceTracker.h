
@interface ATXAnchorModelInferenceTracker : NSObject {
    NSUserDefaults * _defaults;
}

- (void).cxx_destruct;
- (void)clearAllIncompleteInferenceEvents;
- (id)fetchPersistedInferenceEvents;
- (id)inferenceEventsToTryAgain;
- (id)init;
- (void)persistInferenceEvent:(id)arg1;
- (void)trackInferenceFailedForInferenceEvent:(id)arg1;
- (void)trackInferenceFinishedForInferenceEvent:(id)arg1;
- (void)trackInferenceStartedForInferenceEvent:(id)arg1;

@end
