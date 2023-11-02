
@interface HMMCoreAnalyticsLogEventObserver : HMFObject <HMFLogging, HMMLogEventObserver> {
    <HMMCoreAnalyticsLogEventObserverDelegate> * _delegate;
    NSHashTable * _filters;
    id /* block */  _submissionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMMCoreAnalyticsLogEventObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSHashTable *filters;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ submissionBlock;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)addAccessoryDetailsForLogEvent:(id)arg1 toEventDictionary:(id)arg2;
- (void)addErrorDetailsForLogEvent:(id)arg1 toEventDictionary:(id)arg2;
- (void)addHomeSummaryForLogEvent:(id)arg1 toEventDictionary:(id)arg2;
- (void)compareOptionsToOptionalMethods:(id)arg1;
- (id)delegate;
- (id)dictionaryFromEvent:(id)arg1;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (bool)filterAcceptsEvent:(id)arg1;
- (id)filters;
- (id)initWithDelegate:(id)arg1 filters:(id)arg2;
- (id)initWithDelegate:(id)arg1 filters:(id)arg2 submissionBlock:(id /* block */)arg3;
- (id /* block */)submissionBlock;

@end
