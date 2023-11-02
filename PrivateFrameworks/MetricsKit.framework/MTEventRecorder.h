
@interface MTEventRecorder : MTObject {
    <MTEventRecorderDelegate> * _delegate;
    NSMutableArray * _eventListeners;
}

@property (nonatomic) <MTEventRecorderDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *eventListeners;
@property (nonatomic) bool monitorsLifecycleEvents;

+ (id)_compositePromiseWithPromises:(id)arg1 resolvingResultFromPromise:(id)arg2;
+ (id)_metricsDataApplyingAllowlisting:(id)arg1 usingRecorder:(id)arg2;

- (void).cxx_destruct;
- (id)_amsDelegate;
- (id)_flushUnreportedEventsUsingRecorder:(id)arg1;
- (id)_recordEvent:(id)arg1 toTopic:(id)arg2 usingRecorder:(id)arg3;
- (id)_recordEvent:(id)arg1 usingRecorder:(id)arg2;
- (void)addEventListener:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)eventListeners;
- (id)flushUnreportedEvents;
- (id)init;
- (id)initWithMetricsKit:(id)arg1;
- (void)maybeSubscribeToFlushNotification;
- (bool)monitorsLifecycleEvents;
- (id)recordEvent:(id)arg1;
- (id)recordEvent:(id)arg1 shouldSkipValidation:(bool)arg2;
- (id)recordEvent:(id)arg1 toTopic:(id)arg2;
- (void)removeEventListener:(id)arg1;
- (id)sendMethod;
- (void)setDelegate:(id)arg1;
- (void)setEventListeners:(id)arg1;
- (void)setMonitorsLifecycleEvents:(bool)arg1;

@end
