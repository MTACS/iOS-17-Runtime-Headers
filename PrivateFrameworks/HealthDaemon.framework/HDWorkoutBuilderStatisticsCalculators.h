
@interface HDWorkoutBuilderStatisticsCalculators : NSObject <NSSecureCoding> {
    NSMutableDictionary * _calculatorsByTypeAndActivityUUID;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allQuantityTypes;
- (id)calculatorForQuantityType:(id)arg1 activityUUID:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateCalculatorsForActivityUUID:(id)arg1 handler:(id /* block */)arg2;
- (void)enumerateCalculatorsForQuantityType:(id)arg1 handler:(id /* block */)arg2;
- (void)enumerateCalculatorsWithHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setCalculator:(id)arg1 forQuantityType:(id)arg2 activityUUID:(id)arg3;

@end
