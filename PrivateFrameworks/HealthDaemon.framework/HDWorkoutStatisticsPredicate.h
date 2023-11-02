
@interface HDWorkoutStatisticsPredicate : HDSQLitePredicate {
    NSString * _column;
    long long  _comparisonType;
    HKQuantity * _quantity;
    HKQuantityType * _quantityType;
}

+ (id)_predicateForColumn:(id)arg1 quantity:(id)arg2 quantityType:(id)arg3 operatorType:(unsigned long long)arg4;
+ (id)predicateForAverageQuantity:(id)arg1 quantityType:(id)arg2 operatorType:(unsigned long long)arg3;
+ (id)predicateForMaximumQuantity:(id)arg1 quantityType:(id)arg2 operatorType:(unsigned long long)arg3;
+ (id)predicateForMinimumQuantity:(id)arg1 quantityType:(id)arg2 operatorType:(unsigned long long)arg3;
+ (id)predicateForSumQuantity:(id)arg1 quantityType:(id)arg2 operatorType:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (id)_init;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)description;

@end
