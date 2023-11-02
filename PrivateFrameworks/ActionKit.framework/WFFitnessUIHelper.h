
@interface WFFitnessUIHelper : NSObject

+ (id)activityTypeForLocalizedActivityName:(id)arg1;
+ (id)allActivityTypes;
+ (id)allActivityTypesIncludingWheelchairWorkouts:(bool)arg1 includingSwimmingWorkouts:(bool)arg2;
+ (bool)isWheelchairUser;
+ (void)preferredUnitsForActivityType:(id)arg1 completion:(id /* block */)arg2;
+ (id)quantityTypesForActivityType:(id)arg1;
+ (id)timeUnits;

@end
