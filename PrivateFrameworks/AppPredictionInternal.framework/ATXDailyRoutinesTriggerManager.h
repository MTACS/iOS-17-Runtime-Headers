
@interface ATXDailyRoutinesTriggerManager : NSObject {
    <ATXCachedTransitionPredictorProtocol> * _cachedPredictor;
    <ATXContextStoreWriterProtocol> * _contextStoreWriter;
    NSDateFormatter * _dateFormatter;
    NSDate * _now;
    NSObject<OS_dispatch_queue> * _queue;
    <ATXTransitionPredictorProtocol> * _transitionPredictor;
}

@property (nonatomic, retain) NSDate *now;

+ (id)_wakeupDateForExitDate:(id)arg1 fromDate:(id)arg2;
+ (id)convenienceDateFormatter;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_scheduleOneShotJobAfterInterval:(double)arg1;
- (id)currentTransition;
- (id)init;
- (id)initWithCacheBasedPredictor:(id)arg1 transitionPredictor:(id)arg2 contextStoreWriter:(id)arg3;
- (id)now;
- (void)setNow:(id)arg1;
- (void)updateWithActivity:(id)arg1;

@end
