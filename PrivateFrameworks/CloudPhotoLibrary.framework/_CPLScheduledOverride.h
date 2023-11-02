
@interface _CPLScheduledOverride : NSObject {
    unsigned long long  _budget;
    <_CPLScheduledOverrideDelegate> * _delegate;
    NSDate * _endDate;
    NSString * _expirationDateStorageKey;
    NSString * _overrideReasonKey;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _reason;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) unsigned long long budget;
@property (nonatomic) <_CPLScheduledOverrideDelegate> *delegate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) unsigned long long reason;
@property (nonatomic, readonly) NSString *status;

+ (id)_expirationDateStorageKeyForBudget:(unsigned long long)arg1;
+ (unsigned long long)_systemBudgetForBudgetKey:(id)arg1;
+ (id)budgetOverrideReasonStorageKeyForBudget:(unsigned long long)arg1;
+ (id)currentBudgetOverrideTimeIntervalExpiryDateStorageKeyForBudget:(unsigned long long)arg1;
+ (id)currentBudgetOverrideTimeIntervalStorageKeyForBudget:(unsigned long long)arg1;
+ (bool)isBudgetTypeSupportedForProgressiveOverriding:(unsigned long long)arg1 withReason:(unsigned long long)arg2;
+ (double)nextTimeIntervalForOverridingBudget:(unsigned long long)arg1 withReason:(unsigned long long)arg2;
+ (double)nextTimeIntervalToUseGivenCurrent:(double)arg1 expiryDate:(id)arg2;

- (void).cxx_destruct;
- (void)_scheduleEndWithTimeInterval:(double)arg1;
- (unsigned long long)budget;
- (void)cancel;
- (id)delegate;
- (id)endDate;
- (id)initWithBudget:(unsigned long long)arg1 withReason:(unsigned long long)arg2 queue:(id)arg3;
- (id)queue;
- (unsigned long long)reason;
- (void)resetHeuristics;
- (bool)scheduleEndFromPersistedOverride;
- (bool)scheduleEndOfOverride;
- (void)setDelegate:(id)arg1;
- (id)status;

@end
