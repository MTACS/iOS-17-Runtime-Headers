
@interface NSUnitFuelEfficiency : NSDimension <NSSecureCoding>

+ (id)baseUnit;
+ (id)icuType;
+ (void)initialize;
+ (id)litersPer100Kilometers;
+ (id)milesPerGallon;
+ (id)milesPerImperialGallon;
+ (bool)supportsRegionalPreference;

@end
