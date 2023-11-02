
@interface _DPSubmissionRateLimiter : NSObject {
    NSMutableDictionary * _limitDictionary;
    NSObject<OS_dispatch_queue> * _limiterQueue;
}

@property (nonatomic, retain) NSMutableDictionary *limitDictionary;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *limiterQueue;

+ (id)budgetNameForKey:(id)arg1;
+ (id)rateLimitsFromBudgetProperties;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)credit:(id)arg1 amount:(unsigned long long)arg2;
- (unsigned long long)debit:(unsigned long long)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithLimits:(id)arg1;
- (id)limitDictionary;
- (id)limiterQueue;
- (void)setLimitDictionary:(id)arg1;

@end
