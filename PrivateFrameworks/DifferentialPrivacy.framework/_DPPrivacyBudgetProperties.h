
@interface _DPPrivacyBudgetProperties : NSObject {
    NSNumber * _interval;
    NSNumber * _intervalBudgetValue;
    NSNumber * _intervalChunksValue;
    NSNumber * _intervalCohortAggregateBudgetValue;
    NSString * _name;
    NSNumber * _refillAmount;
    NSNumber * _refillInterval;
}

@property (nonatomic, retain) NSNumber *interval;
@property (nonatomic, retain) NSNumber *intervalBudgetValue;
@property (nonatomic, retain) NSNumber *intervalChunksValue;
@property (nonatomic, retain) NSNumber *intervalCohortAggregateBudgetValue;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, retain) NSNumber *refillAmount;
@property (nonatomic, retain) NSNumber *refillInterval;

+ (id)allBudgetPropertiesKeys;
+ (id)budgetMaintenanceSchedule;
+ (id)budgetPropertiesForKey:(id)arg1;
+ (id)budgetPropertiesFromFile:(id)arg1;
+ (id)budgetPropertiesWithName:(id)arg1 fromDictionary:(id)arg2;
+ (void)initializeAllBudgetProperties;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 dictionary:(id)arg2;
- (id)interval;
- (id)intervalBudgetValue;
- (id)intervalChunksValue;
- (id)intervalCohortAggregateBudgetValue;
- (id)name;
- (id)refillAmount;
- (id)refillInterval;
- (void)setInterval:(id)arg1;
- (void)setIntervalBudgetValue:(id)arg1;
- (void)setIntervalChunksValue:(id)arg1;
- (void)setIntervalCohortAggregateBudgetValue:(id)arg1;
- (void)setRefillAmount:(id)arg1;
- (void)setRefillInterval:(id)arg1;

@end
