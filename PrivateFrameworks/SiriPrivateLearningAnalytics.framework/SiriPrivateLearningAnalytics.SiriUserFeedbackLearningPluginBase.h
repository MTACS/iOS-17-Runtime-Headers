
@interface SiriPrivateLearningAnalytics.SiriUserFeedbackLearningPluginBase : NSObject <MLROnDemandTaskPerforming> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  timeout;
    void usageLogger;
}

- (void).cxx_destruct;
- (id)init;
- (id)performTask:(id)arg1 error:(id*)arg2;

@end
