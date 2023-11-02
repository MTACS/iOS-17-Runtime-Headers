
@interface PXFeedbackCollector : NSObject {
    PXFeedbackStore * _feedbackStore;
}

@property (nonatomic, readonly) PXFeedbackStore *feedbackStore;

- (void).cxx_destruct;
- (id)_appVersion;
- (id)_uniqueSystemIdentifier;
- (void)addFeedbackEntry:(id)arg1;
- (id)addFeedbackFromDictionary:(id)arg1;
- (id)feedbackEntryFromDictionary:(id)arg1;
- (id)feedbackStore;
- (id)init;
- (void)removeFeedbackEntry:(id)arg1;

@end
