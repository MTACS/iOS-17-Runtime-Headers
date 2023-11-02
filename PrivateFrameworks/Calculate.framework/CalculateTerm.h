
@interface CalculateTerm : NSObject {
    struct { 
        unsigned long long w[2]; 
    }  _decimalValue;
    CalculateResult * _result;
    NSArray * _units;
    NSNumber * _value;
}

@property (nonatomic) struct { unsigned long long x1[2]; } decimalValue;
@property (nonatomic, readonly) NSString *formattedResult;
@property (nonatomic, readonly) NSString *formattedUnit;
@property (nonatomic, readonly) NSString *formattedValue;
@property (nonatomic, readonly) CalculateUnit *primaryUnit;
@property (nonatomic) CalculateResult *result;
@property (nonatomic, readonly) NSArray *units;
@property (nonatomic, readonly) NSNumber *value;

+ (id)termWithValue:(id)arg1 units:(id)arg2 result:(id)arg3;

- (void).cxx_destruct;
- (void)_setDecimalValue:(struct { unsigned long long x1[2]; })arg1;
- (double)_valueWithoutIrrelevantDecimals;
- (long long)compare:(id)arg1;
- (struct { unsigned long long x1[2]; })decimalValue;
- (id)description;
- (id)emptyNumeratorString;
- (id)formattedResult;
- (id)formattedUnit;
- (id)formattedUnitReplacingFirstNumerator:(id)arg1;
- (id)formattedValue;
- (void)getMaximumFractionDigits:(unsigned long long*)arg1 minimumFractionDigits:(unsigned long long*)arg2;
- (void)getMaximumFractionDigits:(unsigned long long*)arg1 minimumFractionDigits:(unsigned long long*)arg2 forValue:(struct { unsigned long long x1[2]; })arg3;
- (id)init;
- (bool)isCurrency;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (id)numberFormatter;
- (id)primaryUnit;
- (id)result;
- (id)resultContainingNumberFormatter;
- (void)setDecimalValue:(struct { unsigned long long x1[2]; })arg1;
- (void)setResult:(id)arg1;
- (id)units;
- (id)value;

@end
