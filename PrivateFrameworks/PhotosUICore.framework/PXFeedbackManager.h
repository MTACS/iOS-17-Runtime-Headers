
@interface PXFeedbackManager : NSObject {
    unsigned long long  _feedbackCollectionType;
    PXFeedbackCollector * _feedbackCollector;
    PXFeedbackSender * _feedbackSender;
}

@property (nonatomic, readonly) PXFeedbackCollector *feedbackCollector;
@property (nonatomic, readonly) PXFeedbackSender *feedbackSender;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)feedbackCollector;
- (id)feedbackSender;
- (id)init;
- (void)provideUserFeedbackEntry:(id)arg1;
- (id)provideUserFeedbackFromDictionary:(id)arg1 forFeedbackType:(unsigned long long)arg2;
- (void)removeFeedbackEntry:(id)arg1;

@end
