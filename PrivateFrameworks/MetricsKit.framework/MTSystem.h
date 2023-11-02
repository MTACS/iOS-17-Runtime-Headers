
@interface MTSystem : MTObject {
    MTEnvironment * _environment;
    <MTEventFilter> * _eventFilter;
    MTEventRecorder * _eventRecorder;
    NSObject<OS_dispatch_queue> * _queue;
    <MTEventFilter> * _treatmentFilter;
}

@property (nonatomic, retain) MTEnvironment *environment;
@property (nonatomic, retain) <MTEventFilter> *eventFilter;
@property (nonatomic, retain) MTEventRecorder *eventRecorder;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) <MTEventFilter> *treatmentFilter;

- (void).cxx_destruct;
- (id)environment;
- (id)eventFilter;
- (id)eventRecorder;
- (id)initWithMetricsKit:(id)arg1;
- (id)queue;
- (void)setEnvironment:(id)arg1;
- (void)setEventFilter:(id)arg1;
- (void)setEventFilterWithJavaScriptFunction:(id)arg1 context:(id)arg2 operationQueue:(id)arg3;
- (void)setEventRecorder:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTreatmentFilter:(id)arg1;
- (id)treatmentFilter;

@end
