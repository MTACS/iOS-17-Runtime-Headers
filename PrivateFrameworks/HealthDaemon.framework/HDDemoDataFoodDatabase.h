
@interface HDDemoDataFoodDatabase : NSObject {
    NSArray * _beverages;
    NSArray * _breakfastFoods;
    NSDictionary * _canonicalDietaryUnits;
    NSDictionary * _dietaryNutrientDailyValues;
    NSArray * _dinnerFoods;
    NSArray * _lunchFoods;
    NSArray * _snackFoods;
}

- (void).cxx_destruct;
- (id)canonicalDietaryUnitForQuantityTypeIdentifier:(id)arg1;
- (id)coffee;
- (double)dailyValueForDietaryNutrientIdentifier:(id)arg1;
- (id)init;
- (id)randomFoodForType:(long long)arg1;

@end
