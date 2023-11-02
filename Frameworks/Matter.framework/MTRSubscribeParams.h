
@interface MTRSubscribeParams : MTRReadParams {
    NSNumber * _maxInterval;
    NSNumber * _minInterval;
    bool  _replaceExistingSubscriptions;
    bool  _reportEventsUrgently;
    bool  _resubscribeAutomatically;
}

@property (nonatomic, copy) NSNumber *autoResubscribe;
@property (nonatomic, copy) NSNumber *keepPreviousSubscriptions;
@property (nonatomic, copy) NSNumber *maxInterval;
@property (nonatomic, copy) NSNumber *minInterval;
@property (getter=shouldReplaceExistingSubscriptions, nonatomic) bool replaceExistingSubscriptions;
@property (getter=shouldReportEventsUrgently, nonatomic) bool reportEventsUrgently;
@property (getter=shouldResubscribeAutomatically, nonatomic) bool resubscribeAutomatically;

+ (id)new;

- (void).cxx_destruct;
- (id)autoResubscribe;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithMinInterval:(id)arg1 maxInterval:(id)arg2;
- (id)keepPreviousSubscriptions;
- (id)maxInterval;
- (id)minInterval;
- (void)setAutoResubscribe:(id)arg1;
- (void)setKeepPreviousSubscriptions:(id)arg1;
- (void)setMaxInterval:(id)arg1;
- (void)setMinInterval:(id)arg1;
- (void)setReplaceExistingSubscriptions:(bool)arg1;
- (void)setReportEventsUrgently:(bool)arg1;
- (void)setResubscribeAutomatically:(bool)arg1;
- (bool)shouldReplaceExistingSubscriptions;
- (bool)shouldReportEventsUrgently;
- (bool)shouldResubscribeAutomatically;
- (void)toReadPrepareParams:(void*)arg1;

@end
