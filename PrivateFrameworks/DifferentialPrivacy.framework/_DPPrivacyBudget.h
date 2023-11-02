
@interface _DPPrivacyBudget : NSObject {
    _DPPrivacyBudgetProperties * _budgetProperties;
    _DPPrivacyBudgetRecord * _budgetRecord;
    NSString * _name;
}

@property (nonatomic, readonly) _DPPrivacyBudgetProperties *budgetProperties;
@property (retain) _DPPrivacyBudgetRecord *budgetRecord;
@property (nonatomic, readonly, copy) NSString *name;

+ (long long)balanceForBudgetWithName:(id)arg1;
+ (double)balanceForCohortAggregateBudgetWithName:(id)arg1;
+ (id)budgetWithName:(id)arg1;
+ (void)createBudgetRecordsIn:(id)arg1;
+ (bool)createDatabaseRecordIfMissingIn:(id)arg1 key:(id)arg2 balance:(long long)arg3 cohortAggregateBalance:(double)arg4;
+ (bool)credit:(unsigned long long)arg1 budgetWithName:(id)arg2;
+ (bool)creditCohortAggregate:(double)arg1 budgetWithName:(id)arg2;
+ (bool)debit:(unsigned long long)arg1 budgetWithName:(id)arg2;
+ (bool)debitCohortAggregate:(double)arg1 budgetWithName:(id)arg2;
+ (id)enforceBudgetForRecords:(id)arg1 withKey:(id)arg2 inDatabase:(id)arg3;
+ (id)enforceEnhancedBudgetForRecords:(id)arg1 withKey:(id)arg2 inDatabase:(id)arg3;
+ (id)enforceSimpleBudgetForRecords:(id)arg1 withKey:(id)arg2 inDatabase:(id)arg3;
+ (id)fetchBudgetKeyNamesFrom:(id)arg1;
+ (id)fetchBudgetRecordFrom:(id)arg1 key:(id)arg2;
+ (void)initialize;
+ (bool)isMultiDayIntervalBudgetWithName:(id)arg1;
+ (void)removeBudgetWithName:(id)arg1;
+ (void)resetAllBudgetRecordsIn:(id)arg1;
+ (void)resetLastUpdateDateForName:(id)arg1;
+ (void)updateAllBudgetsIn:(id)arg1;
+ (void)updateAllBudgetsUnsafeIn:(id)arg1;
+ (void)updateBudgetForRecords:(id)arg1 withKey:(id)arg2 inDatabase:(id)arg3;
+ (void)updateEnhancedBudgetForRecords:(id)arg1 withKey:(id)arg2 inDatabase:(id)arg3;
+ (void)updateSimpleBudgetForRecords:(id)arg1 withKey:(id)arg2 inDatabase:(id)arg3;

- (void).cxx_destruct;
- (id)budgetProperties;
- (id)budgetRecord;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 budgetProperties:(id)arg2;
- (bool)initializeBudgetRecordFrom:(id)arg1;
- (id)name;
- (void)setBudgetRecord:(id)arg1;

@end
