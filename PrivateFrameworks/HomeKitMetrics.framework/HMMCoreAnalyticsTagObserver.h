
@interface HMMCoreAnalyticsTagObserver : NSObject <HMFLogging, HMMTagObserving> {
    <HMMCoreAnalyticsLogEventFactory> * _logEventFactory;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    <HMMTagDispatching> * _tagDispatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <HMMCoreAnalyticsLogEventFactory> *logEventFactory;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) Class superclass;
@property (readonly) <HMMTagDispatching> *tagDispatcher;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configure;
- (id)initWithTagDispatcher:(id)arg1 logEventSubmitter:(id)arg2 logEventFactory:(id)arg3;
- (id)logEventFactory;
- (id)logEventSubmitter;
- (void)observeTaggedEvent:(id)arg1 addProcessorBlock:(id /* block */)arg2;
- (id)tagDispatcher;
- (void)unconfigure;

@end
